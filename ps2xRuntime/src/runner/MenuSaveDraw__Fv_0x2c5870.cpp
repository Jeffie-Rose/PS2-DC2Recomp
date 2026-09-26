#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuSaveDraw__Fv
// Address: 0x2c5870 - 0x2c5b14
void MenuSaveDraw__Fv_0x2c5870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuSaveDraw__Fv_0x2c5870");
#endif

    switch (ctx->pc) {
        case 0x2c5888u: goto label_2c5888;
        case 0x2c5890u: goto label_2c5890;
        case 0x2c58b0u: goto label_2c58b0;
        case 0x2c58dcu: goto label_2c58dc;
        case 0x2c58ecu: goto label_2c58ec;
        case 0x2c5900u: goto label_2c5900;
        case 0x2c5918u: goto label_2c5918;
        case 0x2c5928u: goto label_2c5928;
        case 0x2c593cu: goto label_2c593c;
        case 0x2c5948u: goto label_2c5948;
        case 0x2c5968u: goto label_2c5968;
        case 0x2c5974u: goto label_2c5974;
        case 0x2c5984u: goto label_2c5984;
        case 0x2c59a0u: goto label_2c59a0;
        case 0x2c59b4u: goto label_2c59b4;
        case 0x2c59c0u: goto label_2c59c0;
        case 0x2c59d0u: goto label_2c59d0;
        case 0x2c59e4u: goto label_2c59e4;
        case 0x2c59f0u: goto label_2c59f0;
        case 0x2c5a04u: goto label_2c5a04;
        case 0x2c5a10u: goto label_2c5a10;
        case 0x2c5a20u: goto label_2c5a20;
        case 0x2c5a34u: goto label_2c5a34;
        case 0x2c5a3cu: goto label_2c5a3c;
        case 0x2c5a5cu: goto label_2c5a5c;
        case 0x2c5a68u: goto label_2c5a68;
        case 0x2c5a78u: goto label_2c5a78;
        case 0x2c5a8cu: goto label_2c5a8c;
        case 0x2c5ad0u: goto label_2c5ad0;
        case 0x2c5adcu: goto label_2c5adc;
        case 0x2c5aecu: goto label_2c5aec;
        case 0x2c5b00u: goto label_2c5b00;
        default: break;
    }

    ctx->pc = 0x2c5870u;

    // 0x2c5870: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x2c5870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
    // 0x2c5874: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c5874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c5878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c5878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c587c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c587cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c5880: 0xc08ad0c  jal         func_22B430
    ctx->pc = 0x2C5880u;
    SET_GPR_U32(ctx, 31, 0x2C5888u);
    ctx->pc = 0x2C5884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5880u;
            // 0x2c5884: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B430u;
    if (runtime->hasFunction(0x22B430u)) {
        auto targetFn = runtime->lookupFunction(0x22B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5888u; }
        if (ctx->pc != 0x2C5888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormDraw__14CPosDataManageFv_0x22b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5888u; }
        if (ctx->pc != 0x2C5888u) { return; }
    }
    ctx->pc = 0x2C5888u;
label_2c5888:
    // 0x2c5888: 0xc0aff58  jal         func_2BFD60
    ctx->pc = 0x2C5888u;
    SET_GPR_U32(ctx, 31, 0x2C5890u);
    ctx->pc = 0x2BFD60u;
    if (runtime->hasFunction(0x2BFD60u)) {
        auto targetFn = runtime->lookupFunction(0x2BFD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5890u; }
        if (ctx->pc != 0x2C5890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuReturnMsg__Fv_0x2bfd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5890u; }
        if (ctx->pc != 0x2C5890u) { return; }
    }
    ctx->pc = 0x2C5890u;
