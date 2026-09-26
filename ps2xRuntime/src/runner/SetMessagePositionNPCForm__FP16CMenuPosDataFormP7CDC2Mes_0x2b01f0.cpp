#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetMessagePositionNPCForm__FP16CMenuPosDataFormP7CDC2Mes
// Address: 0x2b01f0 - 0x2b02d4
void SetMessagePositionNPCForm__FP16CMenuPosDataFormP7CDC2Mes_0x2b01f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetMessagePositionNPCForm__FP16CMenuPosDataFormP7CDC2Mes_0x2b01f0");
#endif

    switch (ctx->pc) {
        case 0x2b0238u: goto label_2b0238;
        case 0x2b0250u: goto label_2b0250;
        case 0x2b0268u: goto label_2b0268;
        case 0x2b0280u: goto label_2b0280;
        case 0x2b0298u: goto label_2b0298;
        case 0x2b02a8u: goto label_2b02a8;
        case 0x2b02bcu: goto label_2b02bc;
        default: break;
    }

    ctx->pc = 0x2b01f0u;

    // 0x2b01f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b01f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b01f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b01f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b01f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b01f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b01fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b01fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b0200: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b0200u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0204: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b0204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b0208: 0x1240002c  beqz        $s2, . + 4 + (0x2C << 2)
    ctx->pc = 0x2B0208u;
    {
        const bool branch_taken_0x2b0208 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B020Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0208u;
            // 0x2b020c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0208) {
            ctx->pc = 0x2B02BCu;
            goto label_2b02bc;
        }
    }
    ctx->pc = 0x2B0210u;
    // 0x2b0210: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B0210u;
    {
        const bool branch_taken_0x2b0210 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0210u;
            // 0x2b0214: 0x27b00044  addiu       $s0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0210) {
            ctx->pc = 0x2B0224u;
            goto label_2b0224;
        }
    }
    ctx->pc = 0x2B0218u;
    // 0x2b0218: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2B0218u;
    {
        const bool branch_taken_0x2b0218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B021Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0218u;
            // 0x2b021c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0218) {
            ctx->pc = 0x2B02C0u;
            goto label_2b02c0;
        }
    }
    ctx->pc = 0x2B0220u;
    // 0x2b0220: 0x27b00044  addiu       $s0, $sp, 0x44
    ctx->pc = 0x2b0220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_2b0224:
    // 0x2b0224: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b0224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b0228: 0x24a5ea10  addiu       $a1, $a1, -0x15F0
    ctx->pc = 0x2b0228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961680));
    // 0x2b022c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2b022cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b0230: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2B0230u;
    SET_GPR_U32(ctx, 31, 0x2B0238u);
    ctx->pc = 0x2B0234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0230u;
            // 0x2b0234: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0238u; }
        if (ctx->pc != 0x2B0238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0238u; }
        if (ctx->pc != 0x2B0238u) { return; }
    }
    ctx->pc = 0x2B0238u;
label_2b0238:
    // 0x2b0238: 0x27a60048  addiu       $a2, $sp, 0x48
    ctx->pc = 0x2b0238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2b023c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b023cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b0240: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b0240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0244: 0x24a5ea18  addiu       $a1, $a1, -0x15E8
    ctx->pc = 0x2b0244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961688));
    // 0x2b0248: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2B0248u;
    SET_GPR_U32(ctx, 31, 0x2B0250u);
    ctx->pc = 0x2B024Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0248u;
            // 0x2b024c: 0x24c70004  addiu       $a3, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0250u; }
        if (ctx->pc != 0x2B0250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0250u; }
        if (ctx->pc != 0x2B0250u) { return; }
    }
    ctx->pc = 0x2B0250u;
label_2b0250:
    // 0x2b0250: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2b0250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2b0254: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b0254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b0258: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b0258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b025c: 0x24a5ea20  addiu       $a1, $a1, -0x15E0
    ctx->pc = 0x2b025cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961696));
    // 0x2b0260: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2B0260u;
    SET_GPR_U32(ctx, 31, 0x2B0268u);
    ctx->pc = 0x2B0264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0260u;
            // 0x2b0264: 0x24c70004  addiu       $a3, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0268u; }
        if (ctx->pc != 0x2B0268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0268u; }
        if (ctx->pc != 0x2B0268u) { return; }
    }
    ctx->pc = 0x2B0268u;
label_2b0268:
    // 0x2b0268: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x2b0268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2b026c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b026cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b0270: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b0270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0274: 0x24a5ea28  addiu       $a1, $a1, -0x15D8
    ctx->pc = 0x2b0274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961704));
    // 0x2b0278: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2B0278u;
    SET_GPR_U32(ctx, 31, 0x2B0280u);
    ctx->pc = 0x2B027Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0278u;
            // 0x2b027c: 0x24c70004  addiu       $a3, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0280u; }
        if (ctx->pc != 0x2B0280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0280u; }
        if (ctx->pc != 0x2B0280u) { return; }
    }
    ctx->pc = 0x2B0280u;
label_2b0280:
    // 0x2b0280: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x2b0280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b0284: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b0284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2b0288: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b0288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b028c: 0x24a5ea30  addiu       $a1, $a1, -0x15D0
    ctx->pc = 0x2b028cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961712));
    // 0x2b0290: 0xc08974c  jal         func_225D30
    ctx->pc = 0x2B0290u;
    SET_GPR_U32(ctx, 31, 0x2B0298u);
    ctx->pc = 0x2B0294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0290u;
            // 0x2b0294: 0x24c70004  addiu       $a3, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0298u; }
        if (ctx->pc != 0x2B0298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0298u; }
        if (ctx->pc != 0x2B0298u) { return; }
    }
    ctx->pc = 0x2B0298u;
label_2b0298:
    // 0x2b0298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b0298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b029c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2b029cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b02a0: 0xc0877c4  jal         func_21DF10
    ctx->pc = 0x2B02A0u;
    SET_GPR_U32(ctx, 31, 0x2B02A8u);
    ctx->pc = 0x2B02A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B02A0u;
            // 0x2b02a4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF10u;
    if (runtime->hasFunction(0x21DF10u)) {
        auto targetFn = runtime->lookupFunction(0x21DF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B02A8u; }
        if (ctx->pc != 0x2B02A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemPos__7CDC2MesFPii_0x21df10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B02A8u; }
        if (ctx->pc != 0x2B02A8u) { return; }
    }
    ctx->pc = 0x2B02A8u;
label_2b02a8:
    // 0x2b02a8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x2b02a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b02ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b02acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b02b0: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2b02b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b02b4: 0xc0876d8  jal         func_21DB60
    ctx->pc = 0x2B02B4u;
    SET_GPR_U32(ctx, 31, 0x2B02BCu);
    ctx->pc = 0x2B02B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B02B4u;
            // 0x2b02b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DB60u;
    if (runtime->hasFunction(0x21DB60u)) {
        auto targetFn = runtime->lookupFunction(0x21DB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B02BCu; }
        if (ctx->pc != 0x2B02BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMovePosCenteringGyou__7CDC2MesFiii_0x21db60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B02BCu; }
        if (ctx->pc != 0x2B02BCu) { return; }
    }
    ctx->pc = 0x2B02BCu;
label_2b02bc:
    // 0x2b02bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b02bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b02c0:
    // 0x2b02c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b02c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b02c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b02c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b02c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b02c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b02cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B02CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B02D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B02CCu;
            // 0x2b02d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B02D4u;
}
