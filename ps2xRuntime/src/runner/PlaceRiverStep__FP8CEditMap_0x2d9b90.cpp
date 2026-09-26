#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlaceRiverStep__FP8CEditMap
// Address: 0x2d9b90 - 0x2d9c70
void PlaceRiverStep__FP8CEditMap_0x2d9b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlaceRiverStep__FP8CEditMap_0x2d9b90");
#endif

    switch (ctx->pc) {
        case 0x2d9be4u: goto label_2d9be4;
        case 0x2d9bf4u: goto label_2d9bf4;
        case 0x2d9c0cu: goto label_2d9c0c;
        case 0x2d9c24u: goto label_2d9c24;
        case 0x2d9c50u: goto label_2d9c50;
        default: break;
    }

    ctx->pc = 0x2d9b90u;

    // 0x2d9b90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d9b94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d9b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d9b98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d9b9c: 0x8f829e40  lw          $v0, -0x61C0($gp)
    ctx->pc = 0x2d9b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942272)));
    // 0x2d9ba0: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D9BA0u;
    {
        const bool branch_taken_0x2d9ba0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D9BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9BA0u;
            // 0x2d9ba4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ba0) {
            ctx->pc = 0x2D9BB0u;
            goto label_2d9bb0;
        }
    }
    ctx->pc = 0x2D9BA8u;
    // 0x2d9ba8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2D9BA8u;
    {
        const bool branch_taken_0x2d9ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9BA8u;
            // 0x2d9bac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ba8) {
            ctx->pc = 0x2D9C60u;
            goto label_2d9c60;
        }
    }
    ctx->pc = 0x2D9BB0u;
label_2d9bb0:
    // 0x2d9bb0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2d9bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d9bb4: 0xaf829e40  sw          $v0, -0x61C0($gp)
    ctx->pc = 0x2d9bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942272), GPR_U32(ctx, 2));
    // 0x2d9bb8: 0x8f839e40  lw          $v1, -0x61C0($gp)
    ctx->pc = 0x2d9bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942272)));
    // 0x2d9bbc: 0x2862001e  slti        $v0, $v1, 0x1E
    ctx->pc = 0x2d9bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x2d9bc0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9BC0u;
    {
        const bool branch_taken_0x2d9bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9BC0u;
            // 0x2d9bc4: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9bc0) {
            ctx->pc = 0x2D9BD4u;
            goto label_2d9bd4;
        }
    }
    ctx->pc = 0x2D9BC8u;
    // 0x2d9bc8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2d9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d9bcc: 0xaf829e3c  sw          $v0, -0x61C4($gp)
    ctx->pc = 0x2d9bccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942268), GPR_U32(ctx, 2));
    // 0x2d9bd0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2d9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2d9bd4:
    // 0x2d9bd4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D9BD4u;
    {
        const bool branch_taken_0x2d9bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d9bd4) {
            ctx->pc = 0x2D9BF4u;
            goto label_2d9bf4;
        }
    }
    ctx->pc = 0x2D9BDCu;
    // 0x2d9bdc: 0xc064218  jal         func_190860
    ctx->pc = 0x2D9BDCu;
    SET_GPR_U32(ctx, 31, 0x2D9BE4u);
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9BE4u; }
        if (ctx->pc != 0x2D9BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9BE4u; }
        if (ctx->pc != 0x2D9BE4u) { return; }
    }
    ctx->pc = 0x2D9BE4u;
label_2d9be4:
    // 0x2d9be4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d9be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9be8: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x2d9be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2d9bec: 0xc063818  jal         func_18E060
    ctx->pc = 0x2D9BECu;
    SET_GPR_U32(ctx, 31, 0x2D9BF4u);
    ctx->pc = 0x2D9BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9BECu;
            // 0x2d9bf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9BF4u; }
        if (ctx->pc != 0x2D9BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9BF4u; }
        if (ctx->pc != 0x2D9BF4u) { return; }
    }
    ctx->pc = 0x2D9BF4u;
