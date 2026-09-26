#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetPkFrameBuffer__FP10mgCTexture
// Address: 0x143be0 - 0x143c5c
void mgSetPkFrameBuffer__FP10mgCTexture_0x143be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetPkFrameBuffer__FP10mgCTexture_0x143be0");
#endif

    switch (ctx->pc) {
        case 0x143c00u: goto label_143c00;
        case 0x143c50u: goto label_143c50;
        default: break;
    }

    ctx->pc = 0x143be0u;

    // 0x143be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143be4: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x143BE4u;
    {
        const bool branch_taken_0x143be4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x143BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143BE4u;
            // 0x143be8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143be4) {
            ctx->pc = 0x143C08u;
            goto label_143c08;
        }
    }
    ctx->pc = 0x143BECu;
    // 0x143bec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x143becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x143bf0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x143bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143bf4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x143bf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143bf8: 0xc050f18  jal         func_143C60
    ctx->pc = 0x143BF8u;
    SET_GPR_U32(ctx, 31, 0x143C00u);
    ctx->pc = 0x143BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143BF8u;
            // 0x143bfc: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C60u;
    if (runtime->hasFunction(0x143C60u)) {
        auto targetFn = runtime->lookupFunction(0x143C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143C00u; }
        if (ctx->pc != 0x143C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__Fiiii_0x143c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143C00u; }
        if (ctx->pc != 0x143C00u) { return; }
    }
    ctx->pc = 0x143C00u;
label_143c00:
    // 0x143c00: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x143C00u;
    {
        const bool branch_taken_0x143c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143C00u;
            // 0x143c04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c00) {
            ctx->pc = 0x143C54u;
            goto label_143c54;
        }
    }
    ctx->pc = 0x143C08u;
label_143c08:
    // 0x143c08: 0x94820038  lhu         $v0, 0x38($a0)
    ctx->pc = 0x143c08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x143c0c: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x143c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x143c10: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143C10u;
    {
        const bool branch_taken_0x143c10 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x143C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143C10u;
            // 0x143c14: 0x24143  sra         $t0, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c10) {
            ctx->pc = 0x143C20u;
            goto label_143c20;
        }
    }
    ctx->pc = 0x143C18u;
    // 0x143c18: 0x2442001f  addiu       $v0, $v0, 0x1F
    ctx->pc = 0x143c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31));
    // 0x143c1c: 0x24143  sra         $t0, $v0, 5
    ctx->pc = 0x143c1cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 5));
label_143c20:
    // 0x143c20: 0xdc830038  ld          $v1, 0x38($a0)
    ctx->pc = 0x143c20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x143c24: 0x9482003a  lhu         $v0, 0x3A($a0)
    ctx->pc = 0x143c24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 58)));
    // 0x143c28: 0x84860004  lh          $a2, 0x4($a0)
    ctx->pc = 0x143c28u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x143c2c: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x143c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x143c30: 0x31ebe  dsrl32      $v1, $v1, 26
    ctx->pc = 0x143c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 26));
    // 0x143c34: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x143c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x143c38: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x143c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x143c3c: 0x23ebe  dsrl32      $a3, $v0, 26
    ctx->pc = 0x143c3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x143c40: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x143c40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x143c44: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x143c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c48: 0xc050f18  jal         func_143C60
    ctx->pc = 0x143C48u;
    SET_GPR_U32(ctx, 31, 0x143C50u);
    ctx->pc = 0x143C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143C48u;
            // 0x143c4c: 0x5283f  dsra32      $a1, $a1, 0 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C60u;
    if (runtime->hasFunction(0x143C60u)) {
        auto targetFn = runtime->lookupFunction(0x143C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143C50u; }
        if (ctx->pc != 0x143C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkFrameBuffer__Fiiii_0x143c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143C50u; }
        if (ctx->pc != 0x143C50u) { return; }
    }
    ctx->pc = 0x143C50u;
label_143c50:
    // 0x143c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143c54:
    // 0x143c54: 0x3e00008  jr          $ra
    ctx->pc = 0x143C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143C54u;
            // 0x143c58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143C5Cu;
}