label_2c5890:
    // 0x2c5890: 0x8f838ac8  lw          $v1, -0x7538($gp)
    ctx->pc = 0x2c5890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
    // 0x2c5894: 0x1060009a  beqz        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x2C5894u;
    {
        const bool branch_taken_0x2c5894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5894) {
            ctx->pc = 0x2C5B00u;
            goto label_2c5b00;
        }
    }
    ctx->pc = 0x2C589Cu;
    // 0x2c589c: 0x8f839520  lw          $v1, -0x6AE0($gp)
    ctx->pc = 0x2c589cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
    // 0x2c58a0: 0x10600097  beqz        $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x2C58A0u;
    {
        const bool branch_taken_0x2c58a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C58A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C58A0u;
            // 0x2c58a4: 0x27a40230  addiu       $a0, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c58a0) {
            ctx->pc = 0x2C5B00u;
            goto label_2c5b00;
        }
    }
    ctx->pc = 0x2C58A8u;
    // 0x2c58a8: 0xc0873cc  jal         func_21CF30
    ctx->pc = 0x2C58A8u;
    SET_GPR_U32(ctx, 31, 0x2C58B0u);
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C58B0u; }
        if (ctx->pc != 0x2C58B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C58B0u; }
        if (ctx->pc != 0x2C58B0u) { return; }
    }
    ctx->pc = 0x2C58B0u;
label_2c58b0:
    // 0x2c58b0: 0x8f839cc8  lw          $v1, -0x6338($gp)
    ctx->pc = 0x2c58b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941896)));
    // 0x2c58b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c58b8: 0x8c630124  lw          $v1, 0x124($v1)
    ctx->pc = 0x2c58b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x2c58bc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C58BCu;
    {
        const bool branch_taken_0x2c58bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C58C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C58BCu;
            // 0x2c58c0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c58bc) {
            ctx->pc = 0x2C58D0u;
            goto label_2c58d0;
        }
    }
    ctx->pc = 0x2C58C4u;
    // 0x2c58c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c58c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c58c8: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C58C8u;
    {
        const bool branch_taken_0x2c58c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c58c8) {
            ctx->pc = 0x2C5908u;
            goto label_2c5908;
        }
    }
    ctx->pc = 0x2C58D0u;
label_2c58d0:
    // 0x2c58d0: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c58d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c58d4: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2C58D4u;
    SET_GPR_U32(ctx, 31, 0x2C58DCu);
    ctx->pc = 0x2C58D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C58D4u;
            // 0x2c58d8: 0x24a5fd80  addiu       $a1, $a1, -0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C58DCu; }
        if (ctx->pc != 0x2C58DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C58DCu; }
        if (ctx->pc != 0x2C58DCu) { return; }
    }
    ctx->pc = 0x2C58DCu;
label_2c58dc:
    // 0x2c58dc: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c58dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c58e0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2c58e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c58e4: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2C58E4u;
    SET_GPR_U32(ctx, 31, 0x2C58ECu);
    ctx->pc = 0x2C58E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C58E4u;
            // 0x2c58e8: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C58ECu; }
        if (ctx->pc != 0x2C58ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C58ECu; }
        if (ctx->pc != 0x2C58ECu) { return; }
    }
    ctx->pc = 0x2C58ECu;
label_2c58ec:
    // 0x2c58ec: 0x8fa602c4  lw          $a2, 0x2C4($sp)
    ctx->pc = 0x2c58ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x2c58f0: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c58f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c58f4: 0x8fa702c8  lw          $a3, 0x2C8($sp)
    ctx->pc = 0x2c58f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x2c58f8: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2C58F8u;
    SET_GPR_U32(ctx, 31, 0x2C5900u);
    ctx->pc = 0x2C58FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C58F8u;
            // 0x2c58fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5900u; }
        if (ctx->pc != 0x2C5900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5900u; }
        if (ctx->pc != 0x2C5900u) { return; }
    }
    ctx->pc = 0x2C5900u;
label_2c5900:
    // 0x2c5900: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2C5900u;
    {
        const bool branch_taken_0x2c5900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5900u;
            // 0x2c5904: 0x8f849cc4  lw          $a0, -0x633C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5900) {
            ctx->pc = 0x2C5940u;
            goto label_2c5940;
        }
    }
    ctx->pc = 0x2C5908u;
label_2c5908:
    // 0x2c5908: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c5908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c590c: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c590cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c5910: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2C5910u;
    SET_GPR_U32(ctx, 31, 0x2C5918u);
    ctx->pc = 0x2C5914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5910u;
            // 0x2c5914: 0x24a5fda0  addiu       $a1, $a1, -0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5918u; }
        if (ctx->pc != 0x2C5918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5918u; }
        if (ctx->pc != 0x2C5918u) { return; }
    }
    ctx->pc = 0x2C5918u;
