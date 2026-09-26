#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: push_float__10CRunScriptFf
// Address: 0x186ec0 - 0x186f0c
void push_float__10CRunScriptFf_0x186ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("push_float__10CRunScriptFf_0x186ec0");
#endif

    switch (ctx->pc) {
        case 0x186edcu: goto label_186edc;
        default: break;
    }

    ctx->pc = 0x186ec0u;

    // 0x186ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x186ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x186ec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x186ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x186ec8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x186ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x186ecc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x186eccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x186ed0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ed4: 0xc061b54  jal         func_186D50
    ctx->pc = 0x186ED4u;
    SET_GPR_U32(ctx, 31, 0x186EDCu);
    ctx->pc = 0x186ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x186ED4u;
            // 0x186ed8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x186D50u;
    if (runtime->hasFunction(0x186D50u)) {
        auto targetFn = runtime->lookupFunction(0x186D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186EDCu; }
        if (ctx->pc != 0x186EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        check_stack__10CRunScriptFv_0x186d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186EDCu; }
        if (ctx->pc != 0x186EDCu) { return; }
    }
    ctx->pc = 0x186EDCu;
label_186edc:
    // 0x186edc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x186edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x186ee0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x186ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x186ee4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x186ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x186ee8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x186ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x186eec: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x186eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x186ef0: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x186ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x186ef4: 0xe4940004  swc1        $f20, 0x4($a0)
    ctx->pc = 0x186ef4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x186ef8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186efc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x186efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x186f00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x186f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186f04: 0x3e00008  jr          $ra
    ctx->pc = 0x186F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186F04u;
            // 0x186f08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x186F0Cu;
}
