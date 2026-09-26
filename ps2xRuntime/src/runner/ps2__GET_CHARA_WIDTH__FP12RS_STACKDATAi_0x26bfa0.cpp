#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_CHARA_WIDTH__FP12RS_STACKDATAi
// Address: 0x26bfa0 - 0x26bfec
void ps2__GET_CHARA_WIDTH__FP12RS_STACKDATAi_0x26bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_CHARA_WIDTH__FP12RS_STACKDATAi_0x26bfa0");
#endif

    switch (ctx->pc) {
        case 0x26bfb4u: goto label_26bfb4;
        case 0x26bfbcu: goto label_26bfbc;
        case 0x26bfd8u: goto label_26bfd8;
        default: break;
    }

    ctx->pc = 0x26bfa0u;

    // 0x26bfa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26bfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26bfa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26bfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26bfa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26bfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26bfac: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26BFACu;
    SET_GPR_U32(ctx, 31, 0x26BFB4u);
    ctx->pc = 0x26BFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BFACu;
            // 0x26bfb0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BFB4u; }
        if (ctx->pc != 0x26BFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BFB4u; }
        if (ctx->pc != 0x26BFB4u) { return; }
    }
    ctx->pc = 0x26BFB4u;
label_26bfb4:
    // 0x26bfb4: 0xc09ac74  jal         func_26B1D0
    ctx->pc = 0x26BFB4u;
    SET_GPR_U32(ctx, 31, 0x26BFBCu);
    ctx->pc = 0x26BFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BFB4u;
            // 0x26bfb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B1D0u;
    if (runtime->hasFunction(0x26B1D0u)) {
        auto targetFn = runtime->lookupFunction(0x26B1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BFBCu; }
        if (ctx->pc != 0x26BFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetChara__Fi_0x26b1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BFBCu; }
        if (ctx->pc != 0x26BFBCu) { return; }
    }
    ctx->pc = 0x26BFBCu;
label_26bfbc:
    // 0x26bfbc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BFBCu;
    {
        const bool branch_taken_0x26bfbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26bfbc) {
            ctx->pc = 0x26BFCCu;
            goto label_26bfcc;
        }
    }
    ctx->pc = 0x26BFC4u;
    // 0x26bfc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x26BFC4u;
    {
        const bool branch_taken_0x26bfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BFC4u;
            // 0x26bfc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bfc4) {
            ctx->pc = 0x26BFDCu;
            goto label_26bfdc;
        }
    }
    ctx->pc = 0x26BFCCu;
label_26bfcc:
    // 0x26bfcc: 0xc44c010c  lwc1        $f12, 0x10C($v0)
    ctx->pc = 0x26bfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26bfd0: 0xc097e54  jal         func_25F950
    ctx->pc = 0x26BFD0u;
    SET_GPR_U32(ctx, 31, 0x26BFD8u);
    ctx->pc = 0x26BFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BFD0u;
            // 0x26bfd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BFD8u; }
        if (ctx->pc != 0x26BFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BFD8u; }
        if (ctx->pc != 0x26BFD8u) { return; }
    }
    ctx->pc = 0x26BFD8u;
label_26bfd8:
    // 0x26bfd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26bfdc:
    // 0x26bfdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26bfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bfe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26bfe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bfe4: 0x3e00008  jr          $ra
    ctx->pc = 0x26BFE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BFE4u;
            // 0x26bfe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26BFECu;
}