label_2c5918:
    // 0x2c5918: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c5918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c591c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2c591cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c5920: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2C5920u;
    SET_GPR_U32(ctx, 31, 0x2C5928u);
    ctx->pc = 0x2C5924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5920u;
            // 0x2c5924: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5928u; }
        if (ctx->pc != 0x2C5928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5928u; }
        if (ctx->pc != 0x2C5928u) { return; }
    }
    ctx->pc = 0x2C5928u;
label_2c5928:
    // 0x2c5928: 0x8fa602c4  lw          $a2, 0x2C4($sp)
    ctx->pc = 0x2c5928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 708)));
    // 0x2c592c: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c592cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c5930: 0x8fa702c8  lw          $a3, 0x2C8($sp)
    ctx->pc = 0x2c5930u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x2c5934: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2C5934u;
    SET_GPR_U32(ctx, 31, 0x2C593Cu);
    ctx->pc = 0x2C5938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5934u;
            // 0x2c5938: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C593Cu; }
        if (ctx->pc != 0x2C593Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C593Cu; }
        if (ctx->pc != 0x2C593Cu) { return; }
    }
    ctx->pc = 0x2C593Cu;
label_2c593c:
    // 0x2c593c: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c593cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
label_2c5940:
    // 0x2c5940: 0xc0bc6fc  jal         func_2F1BF0
    ctx->pc = 0x2C5940u;
    SET_GPR_U32(ctx, 31, 0x2C5948u);
    ctx->pc = 0x2C5944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5940u;
            // 0x2c5944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BF0u;
    if (runtime->hasFunction(0x2F1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5948u; }
        if (ctx->pc != 0x2C5948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveDataSize__18CMemoryCardManagerFi_0x2f1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5948u; }
        if (ctx->pc != 0x2C5948u) { return; }
    }
    ctx->pc = 0x2C5948u;
label_2c5948:
    // 0x2c5948: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5948u;
    {
        const bool branch_taken_0x2c5948 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C594Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5948u;
            // 0x2c594c: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5948) {
            ctx->pc = 0x2C5958u;
            goto label_2c5958;
        }
    }
    ctx->pc = 0x2C5950u;
    // 0x2c5950: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x2c5950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x2c5954: 0x23283  sra         $a2, $v0, 10
    ctx->pc = 0x2c5954u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
label_2c5958:
    // 0x2c5958: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c5958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c595c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c595cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c5960: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2C5960u;
    SET_GPR_U32(ctx, 31, 0x2C5968u);
    ctx->pc = 0x2C5964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5960u;
            // 0x2c5964: 0x24a5fdc0  addiu       $a1, $a1, -0x240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5968u; }
        if (ctx->pc != 0x2C5968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5968u; }
        if (ctx->pc != 0x2C5968u) { return; }
    }
    ctx->pc = 0x2C5968u;
label_2c5968:
    // 0x2c5968: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c5968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c596c: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2C596Cu;
    SET_GPR_U32(ctx, 31, 0x2C5974u);
    ctx->pc = 0x2C5970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C596Cu;
            // 0x2c5970: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5974u; }
        if (ctx->pc != 0x2C5974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5974u; }
        if (ctx->pc != 0x2C5974u) { return; }
    }
    ctx->pc = 0x2C5974u;
label_2c5974:
    // 0x2c5974: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c5974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c5978: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2c5978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c597c: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2C597Cu;
    SET_GPR_U32(ctx, 31, 0x2C5984u);
    ctx->pc = 0x2C5980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C597Cu;
            // 0x2c5980: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5984u; }
        if (ctx->pc != 0x2C5984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5984u; }
        if (ctx->pc != 0x2C5984u) { return; }
    }
    ctx->pc = 0x2C5984u;
