#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetStackVector__FPfP12RS_STACKDATA
// Address: 0x25f8d0 - 0x25f91c
void GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetStackVector__FPfP12RS_STACKDATA_0x25f8d0");
#endif

    switch (ctx->pc) {
        case 0x25f8e8u: goto label_25f8e8;
        case 0x25f8f8u: goto label_25f8f8;
        case 0x25f904u: goto label_25f904;
        default: break;
    }

    ctx->pc = 0x25f8d0u;

    // 0x25f8d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25f8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25f8d4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x25f8d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f8d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x25f8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f8dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25f8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25f8e0: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x25F8E0u;
    SET_GPR_U32(ctx, 31, 0x25F8E8u);
    ctx->pc = 0x25F8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F8E0u;
            // 0x25f8e4: 0x24850008  addiu       $a1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F8E8u; }
        if (ctx->pc != 0x25F8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F8E8u; }
        if (ctx->pc != 0x25F8E8u) { return; }
    }
    ctx->pc = 0x25F8E8u;
label_25f8e8:
    // 0x25f8e8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x25f8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f8ec: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x25f8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x25f8f0: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x25F8F0u;
    SET_GPR_U32(ctx, 31, 0x25F8F8u);
    ctx->pc = 0x25F8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F8F0u;
            // 0x25f8f4: 0x24850008  addiu       $a1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F8F8u; }
        if (ctx->pc != 0x25F8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F8F8u; }
        if (ctx->pc != 0x25F8F8u) { return; }
    }
    ctx->pc = 0x25F8F8u;
label_25f8f8:
    // 0x25f8f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x25f8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25f8fc: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x25F8FCu;
    SET_GPR_U32(ctx, 31, 0x25F904u);
    ctx->pc = 0x25F900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25F8FCu;
            // 0x25f900: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F904u; }
        if (ctx->pc != 0x25F904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25F904u; }
        if (ctx->pc != 0x25F904u) { return; }
    }
    ctx->pc = 0x25F904u;
label_25f904:
    // 0x25f904: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x25f904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x25f908: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25f908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25f90c: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x25f90cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x25f910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25f910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25f914: 0x3e00008  jr          $ra
    ctx->pc = 0x25F914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25F914u;
            // 0x25f918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25F91Cu;
}
