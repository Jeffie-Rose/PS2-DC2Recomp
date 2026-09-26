#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsCancelNoneLoadItem__13CMenuItemInfoFv
// Address: 0x240180 - 0x240304
void IsCancelNoneLoadItem__13CMenuItemInfoFv_0x240180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsCancelNoneLoadItem__13CMenuItemInfoFv_0x240180");
#endif

    switch (ctx->pc) {
        case 0x2401c8u: goto label_2401c8;
        case 0x2401d4u: goto label_2401d4;
        case 0x2401e0u: goto label_2401e0;
        case 0x2401e8u: goto label_2401e8;
        case 0x2401f4u: goto label_2401f4;
        case 0x240204u: goto label_240204;
        case 0x240210u: goto label_240210;
        case 0x24021cu: goto label_24021c;
        case 0x240238u: goto label_240238;
        case 0x240248u: goto label_240248;
        case 0x2402a8u: goto label_2402a8;
        case 0x2402b8u: goto label_2402b8;
        case 0x2402d0u: goto label_2402d0;
        case 0x2402e0u: goto label_2402e0;
        case 0x2402e8u: goto label_2402e8;
        default: break;
    }

    ctx->pc = 0x240180u;

    // 0x240180: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x240180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x240184: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x240184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x240188: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x240188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x24018c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x24018cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x240190: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x240190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x240194: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x240194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x240198: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x240198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24019c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24019cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2401a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2401a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2401a4: 0x27b1015e  addiu       $s1, $sp, 0x15E
    ctx->pc = 0x2401a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 350));
    // 0x2401a8: 0xa7a0015c  sh          $zero, 0x15C($sp)
    ctx->pc = 0x2401a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 348), (uint16_t)GPR_U32(ctx, 0));
    // 0x2401ac: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x2401acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x2401b0: 0xa7a2015a  sh          $v0, 0x15A($sp)
    ctx->pc = 0x2401b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 346), (uint16_t)GPR_U32(ctx, 2));
    // 0x2401b4: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x2401b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2401b8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2401b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2401bc: 0xa7a00158  sh          $zero, 0x158($sp)
    ctx->pc = 0x2401bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 344), (uint16_t)GPR_U32(ctx, 0));
    // 0x2401c0: 0xc049c18  jal         func_127060
    ctx->pc = 0x2401C0u;
    SET_GPR_U32(ctx, 31, 0x2401C8u);
    ctx->pc = 0x2401C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2401C0u;
            // 0x2401c4: 0x2445012c  addiu       $a1, $v0, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2401C8u; }
        if (ctx->pc != 0x2401C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2401C8u; }
        if (ctx->pc != 0x2401C8u) { return; }
    }
    ctx->pc = 0x2401C8u;
label_2401c8:
    // 0x2401c8: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x2401c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x2401cc: 0xc08f9e4  jal         func_23E790
    ctx->pc = 0x2401CCu;
    SET_GPR_U32(ctx, 31, 0x2401D4u);
    ctx->pc = 0x2401D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2401CCu;
            // 0x2401d0: 0xa7a00158  sh          $zero, 0x158($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 344), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E790u;
    if (runtime->hasFunction(0x23E790u)) {
        auto targetFn = runtime->lookupFunction(0x23E790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2401D4u; }
        if (ctx->pc != 0x2401D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameDataUsedForSWAPINFO__FP18MENU_SWAPITEM_INFO_0x23e790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2401D4u; }
        if (ctx->pc != 0x2401D4u) { return; }
    }
    ctx->pc = 0x2401D4u;
label_2401d4:
    // 0x2401d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2401d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2401d8: 0xc065c24  jal         func_197090
    ctx->pc = 0x2401D8u;
    SET_GPR_U32(ctx, 31, 0x2401E0u);
    ctx->pc = 0x2401DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2401D8u;
            // 0x2401dc: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2401E0u; }
        if (ctx->pc != 0x2401E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2401E0u; }
        if (ctx->pc != 0x2401E0u) { return; }
    }
    ctx->pc = 0x2401E0u;
label_2401e0:
    // 0x2401e0: 0xc065c24  jal         func_197090
    ctx->pc = 0x2401E0u;
    SET_GPR_U32(ctx, 31, 0x2401E8u);
    ctx->pc = 0x2401E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2401E0u;
            // 0x2401e4: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2401E8u; }
        if (ctx->pc != 0x2401E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2401E8u; }
        if (ctx->pc != 0x2401E8u) { return; }
    }
    ctx->pc = 0x2401E8u;