label_2c5984:
    // 0x2c5984: 0x27b102c4  addiu       $s1, $sp, 0x2C4
    ctx->pc = 0x2c5984u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 708));
    // 0x2c5988: 0x27b002c8  addiu       $s0, $sp, 0x2C8
    ctx->pc = 0x2c5988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
    // 0x2c598c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2c598cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5990: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c5990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c5994: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2c5994u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c5998: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2C5998u;
    SET_GPR_U32(ctx, 31, 0x2C59A0u);
    ctx->pc = 0x2C599Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5998u;
            // 0x2c599c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C59A0u; }
        if (ctx->pc != 0x2C59A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C59A0u; }
        if (ctx->pc != 0x2C59A0u) { return; }
    }
    ctx->pc = 0x2C59A0u;
label_2c59a0:
    // 0x2c59a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c59a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c59a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c59a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c59a8: 0x24a5fde0  addiu       $a1, $a1, -0x220
    ctx->pc = 0x2c59a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966752));
    // 0x2c59ac: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2C59ACu;
    SET_GPR_U32(ctx, 31, 0x2C59B4u);
    ctx->pc = 0x2C59B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C59ACu;
            // 0x2c59b0: 0x24060196  addiu       $a2, $zero, 0x196 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 406));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C59B4u; }
        if (ctx->pc != 0x2C59B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C59B4u; }
        if (ctx->pc != 0x2C59B4u) { return; }
    }
    ctx->pc = 0x2C59B4u;
label_2c59b4:
    // 0x2c59b4: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c59b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c59b8: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2C59B8u;
    SET_GPR_U32(ctx, 31, 0x2C59C0u);
    ctx->pc = 0x2C59BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C59B8u;
            // 0x2c59bc: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C59C0u; }
        if (ctx->pc != 0x2C59C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C59C0u; }
        if (ctx->pc != 0x2C59C0u) { return; }
    }
    ctx->pc = 0x2C59C0u;
label_2c59c0:
    // 0x2c59c0: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c59c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c59c4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2c59c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c59c8: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2C59C8u;
    SET_GPR_U32(ctx, 31, 0x2C59D0u);
    ctx->pc = 0x2C59CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C59C8u;
            // 0x2c59cc: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C59D0u; }
        if (ctx->pc != 0x2C59D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C59D0u; }
        if (ctx->pc != 0x2C59D0u) { return; }
    }
    ctx->pc = 0x2C59D0u;
label_2c59d0:
    // 0x2c59d0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2c59d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c59d4: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c59d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c59d8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2c59d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c59dc: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2C59DCu;
    SET_GPR_U32(ctx, 31, 0x2C59E4u);
    ctx->pc = 0x2C59E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C59DCu;
            // 0x2c59e0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C59E4u; }
        if (ctx->pc != 0x2C59E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C59E4u; }
        if (ctx->pc != 0x2C59E4u) { return; }
    }
    ctx->pc = 0x2C59E4u;
label_2c59e4:
    // 0x2c59e4: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c59e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c59e8: 0xc0bc6fc  jal         func_2F1BF0
    ctx->pc = 0x2C59E8u;
    SET_GPR_U32(ctx, 31, 0x2C59F0u);
    ctx->pc = 0x2C59ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C59E8u;
            // 0x2c59ec: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1BF0u;
    if (runtime->hasFunction(0x2F1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2F1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C59F0u; }
        if (ctx->pc != 0x2C59F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveDataSize__18CMemoryCardManagerFi_0x2f1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C59F0u; }
        if (ctx->pc != 0x2C59F0u) { return; }
    }
    ctx->pc = 0x2C59F0u;
label_2c59f0:
    // 0x2c59f0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c59f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c59f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c59f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c59f8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c59f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c59fc: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2C59FCu;
    SET_GPR_U32(ctx, 31, 0x2C5A04u);
    ctx->pc = 0x2C5A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C59FCu;
            // 0x2c5a00: 0x24a5fe00  addiu       $a1, $a1, -0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A04u; }
        if (ctx->pc != 0x2C5A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A04u; }
        if (ctx->pc != 0x2C5A04u) { return; }
    }
    ctx->pc = 0x2C5A04u;
label_2c5a04:
    // 0x2c5a04: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c5a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c5a08: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2C5A08u;
    SET_GPR_U32(ctx, 31, 0x2C5A10u);
    ctx->pc = 0x2C5A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A08u;
            // 0x2c5a0c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A10u; }
        if (ctx->pc != 0x2C5A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A10u; }
        if (ctx->pc != 0x2C5A10u) { return; }
    }
    ctx->pc = 0x2C5A10u;