label_2d9bf4:
    // 0x2d9bf4: 0x8f839e40  lw          $v1, -0x61C0($gp)
    ctx->pc = 0x2d9bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942272)));
    // 0x2d9bf8: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2d9bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2d9bfc: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D9BFCu;
    {
        const bool branch_taken_0x2d9bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D9C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9BFCu;
            // 0x2d9c00: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9bfc) {
            ctx->pc = 0x2D9C50u;
            goto label_2d9c50;
        }
    }
    ctx->pc = 0x2D9C04u;
    // 0x2d9c04: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x2D9C04u;
    SET_GPR_U32(ctx, 31, 0x2D9C0Cu);
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9C0Cu; }
        if (ctx->pc != 0x2D9C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9C0Cu; }
        if (ctx->pc != 0x2D9C0Cu) { return; }
    }
    ctx->pc = 0x2D9C0Cu;
label_2d9c0c:
    // 0x2d9c0c: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2d9c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x2d9c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9c14: 0x24a58950  addiu       $a1, $a1, -0x76B0
    ctx->pc = 0x2d9c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936912));
    // 0x2d9c18: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d9c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d9c1c: 0xc0b665c  jal         func_2D9970
    ctx->pc = 0x2D9C1Cu;
    SET_GPR_U32(ctx, 31, 0x2D9C24u);
    ctx->pc = 0x2D9C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9C1Cu;
            // 0x2d9c20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9970u;
    if (runtime->hasFunction(0x2D9970u)) {
        auto targetFn = runtime->lookupFunction(0x2D9970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9C24u; }
        if (ctx->pc != 0x2D9C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlaceEditParts__FP8CEditMapPfPfP13EP_PLACE_INFO_0x2d9970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9C24u; }
        if (ctx->pc != 0x2D9C24u) { return; }
    }
    ctx->pc = 0x2D9C24u;
label_2d9c24:
    // 0x2d9c24: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D9C24u;
    {
        const bool branch_taken_0x2d9c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9C24u;
            // 0x2d9c28: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9c24) {
            ctx->pc = 0x2D9C50u;
            goto label_2d9c50;
        }
    }
    ctx->pc = 0x2D9C2Cu;
    // 0x2d9c2c: 0x3c0501f6  lui         $a1, 0x1F6
    ctx->pc = 0x2d9c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)502 << 16));
    // 0x2d9c30: 0x24427120  addiu       $v0, $v0, 0x7120
    ctx->pc = 0x2d9c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28960));
    // 0x2d9c34: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2d9c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d9c38: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2d9c38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9c3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2d9c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9c40: 0x24a58950  addiu       $a1, $a1, -0x76B0
    ctx->pc = 0x2d9c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936912));
    // 0x2d9c44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d9c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9c48: 0xc0beb74  jal         func_2FADD0
    ctx->pc = 0x2D9C48u;
    SET_GPR_U32(ctx, 31, 0x2D9C50u);
    ctx->pc = 0x2D9C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9C48u;
            // 0x2d9c4c: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FADD0u;
    if (runtime->hasFunction(0x2FADD0u)) {
        auto targetFn = runtime->lookupFunction(0x2FADD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9C50u; }
        if (ctx->pc != 0x2D9C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditPaintEffect__FP10CEditPartsPfPfi_0x2fadd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9C50u; }
        if (ctx->pc != 0x2D9C50u) { return; }
    }
    ctx->pc = 0x2D9C50u;
label_2d9c50:
    // 0x2d9c50: 0x8f829e40  lw          $v0, -0x61C0($gp)
    ctx->pc = 0x2d9c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942272)));
    // 0x2d9c54: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9C54u;
    {
        const bool branch_taken_0x2d9c54 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2D9C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9C54u;
            // 0x2d9c58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9c54) {
            ctx->pc = 0x2D9C60u;
            goto label_2d9c60;
        }
    }
    ctx->pc = 0x2D9C5Cu;
    // 0x2d9c5c: 0xaf809e40  sw          $zero, -0x61C0($gp)
    ctx->pc = 0x2d9c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942272), GPR_U32(ctx, 0));
label_2d9c60:
    // 0x2d9c60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d9c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9c64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9c68: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9C68u;
            // 0x2d9c6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9C70u;
}
