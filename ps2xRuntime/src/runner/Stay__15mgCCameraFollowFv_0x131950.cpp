#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Stay__15mgCCameraFollowFv
// Address: 0x131950 - 0x131990
void Stay__15mgCCameraFollowFv_0x131950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Stay__15mgCCameraFollowFv_0x131950");
#endif

    switch (ctx->pc) {
        case 0x131964u: goto label_131964;
        case 0x131978u: goto label_131978;
        default: break;
    }

    ctx->pc = 0x131950u;

    // 0x131950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x131954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x131954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x131958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x131958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13195c: 0xc04c4e8  jal         func_1313A0
    ctx->pc = 0x13195Cu;
    SET_GPR_U32(ctx, 31, 0x131964u);
    ctx->pc = 0x131960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13195Cu;
            // 0x131960: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313A0u;
    if (runtime->hasFunction(0x1313A0u)) {
        auto targetFn = runtime->lookupFunction(0x1313A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131964u; }
        if (ctx->pc != 0x131964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Stay__9mgCCameraFv_0x1313a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131964u; }
        if (ctx->pc != 0x131964u) { return; }
    }
    ctx->pc = 0x131964u;
label_131964:
    // 0x131964: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x131964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x131968: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x131968u;
    {
        const bool branch_taken_0x131968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13196Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131968u;
            // 0x13196c: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131968) {
            ctx->pc = 0x131980u;
            goto label_131980;
        }
    }
    ctx->pc = 0x131970u;
    // 0x131970: 0xc041c5c  jal         func_107170
    ctx->pc = 0x131970u;
    SET_GPR_U32(ctx, 31, 0x131978u);
    ctx->pc = 0x131974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131970u;
            // 0x131974: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131978u; }
        if (ctx->pc != 0x131978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131978u; }
        if (ctx->pc != 0x131978u) { return; }
    }
    ctx->pc = 0x131978u;
label_131978:
    // 0x131978: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x131978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13197c: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x13197cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
label_131980:
    // 0x131980: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x131980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131984: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131984u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131988: 0x3e00008  jr          $ra
    ctx->pc = 0x131988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13198Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131988u;
            // 0x13198c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131990u;
}