label_2c5a10:
    // 0x2c5a10: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c5a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c5a14: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2c5a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c5a18: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2C5A18u;
    SET_GPR_U32(ctx, 31, 0x2C5A20u);
    ctx->pc = 0x2C5A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A18u;
            // 0x2c5a1c: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A20u; }
        if (ctx->pc != 0x2C5A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A20u; }
        if (ctx->pc != 0x2C5A20u) { return; }
    }
    ctx->pc = 0x2C5A20u;
label_2c5a20:
    // 0x2c5a20: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2c5a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5a24: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c5a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c5a28: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2c5a28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c5a2c: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2C5A2Cu;
    SET_GPR_U32(ctx, 31, 0x2C5A34u);
    ctx->pc = 0x2C5A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A2Cu;
            // 0x2c5a30: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A34u; }
        if (ctx->pc != 0x2C5A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A34u; }
        if (ctx->pc != 0x2C5A34u) { return; }
    }
    ctx->pc = 0x2C5A34u;
label_2c5a34:
    // 0x2c5a34: 0xc0bc6e4  jal         func_2F1B90
    ctx->pc = 0x2C5A34u;
    SET_GPR_U32(ctx, 31, 0x2C5A3Cu);
    ctx->pc = 0x2C5A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A34u;
            // 0x2c5a38: 0x8f849cc4  lw          $a0, -0x633C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1B90u;
    if (runtime->hasFunction(0x2F1B90u)) {
        auto targetFn = runtime->lookupFunction(0x2F1B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A3Cu; }
        if (ctx->pc != 0x2C5A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetIconDataSize__18CMemoryCardManagerFv_0x2f1b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A3Cu; }
        if (ctx->pc != 0x2C5A3Cu) { return; }
    }
    ctx->pc = 0x2C5A3Cu;
label_2c5a3c:
    // 0x2c5a3c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5A3Cu;
    {
        const bool branch_taken_0x2c5a3c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2C5A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A3Cu;
            // 0x2c5a40: 0x23283  sra         $a2, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a3c) {
            ctx->pc = 0x2C5A4Cu;
            goto label_2c5a4c;
        }
    }
    ctx->pc = 0x2C5A44u;
    // 0x2c5a44: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x2c5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
    // 0x2c5a48: 0x23283  sra         $a2, $v0, 10
    ctx->pc = 0x2c5a48u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 10));
label_2c5a4c:
    // 0x2c5a4c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c5a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c5a50: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c5a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c5a54: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2C5A54u;
    SET_GPR_U32(ctx, 31, 0x2C5A5Cu);
    ctx->pc = 0x2C5A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A54u;
            // 0x2c5a58: 0x24a5fe20  addiu       $a1, $a1, -0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A5Cu; }
        if (ctx->pc != 0x2C5A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A5Cu; }
        if (ctx->pc != 0x2C5A5Cu) { return; }
    }
    ctx->pc = 0x2C5A5Cu;
label_2c5a5c:
    // 0x2c5a5c: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c5a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c5a60: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2C5A60u;
    SET_GPR_U32(ctx, 31, 0x2C5A68u);
    ctx->pc = 0x2C5A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A60u;
            // 0x2c5a64: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A68u; }
        if (ctx->pc != 0x2C5A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A68u; }
        if (ctx->pc != 0x2C5A68u) { return; }
    }
    ctx->pc = 0x2C5A68u;
label_2c5a68:
    // 0x2c5a68: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c5a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c5a6c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2c5a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c5a70: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2C5A70u;
    SET_GPR_U32(ctx, 31, 0x2C5A78u);
    ctx->pc = 0x2C5A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A70u;
            // 0x2c5a74: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A78u; }
        if (ctx->pc != 0x2C5A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A78u; }
        if (ctx->pc != 0x2C5A78u) { return; }
    }
    ctx->pc = 0x2C5A78u;