label_2401e8:
    // 0x2401e8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2401e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2401ec: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x2401ECu;
    SET_GPR_U32(ctx, 31, 0x2401F4u);
    ctx->pc = 0x2401F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2401ECu;
            // 0x2401f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2401F4u; }
        if (ctx->pc != 0x2401F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2401F4u; }
        if (ctx->pc != 0x2401F4u) { return; }
    }
    ctx->pc = 0x2401F4u;
label_2401f4:
    // 0x2401f4: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2401f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2401f8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2401f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2401fc: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x2401FCu;
    SET_GPR_U32(ctx, 31, 0x240204u);
    ctx->pc = 0x240200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2401FCu;
            // 0x240200: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240204u; }
        if (ctx->pc != 0x240204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240204u; }
        if (ctx->pc != 0x240204u) { return; }
    }
    ctx->pc = 0x240204u;
label_240204:
    // 0x240204: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240208: 0xc09018c  jal         func_240630
    ctx->pc = 0x240208u;
    SET_GPR_U32(ctx, 31, 0x240210u);
    ctx->pc = 0x24020Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240208u;
            // 0x24020c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240630u;
    if (runtime->hasFunction(0x240630u)) {
        auto targetFn = runtime->lookupFunction(0x240630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240210u; }
        if (ctx->pc != 0x240210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckViewWeaponStatus__13CMenuItemInfoFi_0x240630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240210u; }
        if (ctx->pc != 0x240210u) { return; }
    }
    ctx->pc = 0x240210u;
label_240210:
    // 0x240210: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x240210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x240214: 0xc08fa24  jal         func_23E890
    ctx->pc = 0x240214u;
    SET_GPR_U32(ctx, 31, 0x24021Cu);
    ctx->pc = 0x240218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240214u;
            // 0x240218: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E890u;
    if (runtime->hasFunction(0x23E890u)) {
        auto targetFn = runtime->lookupFunction(0x23E890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24021Cu; }
        if (ctx->pc != 0x24021Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnItemMenu__12CMenuKeyFuncFi_0x23e890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24021Cu; }
        if (ctx->pc != 0x24021Cu) { return; }
    }
    ctx->pc = 0x24021Cu;
label_24021c:
    // 0x24021c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24021cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240220: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x240220u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x240224: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
    ctx->pc = 0x240224u;
    {
        const bool branch_taken_0x240224 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240224u;
            // 0x240228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240224) {
            ctx->pc = 0x2402D8u;
            goto label_2402d8;
        }
    }
    ctx->pc = 0x24022Cu;
    // 0x24022c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24022cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240230: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x240230u;
    SET_GPR_U32(ctx, 31, 0x240238u);
    ctx->pc = 0x240234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240230u;
            // 0x240234: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240238u; }
        if (ctx->pc != 0x240238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240238u; }
        if (ctx->pc != 0x240238u) { return; }
    }
    ctx->pc = 0x240238u;
label_240238:
    // 0x240238: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x240238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x24023c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x24023cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x240240: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x240240u;
    SET_GPR_U32(ctx, 31, 0x240248u);
    ctx->pc = 0x240244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240240u;
            // 0x240244: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240248u; }
        if (ctx->pc != 0x240248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240248u; }
        if (ctx->pc != 0x240248u) { return; }
    }
    ctx->pc = 0x240248u;
label_240248:
    // 0x240248: 0x86440110  lh          $a0, 0x110($s2)
    ctx->pc = 0x240248u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x24024c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24024Cu;
    {
        const bool branch_taken_0x24024c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x240250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24024Cu;
            // 0x240250: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24024c) {
            ctx->pc = 0x240260u;
            goto label_240260;
        }
    }
    ctx->pc = 0x240254u;
    // 0x240254: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x240254u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x240258: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x240258u;
    {
        const bool branch_taken_0x240258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240258) {
            ctx->pc = 0x240294u;
            goto label_240294;
        }
    }
    ctx->pc = 0x240260u;
label_240260:
    // 0x240260: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x240260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240264: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x240264u;
    {
        const bool branch_taken_0x240264 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x240268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240264u;
            // 0x240268: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240264) {
            ctx->pc = 0x24027Cu;
            goto label_24027c;
        }
    }
    ctx->pc = 0x24026Cu;
    // 0x24026c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x24026cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x240270: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x240270u;
    {
        const bool branch_taken_0x240270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x240270) {
            ctx->pc = 0x240294u;
            goto label_240294;
        }
    }
    ctx->pc = 0x240278u;
    // 0x240278: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x240278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24027c:
    // 0x24027c: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24027Cu;
    {
        const bool branch_taken_0x24027c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x240280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24027Cu;
            // 0x240280: 0x27a40158  addiu       $a0, $sp, 0x158 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24027c) {
            ctx->pc = 0x24029Cu;
            goto label_24029c;
        }
    }
    ctx->pc = 0x240284u;
    // 0x240284: 0x86430118  lh          $v1, 0x118($s2)
    ctx->pc = 0x240284u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 280)));
    // 0x240288: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x240288u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24028c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24028Cu;
    {
        const bool branch_taken_0x24028c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24028c) {
            ctx->pc = 0x240298u;
            goto label_240298;
        }
    }
    ctx->pc = 0x240294u;