label_2c5a78:
    // 0x2c5a78: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2c5a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5a7c: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c5a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c5a80: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2c5a80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c5a84: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2C5A84u;
    SET_GPR_U32(ctx, 31, 0x2C5A8Cu);
    ctx->pc = 0x2C5A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A84u;
            // 0x2c5a88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A8Cu; }
        if (ctx->pc != 0x2C5A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5A8Cu; }
        if (ctx->pc != 0x2C5A8Cu) { return; }
    }
    ctx->pc = 0x2C5A8Cu;
label_2c5a8c:
    // 0x2c5a8c: 0x8f849cc4  lw          $a0, -0x633C($gp)
    ctx->pc = 0x2c5a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941892)));
    // 0x2c5a90: 0x8c8304c8  lw          $v1, 0x4C8($a0)
    ctx->pc = 0x2c5a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1224)));
    // 0x2c5a94: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C5A94u;
    {
        const bool branch_taken_0x2c5a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5A94u;
            // 0x2c5a98: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5a94) {
            ctx->pc = 0x2C5AACu;
            goto label_2c5aac;
        }
    }
    ctx->pc = 0x2C5A9Cu;
    // 0x2c5a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c5a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5aa0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C5AA0u;
    {
        const bool branch_taken_0x2c5aa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C5AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5AA0u;
            // 0x2c5aa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5aa0) {
            ctx->pc = 0x2C5AB4u;
            goto label_2c5ab4;
        }
    }
    ctx->pc = 0x2C5AA8u;
    // 0x2c5aa8: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2c5aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2c5aac:
    // 0x2c5aac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2c5aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2c5ab0: 0x24420d5c  addiu       $v0, $v0, 0xD5C
    ctx->pc = 0x2c5ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3420));
label_2c5ab4:
    // 0x2c5ab4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2c5ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c5ab8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2c5ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2c5abc: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x2c5abcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2c5ac0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c5ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c5ac4: 0x8c480014  lw          $t0, 0x14($v0)
    ctx->pc = 0x2c5ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2c5ac8: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2C5AC8u;
    SET_GPR_U32(ctx, 31, 0x2C5AD0u);
    ctx->pc = 0x2C5ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5AC8u;
            // 0x2c5acc: 0x24a5fe40  addiu       $a1, $a1, -0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5AD0u; }
        if (ctx->pc != 0x2C5AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5AD0u; }
        if (ctx->pc != 0x2C5AD0u) { return; }
    }
    ctx->pc = 0x2C5AD0u;
label_2c5ad0:
    // 0x2c5ad0: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c5ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c5ad4: 0xc0b5160  jal         func_2D4580
    ctx->pc = 0x2C5AD4u;
    SET_GPR_U32(ctx, 31, 0x2C5ADCu);
    ctx->pc = 0x2C5AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5AD4u;
            // 0x2c5ad8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5ADCu; }
        if (ctx->pc != 0x2C5ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5ADCu; }
        if (ctx->pc != 0x2C5ADCu) { return; }
    }
    ctx->pc = 0x2C5ADCu;
label_2c5adc:
    // 0x2c5adc: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c5adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c5ae0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2c5ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c5ae4: 0xc0b5130  jal         func_2D44C0
    ctx->pc = 0x2C5AE4u;
    SET_GPR_U32(ctx, 31, 0x2C5AECu);
    ctx->pc = 0x2C5AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5AE4u;
            // 0x2c5ae8: 0x2406008c  addiu       $a2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5AECu; }
        if (ctx->pc != 0x2C5AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5AECu; }
        if (ctx->pc != 0x2C5AECu) { return; }
    }
    ctx->pc = 0x2C5AECu;
label_2c5aec:
    // 0x2c5aec: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2c5aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c5af0: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x2c5af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x2c5af4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2c5af4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c5af8: 0xc0b5688  jal         func_2D5A20
    ctx->pc = 0x2C5AF8u;
    SET_GPR_U32(ctx, 31, 0x2C5B00u);
    ctx->pc = 0x2C5AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5AF8u;
            // 0x2c5afc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B00u; }
        if (ctx->pc != 0x2C5B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5B00u; }
        if (ctx->pc != 0x2C5B00u) { return; }
    }
    ctx->pc = 0x2C5B00u;
label_2c5b00:
    // 0x2c5b00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c5b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c5b04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c5b04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5b08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5b08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5B0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5B0Cu;
            // 0x2c5b10: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5B14u;
}