label_240294:
    // 0x240294: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x240294u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240298:
    // 0x240298: 0x27a40158  addiu       $a0, $sp, 0x158
    ctx->pc = 0x240298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_24029c:
    // 0x24029c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x24029cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2402a0: 0xc08ec14  jal         func_23B050
    ctx->pc = 0x2402A0u;
    SET_GPR_U32(ctx, 31, 0x2402A8u);
    ctx->pc = 0x2402A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2402A0u;
            // 0x2402a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B050u;
    if (runtime->hasFunction(0x23B050u)) {
        auto targetFn = runtime->lookupFunction(0x23B050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2402A8u; }
        if (ctx->pc != 0x2402A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExchangeItemInfoMake__FP18MENU_SWAPITEM_INFOPA4_iii_0x23b050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2402A8u; }
        if (ctx->pc != 0x2402A8u) { return; }
    }
    ctx->pc = 0x2402A8u;
label_2402a8:
    // 0x2402a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2402A8u;
    {
        const bool branch_taken_0x2402a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2402a8) {
            ctx->pc = 0x2402B8u;
            goto label_2402b8;
        }
    }
    ctx->pc = 0x2402B0u;
    // 0x2402b0: 0xc090adc  jal         func_242B70
    ctx->pc = 0x2402B0u;
    SET_GPR_U32(ctx, 31, 0x2402B8u);
    ctx->pc = 0x2402B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2402B0u;
            // 0x2402b4: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242B70u;
    if (runtime->hasFunction(0x242B70u)) {
        auto targetFn = runtime->lookupFunction(0x242B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2402B8u; }
        if (ctx->pc != 0x2402B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommonSetMoveItemClass__FPA4_i_0x242b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2402B8u; }
        if (ctx->pc != 0x2402B8u) { return; }
    }
    ctx->pc = 0x2402B8u;
label_2402b8:
    // 0x2402b8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2402b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x2402bc: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2402bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2402c0: 0x24421460  addiu       $v0, $v0, 0x1460
    ctx->pc = 0x2402c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5216));
    // 0x2402c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2402c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2402c8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2402C8u;
    SET_GPR_U32(ctx, 31, 0x2402D0u);
    ctx->pc = 0x2402CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2402C8u;
            // 0x2402cc: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2402D0u; }
        if (ctx->pc != 0x2402D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2402D0u; }
        if (ctx->pc != 0x2402D0u) { return; }
    }
    ctx->pc = 0x2402D0u;
label_2402d0:
    // 0x2402d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2402D0u;
    {
        const bool branch_taken_0x2402d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2402D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2402D0u;
            // 0x2402d4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2402d0) {
            ctx->pc = 0x2402ECu;
            goto label_2402ec;
        }
    }
    ctx->pc = 0x2402D8u;
label_2402d8:
    // 0x2402d8: 0xc0901a4  jal         func_240690
    ctx->pc = 0x2402D8u;
    SET_GPR_U32(ctx, 31, 0x2402E0u);
    ctx->pc = 0x2402DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2402D8u;
            // 0x2402dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240690u;
    if (runtime->hasFunction(0x240690u)) {
        auto targetFn = runtime->lookupFunction(0x240690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2402E0u; }
        if (ctx->pc != 0x2402E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnActiveCharaViewMode__13CMenuItemInfoFi_0x240690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2402E0u; }
        if (ctx->pc != 0x2402E0u) { return; }
    }
    ctx->pc = 0x2402E0u;
label_2402e0:
    // 0x2402e0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2402E0u;
    SET_GPR_U32(ctx, 31, 0x2402E8u);
    ctx->pc = 0x2402E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2402E0u;
            // 0x2402e4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2402E8u; }
        if (ctx->pc != 0x2402E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2402E8u; }
        if (ctx->pc != 0x2402E8u) { return; }
    }
    ctx->pc = 0x2402E8u;
label_2402e8:
    // 0x2402e8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2402e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2402ec:
    // 0x2402ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2402ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2402f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2402f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2402f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2402f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2402f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2402f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2402fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2402FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2402FCu;
            // 0x240300: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x240304u;
}
