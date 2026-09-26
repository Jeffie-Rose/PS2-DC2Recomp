#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetItemCommandMsg__FP13CGameDataUsedPiPUiPsPsii
// Address: 0x23c9c0 - 0x23e004
void GetItemCommandMsg__FP13CGameDataUsedPiPUiPsPsii_0x23c9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetItemCommandMsg__FP13CGameDataUsedPiPUiPsPsii_0x23c9c0");
#endif

    switch (ctx->pc) {
        case 0x23ca10u: goto label_23ca10;
        case 0x23ca1cu: goto label_23ca1c;
        case 0x23ca24u: goto label_23ca24;
        case 0x23ca50u: goto label_23ca50;
        case 0x23cab0u: goto label_23cab0;
        case 0x23caf0u: goto label_23caf0;
        case 0x23cb1cu: goto label_23cb1c;
        case 0x23cb60u: goto label_23cb60;
        case 0x23cb88u: goto label_23cb88;
        case 0x23cc24u: goto label_23cc24;
        case 0x23cc68u: goto label_23cc68;
        case 0x23cc94u: goto label_23cc94;
        case 0x23cd38u: goto label_23cd38;
        case 0x23cd74u: goto label_23cd74;
        case 0x23cdacu: goto label_23cdac;
        case 0x23ce04u: goto label_23ce04;
        case 0x23ce80u: goto label_23ce80;
        case 0x23ceb4u: goto label_23ceb4;
        case 0x23cebcu: goto label_23cebc;
        case 0x23cec4u: goto label_23cec4;
        case 0x23ced8u: goto label_23ced8;
        case 0x23cee4u: goto label_23cee4;
        case 0x23cf90u: goto label_23cf90;
        case 0x23cfa0u: goto label_23cfa0;
        case 0x23cfa8u: goto label_23cfa8;
        case 0x23cfb4u: goto label_23cfb4;
        case 0x23cfc4u: goto label_23cfc4;
        case 0x23cfdcu: goto label_23cfdc;
        case 0x23cff0u: goto label_23cff0;
        case 0x23cff8u: goto label_23cff8;
        case 0x23d010u: goto label_23d010;
        case 0x23d07cu: goto label_23d07c;
        case 0x23d0d8u: goto label_23d0d8;
        case 0x23d0f0u: goto label_23d0f0;
        case 0x23d0fcu: goto label_23d0fc;
        case 0x23d10cu: goto label_23d10c;
        case 0x23d12cu: goto label_23d12c;
        case 0x23d14cu: goto label_23d14c;
        case 0x23d170u: goto label_23d170;
        case 0x23d188u: goto label_23d188;
        case 0x23d1a8u: goto label_23d1a8;
        case 0x23d1bcu: goto label_23d1bc;
        case 0x23d1d4u: goto label_23d1d4;
        case 0x23d1e0u: goto label_23d1e0;
        case 0x23d1f0u: goto label_23d1f0;
        case 0x23d200u: goto label_23d200;
        case 0x23d218u: goto label_23d218;
        case 0x23d238u: goto label_23d238;
        case 0x23d250u: goto label_23d250;
        case 0x23d28cu: goto label_23d28c;
        case 0x23d2a0u: goto label_23d2a0;
        case 0x23d2d0u: goto label_23d2d0;
        case 0x23d304u: goto label_23d304;
        case 0x23d348u: goto label_23d348;
        case 0x23d384u: goto label_23d384;
        case 0x23d3fcu: goto label_23d3fc;
        case 0x23d430u: goto label_23d430;
        case 0x23d45cu: goto label_23d45c;
        case 0x23d468u: goto label_23d468;
        case 0x23d47cu: goto label_23d47c;
        case 0x23d5a0u: goto label_23d5a0;
        case 0x23d5c4u: goto label_23d5c4;
        case 0x23d5d8u: goto label_23d5d8;
        case 0x23d5f0u: goto label_23d5f0;
        case 0x23d634u: goto label_23d634;
        case 0x23d678u: goto label_23d678;
        case 0x23d694u: goto label_23d694;
        case 0x23d71cu: goto label_23d71c;
        case 0x23d730u: goto label_23d730;
        case 0x23d7a8u: goto label_23d7a8;
        case 0x23d7f4u: goto label_23d7f4;
        case 0x23d854u: goto label_23d854;
        case 0x23d864u: goto label_23d864;
        case 0x23d874u: goto label_23d874;
        case 0x23d884u: goto label_23d884;
        case 0x23d940u: goto label_23d940;
        case 0x23d998u: goto label_23d998;
        case 0x23da08u: goto label_23da08;
        case 0x23da18u: goto label_23da18;
        case 0x23da48u: goto label_23da48;
        case 0x23da5cu: goto label_23da5c;
        case 0x23daa0u: goto label_23daa0;
        case 0x23daecu: goto label_23daec;
        case 0x23db14u: goto label_23db14;
        case 0x23db40u: goto label_23db40;
        case 0x23dbbcu: goto label_23dbbc;
        case 0x23dcb8u: goto label_23dcb8;
        case 0x23dd1cu: goto label_23dd1c;
        case 0x23dd64u: goto label_23dd64;
        case 0x23dd98u: goto label_23dd98;
        case 0x23dddcu: goto label_23dddc;
        case 0x23de18u: goto label_23de18;
        case 0x23de5cu: goto label_23de5c;
        case 0x23deb8u: goto label_23deb8;
        case 0x23df04u: goto label_23df04;
        case 0x23df30u: goto label_23df30;
        case 0x23dfa4u: goto label_23dfa4;
        default: break;
    }

    ctx->pc = 0x23c9c0u;

    // 0x23c9c0: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x23c9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x23c9c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x23c9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x23c9c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x23c9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x23c9cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x23c9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x23c9d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x23c9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x23c9d4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x23c9d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9d8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23c9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x23c9dc: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x23c9dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9e0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23c9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23c9e4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23c9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23c9e8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x23c9e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23c9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23c9f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x23c9f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23c9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23c9f8: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x23c9f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c9fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23c9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23ca00: 0xafa801b0  sw          $t0, 0x1B0($sp)
    ctx->pc = 0x23ca00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 8));
    // 0x23ca04: 0x849e0002  lh          $fp, 0x2($a0)
    ctx->pc = 0x23ca04u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x23ca08: 0xc065868  jal         func_1961A0
    ctx->pc = 0x23CA08u;
    SET_GPR_U32(ctx, 31, 0x23CA10u);
    ctx->pc = 0x23CA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CA08u;
            // 0x23ca0c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1961A0u;
    if (runtime->hasFunction(0x1961A0u)) {
        auto targetFn = runtime->lookupFunction(0x1961A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CA10u; }
        if (ctx->pc != 0x23CA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuCommandMsg__FiPi_0x1961a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CA10u; }
        if (ctx->pc != 0x23CA10u) { return; }
    }
    ctx->pc = 0x23CA10u;
label_23ca10:
    // 0x23ca10: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x23ca10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23ca14: 0xc066e94  jal         func_19BA50
    ctx->pc = 0x23CA14u;
    SET_GPR_U32(ctx, 31, 0x23CA1Cu);
    ctx->pc = 0x23CA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CA14u;
            // 0x23ca18: 0xafa201b4  sw          $v0, 0x1B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BA50u;
    if (runtime->hasFunction(0x19BA50u)) {
        auto targetFn = runtime->lookupFunction(0x19BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CA1Cu; }
        if (ctx->pc != 0x23CA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowPartyMember__16CUserDataManagerFv_0x19ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CA1Cu; }
        if (ctx->pc != 0x23CA1Cu) { return; }
    }
    ctx->pc = 0x23CA1Cu;
label_23ca1c:
    // 0x23ca1c: 0xc065708  jal         func_195C20
    ctx->pc = 0x23CA1Cu;
    SET_GPR_U32(ctx, 31, 0x23CA24u);
    ctx->pc = 0x23CA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CA1Cu;
            // 0x23ca20: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C20u;
    if (runtime->hasFunction(0x195C20u)) {
        auto targetFn = runtime->lookupFunction(0x195C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CA24u; }
        if (ctx->pc != 0x23CA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonItemData__Fi_0x195c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CA24u; }
        if (ctx->pc != 0x23CA24u) { return; }
    }
    ctx->pc = 0x23CA24u;
label_23ca24:
    // 0x23ca24: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x23ca24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x23ca28: 0x24020184  addiu       $v0, $zero, 0x184
    ctx->pc = 0x23ca28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x23ca2c: 0x13c20004  beq         $fp, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23CA2Cu;
    {
        const bool branch_taken_0x23ca2c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CA2Cu;
            // 0x23ca30: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca2c) {
            ctx->pc = 0x23CA40u;
            goto label_23ca40;
        }
    }
    ctx->pc = 0x23CA34u;
    // 0x23ca34: 0x24020185  addiu       $v0, $zero, 0x185
    ctx->pc = 0x23ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
    // 0x23ca38: 0x17c20003  bne         $fp, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23CA38u;
    {
        const bool branch_taken_0x23ca38 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x23CA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CA38u;
            // 0x23ca3c: 0x24040180  addiu       $a0, $zero, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca38) {
            ctx->pc = 0x23CA48u;
            goto label_23ca48;
        }
    }
    ctx->pc = 0x23CA40u;
label_23ca40:
    // 0x23ca40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23ca40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca44: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x23ca44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_23ca48:
    // 0x23ca48: 0xc0684dc  jal         func_1A1370
    ctx->pc = 0x23CA48u;
    SET_GPR_U32(ctx, 31, 0x23CA50u);
    ctx->pc = 0x23CA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CA48u;
            // 0x23ca4c: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1370u;
    if (runtime->hasFunction(0x1A1370u)) {
        auto targetFn = runtime->lookupFunction(0x1A1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CA50u; }
        if (ctx->pc != 0x23CA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserItemHaveNum__Fi_0x1a1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CA50u; }
        if (ctx->pc != 0x23CA50u) { return; }
    }
    ctx->pc = 0x23CA50u;
label_23ca50:
    // 0x23ca50: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x23ca50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23ca54: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x23CA54u;
    {
        const bool branch_taken_0x23ca54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CA54u;
            // 0x23ca58: 0x2e41000b  sltiu       $at, $s2, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca54) {
            ctx->pc = 0x23CA84u;
            goto label_23ca84;
        }
    }
    ctx->pc = 0x23CA5Cu;
    // 0x23ca5c: 0x86e30000  lh          $v1, 0x0($s7)
    ctx->pc = 0x23ca5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x23ca60: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23ca64: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23CA64u;
    {
        const bool branch_taken_0x23ca64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CA64u;
            // 0x23ca68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca64) {
            ctx->pc = 0x23CA7Cu;
            goto label_23ca7c;
        }
    }
    ctx->pc = 0x23CA6Cu;
    // 0x23ca6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23ca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23ca70: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23CA70u;
    {
        const bool branch_taken_0x23ca70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23ca70) {
            ctx->pc = 0x23CA80u;
            goto label_23ca80;
        }
    }
    ctx->pc = 0x23CA78u;
    // 0x23ca78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23ca7c:
    // 0x23ca7c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x23ca7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_23ca80:
    // 0x23ca80: 0x2e41000b  sltiu       $at, $s2, 0xB
    ctx->pc = 0x23ca80u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_23ca84:
    // 0x23ca84: 0xafa001b8  sw          $zero, 0x1B8($sp)
    ctx->pc = 0x23ca84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 0));
    // 0x23ca88: 0x10200108  beqz        $at, . + 4 + (0x108 << 2)
    ctx->pc = 0x23CA88u;
    {
        const bool branch_taken_0x23ca88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CA88u;
            // 0x23ca8c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca88) {
            ctx->pc = 0x23CEACu;
            goto label_23ceac;
        }
    }
    ctx->pc = 0x23CA90u;
    // 0x23ca90: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x23ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x23ca94: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x23ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x23ca98: 0x2463ac50  addiu       $v1, $v1, -0x53B0
    ctx->pc = 0x23ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945872));
    // 0x23ca9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23caa0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23caa4: 0x400008  jr          $v0
    ctx->pc = 0x23CAA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23CAFCu: goto label_23cafc;
            case 0x23CC04u: goto label_23cc04;
            case 0x23CC74u: goto label_23cc74;
            case 0x23CD8Cu: goto label_23cd8c;
            case 0x23CDDCu: goto label_23cddc;
            case 0x23CE54u: goto label_23ce54;
            case 0x23CE70u: goto label_23ce70;
            case 0x23CEACu: goto label_23ceac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23CAACu;
    // 0x23caac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x23caacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_23cab0:
    // 0x23cab0: 0x2402138a  addiu       $v0, $zero, 0x138A
    ctx->pc = 0x23cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5002));
    // 0x23cab4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x23cab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23cab8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23cab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23cabc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23CABCu;
    {
        const bool branch_taken_0x23cabc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CABCu;
            // 0x23cac0: 0x24021391  addiu       $v0, $zero, 0x1391 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5009));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cabc) {
            ctx->pc = 0x23CADCu;
            goto label_23cadc;
        }
    }
    ctx->pc = 0x23CAC4u;
    // 0x23cac4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23CAC4u;
    {
        const bool branch_taken_0x23cac4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CAC4u;
            // 0x23cac8: 0x24021389  addiu       $v0, $zero, 0x1389 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cac4) {
            ctx->pc = 0x23CADCu;
            goto label_23cadc;
        }
    }
    ctx->pc = 0x23CACCu;
    // 0x23cacc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23CACCu;
    {
        const bool branch_taken_0x23cacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CACCu;
            // 0x23cad0: 0x240213a2  addiu       $v0, $zero, 0x13A2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5026));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cacc) {
            ctx->pc = 0x23CADCu;
            goto label_23cadc;
        }
    }
    ctx->pc = 0x23CAD4u;
    // 0x23cad4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23CAD4u;
    {
        const bool branch_taken_0x23cad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23cad4) {
            ctx->pc = 0x23CAF0u;
            goto label_23caf0;
        }
    }
    ctx->pc = 0x23CADCu;
label_23cadc:
    // 0x23cadc: 0x0  nop
    ctx->pc = 0x23cadcu;
    // NOP
    // 0x23cae0: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x23cae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x23cae4: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23cae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23cae8: 0xc094400  jal         func_251000
    ctx->pc = 0x23CAE8u;
    SET_GPR_U32(ctx, 31, 0x23CAF0u);
    ctx->pc = 0x23CAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CAE8u;
            // 0x23caec: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CAF0u; }
        if (ctx->pc != 0x23CAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CAF0u; }
        if (ctx->pc != 0x23CAF0u) { return; }
    }
    ctx->pc = 0x23CAF0u;
label_23caf0:
    // 0x23caf0: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23caf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23caf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23caf8: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x23caf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
label_23cafc:
    // 0x23cafc: 0x0  nop
    ctx->pc = 0x23cafcu;
    // NOP
    // 0x23cb00: 0x8fb001b8  lw          $s0, 0x1B8($sp)
    ctx->pc = 0x23cb00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23cb04: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x23cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x23cb08: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x23cb08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23cb0c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x23CB0Cu;
    {
        const bool branch_taken_0x23cb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CB0Cu;
            // 0x23cb10: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb0c) {
            ctx->pc = 0x23CAB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23cab0;
        }
    }
    ctx->pc = 0x23CB14u;
    // 0x23cb14: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x23CB14u;
    {
        const bool branch_taken_0x23cb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CB14u;
            // 0x23cb18: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb14) {
            ctx->pc = 0x23CEACu;
            goto label_23ceac;
        }
    }
    ctx->pc = 0x23CB1Cu;
label_23cb1c:
    // 0x23cb1c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23cb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23cb20: 0x2402138d  addiu       $v0, $zero, 0x138D
    ctx->pc = 0x23cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5005));
    // 0x23cb24: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x23cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23cb28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23cb28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23cb2c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23CB2Cu;
    {
        const bool branch_taken_0x23cb2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23CB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CB2Cu;
            // 0x23cb30: 0x2402138f  addiu       $v0, $zero, 0x138F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5007));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb2c) {
            ctx->pc = 0x23CB38u;
            goto label_23cb38;
        }
    }
    ctx->pc = 0x23CB34u;
    // 0x23cb34: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x23cb34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_23cb38:
    // 0x23cb38: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23cb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23cb3c: 0x24021391  addiu       $v0, $zero, 0x1391
    ctx->pc = 0x23cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5009));
    // 0x23cb40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23cb44: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x23cb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23cb48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23cb4c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23CB4Cu;
    {
        const bool branch_taken_0x23cb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23CB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CB4Cu;
            // 0x23cb50: 0x27a401b8  addiu       $a0, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb4c) {
            ctx->pc = 0x23CB60u;
            goto label_23cb60;
        }
    }
    ctx->pc = 0x23CB54u;
    // 0x23cb54: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23cb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23cb58: 0xc094400  jal         func_251000
    ctx->pc = 0x23CB58u;
    SET_GPR_U32(ctx, 31, 0x23CB60u);
    ctx->pc = 0x23CB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CB58u;
            // 0x23cb5c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CB60u; }
        if (ctx->pc != 0x23CB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CB60u; }
        if (ctx->pc != 0x23CB60u) { return; }
    }
    ctx->pc = 0x23CB60u;
label_23cb60:
    // 0x23cb60: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23cb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23cb64: 0x240213a0  addiu       $v0, $zero, 0x13A0
    ctx->pc = 0x23cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5024));
    // 0x23cb68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23cb6c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x23cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23cb70: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23cb74: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23CB74u;
    {
        const bool branch_taken_0x23cb74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23CB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CB74u;
            // 0x23cb78: 0x27a401b8  addiu       $a0, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb74) {
            ctx->pc = 0x23CB88u;
            goto label_23cb88;
        }
    }
    ctx->pc = 0x23CB7Cu;
    // 0x23cb7c: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23cb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23cb80: 0xc094400  jal         func_251000
    ctx->pc = 0x23CB80u;
    SET_GPR_U32(ctx, 31, 0x23CB88u);
    ctx->pc = 0x23CB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CB80u;
            // 0x23cb84: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CB88u; }
        if (ctx->pc != 0x23CB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CB88u; }
        if (ctx->pc != 0x23CB88u) { return; }
    }
    ctx->pc = 0x23CB88u;
label_23cb88:
    // 0x23cb88: 0x2ac10002  slti        $at, $s6, 0x2
    ctx->pc = 0x23cb88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23cb8c: 0x10200019  beqz        $at, . + 4 + (0x19 << 2)
    ctx->pc = 0x23CB8Cu;
    {
        const bool branch_taken_0x23cb8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cb8c) {
            ctx->pc = 0x23CBF4u;
            goto label_23cbf4;
        }
    }
    ctx->pc = 0x23CB94u;
    // 0x23cb94: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23cb98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cb9c: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x23cb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x23cba0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23cba4: 0x28621397  slti        $v0, $v1, 0x1397
    ctx->pc = 0x23cba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5015) ? 1 : 0);
    // 0x23cba8: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23CBA8u;
    {
        const bool branch_taken_0x23cba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CBA8u;
            // 0x23cbac: 0x28611399  slti        $at, $v1, 0x1399 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5017) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cba8) {
            ctx->pc = 0x23CBF4u;
            goto label_23cbf4;
        }
    }
    ctx->pc = 0x23CBB0u;
    // 0x23cbb0: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x23CBB0u;
    {
        const bool branch_taken_0x23cbb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CBB0u;
            // 0x23cbb4: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cbb0) {
            ctx->pc = 0x23CBF4u;
            goto label_23cbf4;
        }
    }
    ctx->pc = 0x23CBB8u;
    // 0x23cbb8: 0x161840  sll         $v1, $s6, 1
    ctx->pc = 0x23cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x23cbbc: 0x24420c50  addiu       $v0, $v0, 0xC50
    ctx->pc = 0x23cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3152));
    // 0x23cbc0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x23cbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23cbc4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x23cbc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23cbc8: 0x24421388  addiu       $v0, $v0, 0x1388
    ctx->pc = 0x23cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5000));
    // 0x23cbcc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x23cbccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x23cbd0: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23cbd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23cbd8: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x23cbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
    // 0x23cbdc: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23cbe0: 0x80630001  lb          $v1, 0x1($v1)
    ctx->pc = 0x23cbe0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x23cbe4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cbe8: 0x24631388  addiu       $v1, $v1, 0x1388
    ctx->pc = 0x23cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5000));
    // 0x23cbec: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x23cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x23cbf0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23cbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23cbf4:
    // 0x23cbf4: 0x0  nop
    ctx->pc = 0x23cbf4u;
    // NOP
    // 0x23cbf8: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23cbfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23cc00: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x23cc00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
label_23cc04:
    // 0x23cc04: 0x0  nop
    ctx->pc = 0x23cc04u;
    // NOP
    // 0x23cc08: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23cc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23cc0c: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x23cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x23cc10: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x23cc10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23cc14: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x23CC14u;
    {
        const bool branch_taken_0x23cc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cc14) {
            ctx->pc = 0x23CB1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23cb1c;
        }
    }
    ctx->pc = 0x23CC1Cu;
    // 0x23cc1c: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x23CC1Cu;
    {
        const bool branch_taken_0x23cc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cc1c) {
            ctx->pc = 0x23CEACu;
            goto label_23ceac;
        }
    }
    ctx->pc = 0x23CC24u;
label_23cc24:
    // 0x23cc24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23cc28: 0x24021391  addiu       $v0, $zero, 0x1391
    ctx->pc = 0x23cc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5009));
    // 0x23cc2c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x23cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23cc30: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23cc34: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23CC34u;
    {
        const bool branch_taken_0x23cc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CC34u;
            // 0x23cc38: 0x24021389  addiu       $v0, $zero, 0x1389 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc34) {
            ctx->pc = 0x23CC54u;
            goto label_23cc54;
        }
    }
    ctx->pc = 0x23CC3Cu;
    // 0x23cc3c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23CC3Cu;
    {
        const bool branch_taken_0x23cc3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CC3Cu;
            // 0x23cc40: 0x24021392  addiu       $v0, $zero, 0x1392 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5010));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc3c) {
            ctx->pc = 0x23CC54u;
            goto label_23cc54;
        }
    }
    ctx->pc = 0x23CC44u;
    // 0x23cc44: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23CC44u;
    {
        const bool branch_taken_0x23cc44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CC44u;
            // 0x23cc48: 0x240213a2  addiu       $v0, $zero, 0x13A2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5026));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc44) {
            ctx->pc = 0x23CC54u;
            goto label_23cc54;
        }
    }
    ctx->pc = 0x23CC4Cu;
    // 0x23cc4c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23CC4Cu;
    {
        const bool branch_taken_0x23cc4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23cc4c) {
            ctx->pc = 0x23CC68u;
            goto label_23cc68;
        }
    }
    ctx->pc = 0x23CC54u;
label_23cc54:
    // 0x23cc54: 0x0  nop
    ctx->pc = 0x23cc54u;
    // NOP
    // 0x23cc58: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x23cc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x23cc5c: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23cc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23cc60: 0xc094400  jal         func_251000
    ctx->pc = 0x23CC60u;
    SET_GPR_U32(ctx, 31, 0x23CC68u);
    ctx->pc = 0x23CC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CC60u;
            // 0x23cc64: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CC68u; }
        if (ctx->pc != 0x23CC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CC68u; }
        if (ctx->pc != 0x23CC68u) { return; }
    }
    ctx->pc = 0x23CC68u;
label_23cc68:
    // 0x23cc68: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23cc6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23cc70: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x23cc70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
label_23cc74:
    // 0x23cc74: 0x0  nop
    ctx->pc = 0x23cc74u;
    // NOP
    // 0x23cc78: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23cc7c: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x23cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x23cc80: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x23cc80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23cc84: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x23CC84u;
    {
        const bool branch_taken_0x23cc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cc84) {
            ctx->pc = 0x23CC24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23cc24;
        }
    }
    ctx->pc = 0x23CC8Cu;
    // 0x23cc8c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x23CC8Cu;
    {
        const bool branch_taken_0x23cc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cc8c) {
            ctx->pc = 0x23CEACu;
            goto label_23ceac;
        }
    }
    ctx->pc = 0x23CC94u;
label_23cc94:
    // 0x23cc94: 0x12c20019  beq         $s6, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x23CC94u;
    {
        const bool branch_taken_0x23cc94 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x23cc94) {
            ctx->pc = 0x23CCFCu;
            goto label_23ccfc;
        }
    }
    ctx->pc = 0x23CC9Cu;
    // 0x23cc9c: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x23CC9Cu;
    {
        const bool branch_taken_0x23cc9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CC9Cu;
            // 0x23cca0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc9c) {
            ctx->pc = 0x23CCFCu;
            goto label_23ccfc;
        }
    }
    ctx->pc = 0x23CCA4u;
    // 0x23cca4: 0x2822021  addu        $a0, $s4, $v0
    ctx->pc = 0x23cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x23cca8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23cca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23ccac: 0x28621397  slti        $v0, $v1, 0x1397
    ctx->pc = 0x23ccacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5015) ? 1 : 0);
    // 0x23ccb0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x23CCB0u;
    {
        const bool branch_taken_0x23ccb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CCB0u;
            // 0x23ccb4: 0x28611399  slti        $at, $v1, 0x1399 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5017) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccb0) {
            ctx->pc = 0x23CCFCu;
            goto label_23ccfc;
        }
    }
    ctx->pc = 0x23CCB8u;
    // 0x23ccb8: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x23CCB8u;
    {
        const bool branch_taken_0x23ccb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CCB8u;
            // 0x23ccbc: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccb8) {
            ctx->pc = 0x23CCFCu;
            goto label_23ccfc;
        }
    }
    ctx->pc = 0x23CCC0u;
    // 0x23ccc0: 0x161840  sll         $v1, $s6, 1
    ctx->pc = 0x23ccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x23ccc4: 0x24420c50  addiu       $v0, $v0, 0xC50
    ctx->pc = 0x23ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3152));
    // 0x23ccc8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x23ccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23cccc: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x23ccccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ccd0: 0x24421388  addiu       $v0, $v0, 0x1388
    ctx->pc = 0x23ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5000));
    // 0x23ccd4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x23ccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x23ccd8: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23ccdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ccdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23cce0: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x23cce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
    // 0x23cce4: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23cce8: 0x80630001  lb          $v1, 0x1($v1)
    ctx->pc = 0x23cce8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x23ccec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23ccf0: 0x24631388  addiu       $v1, $v1, 0x1388
    ctx->pc = 0x23ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5000));
    // 0x23ccf4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x23ccf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x23ccf8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23ccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23ccfc:
    // 0x23ccfc: 0x0  nop
    ctx->pc = 0x23ccfcu;
    // NOP
    // 0x23cd00: 0x82e30004  lb          $v1, 0x4($s7)
    ctx->pc = 0x23cd00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x23cd04: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x23cd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23cd08: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23CD08u;
    {
        const bool branch_taken_0x23cd08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23cd08) {
            ctx->pc = 0x23CD40u;
            goto label_23cd40;
        }
    }
    ctx->pc = 0x23CD10u;
    // 0x23cd10: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23cd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23cd14: 0x2402139e  addiu       $v0, $zero, 0x139E
    ctx->pc = 0x23cd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5022));
    // 0x23cd18: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23cd18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23cd1c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x23cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23cd20: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23cd24: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23CD24u;
    {
        const bool branch_taken_0x23cd24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23CD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CD24u;
            // 0x23cd28: 0x27a401b8  addiu       $a0, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd24) {
            ctx->pc = 0x23CD40u;
            goto label_23cd40;
        }
    }
    ctx->pc = 0x23CD2Cu;
    // 0x23cd2c: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23cd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23cd30: 0xc094400  jal         func_251000
    ctx->pc = 0x23CD30u;
    SET_GPR_U32(ctx, 31, 0x23CD38u);
    ctx->pc = 0x23CD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CD30u;
            // 0x23cd34: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CD38u; }
        if (ctx->pc != 0x23CD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CD38u; }
        if (ctx->pc != 0x23CD38u) { return; }
    }
    ctx->pc = 0x23CD38u;
label_23cd38:
    // 0x23cd38: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x23CD38u;
    {
        const bool branch_taken_0x23cd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cd38) {
            ctx->pc = 0x23CD8Cu;
            goto label_23cd8c;
        }
    }
    ctx->pc = 0x23CD40u;
label_23cd40:
    // 0x23cd40: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23cd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23cd44: 0x240213a2  addiu       $v0, $zero, 0x13A2
    ctx->pc = 0x23cd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5026));
    // 0x23cd48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23cd48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23cd4c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x23cd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23cd50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23cd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23cd54: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23CD54u;
    {
        const bool branch_taken_0x23cd54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23cd54) {
            ctx->pc = 0x23CD7Cu;
            goto label_23cd7c;
        }
    }
    ctx->pc = 0x23CD5Cu;
    // 0x23cd5c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x23cd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23cd60: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23CD60u;
    {
        const bool branch_taken_0x23cd60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CD60u;
            // 0x23cd64: 0x27a401b8  addiu       $a0, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd60) {
            ctx->pc = 0x23CD7Cu;
            goto label_23cd7c;
        }
    }
    ctx->pc = 0x23CD68u;
    // 0x23cd68: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23cd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23cd6c: 0xc094400  jal         func_251000
    ctx->pc = 0x23CD6Cu;
    SET_GPR_U32(ctx, 31, 0x23CD74u);
    ctx->pc = 0x23CD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CD6Cu;
            // 0x23cd70: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CD74u; }
        if (ctx->pc != 0x23CD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CD74u; }
        if (ctx->pc != 0x23CD74u) { return; }
    }
    ctx->pc = 0x23CD74u;
label_23cd74:
    // 0x23cd74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23CD74u;
    {
        const bool branch_taken_0x23cd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cd74) {
            ctx->pc = 0x23CD8Cu;
            goto label_23cd8c;
        }
    }
    ctx->pc = 0x23CD7Cu;
label_23cd7c:
    // 0x23cd7c: 0x0  nop
    ctx->pc = 0x23cd7cu;
    // NOP
    // 0x23cd80: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23cd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23cd84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23cd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23cd88: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x23cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
label_23cd8c:
    // 0x23cd8c: 0x0  nop
    ctx->pc = 0x23cd8cu;
    // NOP
    // 0x23cd90: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23cd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23cd94: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x23cd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x23cd98: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x23cd98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23cd9c: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x23CD9Cu;
    {
        const bool branch_taken_0x23cd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CD9Cu;
            // 0x23cda0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd9c) {
            ctx->pc = 0x23CC94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23cc94;
        }
    }
    ctx->pc = 0x23CDA4u;
    // 0x23cda4: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x23CDA4u;
    {
        const bool branch_taken_0x23cda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CDA4u;
            // 0x23cda8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cda4) {
            ctx->pc = 0x23CEACu;
            goto label_23ceac;
        }
    }
    ctx->pc = 0x23CDACu;
label_23cdac:
    // 0x23cdac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23cdacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23cdb0: 0x24021396  addiu       $v0, $zero, 0x1396
    ctx->pc = 0x23cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5014));
    // 0x23cdb4: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x23cdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23cdb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23cdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23cdbc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23CDBCu;
    {
        const bool branch_taken_0x23cdbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CDBCu;
            // 0x23cdc0: 0x24021389  addiu       $v0, $zero, 0x1389 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cdbc) {
            ctx->pc = 0x23CDD0u;
            goto label_23cdd0;
        }
    }
    ctx->pc = 0x23CDC4u;
    // 0x23cdc4: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23CDC4u;
    {
        const bool branch_taken_0x23cdc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CDC4u;
            // 0x23cdc8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cdc4) {
            ctx->pc = 0x23CDD0u;
            goto label_23cdd0;
        }
    }
    ctx->pc = 0x23CDCCu;
    // 0x23cdcc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x23cdccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_23cdd0:
    // 0x23cdd0: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23cdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23cdd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23cdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23cdd8: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x23cdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
label_23cddc:
    // 0x23cddc: 0x0  nop
    ctx->pc = 0x23cddcu;
    // NOP
    // 0x23cde0: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23cde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23cde4: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x23cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x23cde8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x23cde8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23cdec: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x23CDECu;
    {
        const bool branch_taken_0x23cdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cdec) {
            ctx->pc = 0x23CDACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23cdac;
        }
    }
    ctx->pc = 0x23CDF4u;
    // 0x23cdf4: 0xafa001b8  sw          $zero, 0x1B8($sp)
    ctx->pc = 0x23cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 0));
    // 0x23cdf8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23cdf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cdfc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x23CDFCu;
    {
        const bool branch_taken_0x23cdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CDFCu;
            // 0x23ce00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cdfc) {
            ctx->pc = 0x23CE34u;
            goto label_23ce34;
        }
    }
    ctx->pc = 0x23CE04u;
label_23ce04:
    // 0x23ce04: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x23ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x23ce08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x23ce08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23ce0c: 0xa0082a  slt         $at, $a1, $zero
    ctx->pc = 0x23ce0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x23ce10: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x23CE10u;
    {
        const bool branch_taken_0x23ce10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CE10u;
            // 0x23ce14: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce10) {
            ctx->pc = 0x23CE24u;
            goto label_23ce24;
        }
    }
    ctx->pc = 0x23CE18u;
    // 0x23ce18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23ce18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23ce1c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x23ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x23ce20: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x23ce20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_23ce24:
    // 0x23ce24: 0x0  nop
    ctx->pc = 0x23ce24u;
    // NOP
    // 0x23ce28: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23ce2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ce30: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x23ce30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
label_23ce34:
    // 0x23ce34: 0x0  nop
    ctx->pc = 0x23ce34u;
    // NOP
    // 0x23ce38: 0x8fa501b8  lw          $a1, 0x1B8($sp)
    ctx->pc = 0x23ce38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23ce3c: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x23ce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x23ce40: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x23ce40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23ce44: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x23CE44u;
    {
        const bool branch_taken_0x23ce44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CE44u;
            // 0x23ce48: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce44) {
            ctx->pc = 0x23CE04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23ce04;
        }
    }
    ctx->pc = 0x23CE4Cu;
    // 0x23ce4c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23CE4Cu;
    {
        const bool branch_taken_0x23ce4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CE4Cu;
            // 0x23ce50: 0xafa301b4  sw          $v1, 0x1B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce4c) {
            ctx->pc = 0x23CEACu;
            goto label_23ceac;
        }
    }
    ctx->pc = 0x23CE54u;
label_23ce54:
    // 0x23ce54: 0x2402139f  addiu       $v0, $zero, 0x139F
    ctx->pc = 0x23ce54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5023));
    // 0x23ce58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23ce58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23ce5c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x23ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x23ce60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ce64: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x23ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x23ce68: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x23CE68u;
    {
        const bool branch_taken_0x23ce68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CE68u;
            // 0x23ce6c: 0xafa201b4  sw          $v0, 0x1B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce68) {
            ctx->pc = 0x23CEACu;
            goto label_23ceac;
        }
    }
    ctx->pc = 0x23CE70u;
label_23ce70:
    // 0x23ce70: 0x240213a3  addiu       $v0, $zero, 0x13A3
    ctx->pc = 0x23ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5027));
    // 0x23ce74: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x23ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x23ce78: 0xc0673a8  jal         func_19CEA0
    ctx->pc = 0x23CE78u;
    SET_GPR_U32(ctx, 31, 0x23CE80u);
    ctx->pc = 0x23CE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CE78u;
            // 0x23ce7c: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEA0u;
    if (runtime->hasFunction(0x19CEA0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CE80u; }
        if (ctx->pc != 0x23CE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFishingRodNo__16CUserDataManagerFv_0x19cea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CE80u; }
        if (ctx->pc != 0x23CE80u) { return; }
    }
    ctx->pc = 0x23CE80u;
label_23ce80:
    // 0x23ce80: 0x2403012f  addiu       $v1, $zero, 0x12F
    ctx->pc = 0x23ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
    // 0x23ce84: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x23CE84u;
    {
        const bool branch_taken_0x23ce84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23CE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CE84u;
            // 0x23ce88: 0x24021389  addiu       $v0, $zero, 0x1389 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5001));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce84) {
            ctx->pc = 0x23CE98u;
            goto label_23ce98;
        }
    }
    ctx->pc = 0x23CE8Cu;
    // 0x23ce8c: 0x240213a4  addiu       $v0, $zero, 0x13A4
    ctx->pc = 0x23ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5028));
    // 0x23ce90: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x23ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x23ce94: 0x24021389  addiu       $v0, $zero, 0x1389
    ctx->pc = 0x23ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5001));
label_23ce98:
    // 0x23ce98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23ce98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ce9c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x23ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x23cea0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23cea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23cea4: 0xafa301b4  sw          $v1, 0x1B4($sp)
    ctx->pc = 0x23cea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 3));
    // 0x23cea8: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x23cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_23ceac:
    // 0x23ceac: 0xc06421c  jal         func_190870
    ctx->pc = 0x23CEACu;
    SET_GPR_U32(ctx, 31, 0x23CEB4u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CEB4u; }
        if (ctx->pc != 0x23CEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CEB4u; }
        if (ctx->pc != 0x23CEB4u) { return; }
    }
    ctx->pc = 0x23CEB4u;
label_23ceb4:
    // 0x23ceb4: 0xc064220  jal         func_190880
    ctx->pc = 0x23CEB4u;
    SET_GPR_U32(ctx, 31, 0x23CEBCu);
    ctx->pc = 0x23CEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CEB4u;
            // 0x23ceb8: 0x24512f90  addiu       $s1, $v0, 0x2F90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CEBCu; }
        if (ctx->pc != 0x23CEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CEBCu; }
        if (ctx->pc != 0x23CEBCu) { return; }
    }
    ctx->pc = 0x23CEBCu;
label_23cebc:
    // 0x23cebc: 0xc0bda00  jal         func_2F6800
    ctx->pc = 0x23CEBCu;
    SET_GPR_U32(ctx, 31, 0x23CEC4u);
    ctx->pc = 0x23CEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CEBCu;
            // 0x23cec0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6800u;
    if (runtime->hasFunction(0x2F6800u)) {
        auto targetFn = runtime->lookupFunction(0x2F6800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CEC4u; }
        if (ctx->pc != 0x23CEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitCtrl__9CSaveDataFv_0x2f6800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CEC4u; }
        if (ctx->pc != 0x23CEC4u) { return; }
    }
    ctx->pc = 0x23CEC4u;
label_23cec4:
    // 0x23cec4: 0x12a00030  beqz        $s5, . + 4 + (0x30 << 2)
    ctx->pc = 0x23CEC4u;
    {
        const bool branch_taken_0x23cec4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CEC4u;
            // 0x23cec8: 0xafa200c8  sw          $v0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cec4) {
            ctx->pc = 0x23CF88u;
            goto label_23cf88;
        }
    }
    ctx->pc = 0x23CECCu;
    // 0x23cecc: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x23ceccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23ced0: 0xc0673c4  jal         func_19CF10
    ctx->pc = 0x23CED0u;
    SET_GPR_U32(ctx, 31, 0x23CED8u);
    ctx->pc = 0x23CED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CED0u;
            // 0x23ced4: 0x86e50002  lh          $a1, 0x2($s7) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CF10u;
    if (runtime->hasFunction(0x19CF10u)) {
        auto targetFn = runtime->lookupFunction(0x19CF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CED8u; }
        if (ctx->pc != 0x23CED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveEsa__16CUserDataManagerFi_0x19cf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CED8u; }
        if (ctx->pc != 0x23CED8u) { return; }
    }
    ctx->pc = 0x23CED8u;
label_23ced8:
    // 0x23ced8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23ced8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cedc: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x23CEDCu;
    SET_GPR_U32(ctx, 31, 0x23CEE4u);
    ctx->pc = 0x23CEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CEDCu;
            // 0x23cee0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CEE4u; }
        if (ctx->pc != 0x23CEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CEE4u; }
        if (ctx->pc != 0x23CEE4u) { return; }
    }
    ctx->pc = 0x23CEE4u;
label_23cee4:
    // 0x23cee4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x23CEE4u;
    {
        const bool branch_taken_0x23cee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cee4) {
            ctx->pc = 0x23CF88u;
            goto label_23cf88;
        }
    }
    ctx->pc = 0x23CEECu;
    // 0x23ceec: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x23CEECu;
    {
        const bool branch_taken_0x23ceec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ceec) {
            ctx->pc = 0x23CF88u;
            goto label_23cf88;
        }
    }
    ctx->pc = 0x23CEF4u;
    // 0x23cef4: 0x86020002  lh          $v0, 0x2($s0)
    ctx->pc = 0x23cef4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x23cef8: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x23CEF8u;
    {
        const bool branch_taken_0x23cef8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23cef8) {
            ctx->pc = 0x23CF88u;
            goto label_23cf88;
        }
    }
    ctx->pc = 0x23CF00u;
    // 0x23cf00: 0x86e30002  lh          $v1, 0x2($s7)
    ctx->pc = 0x23cf00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x23cf04: 0x2402012e  addiu       $v0, $zero, 0x12E
    ctx->pc = 0x23cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    // 0x23cf08: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23CF08u;
    {
        const bool branch_taken_0x23cf08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23cf08) {
            ctx->pc = 0x23CF44u;
            goto label_23cf44;
        }
    }
    ctx->pc = 0x23CF10u;
    // 0x23cf10: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x23cf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x23cf14: 0x240413a3  addiu       $a0, $zero, 0x13A3
    ctx->pc = 0x23cf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5027));
    // 0x23cf18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23cf18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23cf1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cf20: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x23cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x23cf24: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x23cf24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x23cf28: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x23cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x23cf2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23cf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23cf30: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x23cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
    // 0x23cf34: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x23cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x23cf38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cf3c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x23cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x23cf40: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23cf40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23cf44:
    // 0x23cf44: 0x86e30002  lh          $v1, 0x2($s7)
    ctx->pc = 0x23cf44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x23cf48: 0x2402012f  addiu       $v0, $zero, 0x12F
    ctx->pc = 0x23cf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
    // 0x23cf4c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23CF4Cu;
    {
        const bool branch_taken_0x23cf4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23cf4c) {
            ctx->pc = 0x23CF88u;
            goto label_23cf88;
        }
    }
    ctx->pc = 0x23CF54u;
    // 0x23cf54: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x23cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x23cf58: 0x240413a4  addiu       $a0, $zero, 0x13A4
    ctx->pc = 0x23cf58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5028));
    // 0x23cf5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23cf60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cf64: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x23cf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x23cf68: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x23cf68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x23cf6c: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x23cf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x23cf70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23cf74: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x23cf74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
    // 0x23cf78: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x23cf78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x23cf7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23cf80: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x23cf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x23cf84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23cf84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23cf88:
    // 0x23cf88: 0xc067610  jal         func_19D840
    ctx->pc = 0x23CF88u;
    SET_GPR_U32(ctx, 31, 0x23CF90u);
    ctx->pc = 0x23CF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CF88u;
            // 0x23cf8c: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D840u;
    if (runtime->hasFunction(0x19D840u)) {
        auto targetFn = runtime->lookupFunction(0x19D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CF90u; }
        if (ctx->pc != 0x23CF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedData__16CUserDataManagerFv_0x19d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CF90u; }
        if (ctx->pc != 0x23CF90u) { return; }
    }
    ctx->pc = 0x23CF90u;
label_23cf90:
    // 0x23cf90: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x23cf90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23cf94: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x23cf94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cf98: 0xc06762c  jal         func_19D8B0
    ctx->pc = 0x23CF98u;
    SET_GPR_U32(ctx, 31, 0x23CFA0u);
    ctx->pc = 0x23CF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CF98u;
            // 0x23cf9c: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D8B0u;
    if (runtime->hasFunction(0x19D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x19D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CFA0u; }
        if (ctx->pc != 0x23CFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedData__16CUserDataManagerFi_0x19d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CFA0u; }
        if (ctx->pc != 0x23CFA0u) { return; }
    }
    ctx->pc = 0x23CFA0u;
label_23cfa0:
    // 0x23cfa0: 0xc0660bc  jal         func_1982F0
    ctx->pc = 0x23CFA0u;
    SET_GPR_U32(ctx, 31, 0x23CFA8u);
    ctx->pc = 0x23CFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CFA0u;
            // 0x23cfa4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1982F0u;
    if (runtime->hasFunction(0x1982F0u)) {
        auto targetFn = runtime->lookupFunction(0x1982F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CFA8u; }
        if (ctx->pc != 0x23CFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableRepairItemNo__13CGameDataUsedFv_0x1982f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CFA8u; }
        if (ctx->pc != 0x23CFA8u) { return; }
    }
    ctx->pc = 0x23CFA8u;
label_23cfa8:
    // 0x23cfa8: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x23cfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23cfac: 0xc06770c  jal         func_19DC30
    ctx->pc = 0x23CFACu;
    SET_GPR_U32(ctx, 31, 0x23CFB4u);
    ctx->pc = 0x23CFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CFACu;
            // 0x23cfb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DC30u;
    if (runtime->hasFunction(0x19DC30u)) {
        auto targetFn = runtime->lookupFunction(0x19DC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CFB4u; }
        if (ctx->pc != 0x23CFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchAllHaveItem__16CUserDataManagerFi_0x19dc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CFB4u; }
        if (ctx->pc != 0x23CFB4u) { return; }
    }
    ctx->pc = 0x23CFB4u;
label_23cfb4:
    // 0x23cfb4: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x23cfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x23cfb8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x23cfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cfbc: 0xc08e9a0  jal         func_23A680
    ctx->pc = 0x23CFBCu;
    SET_GPR_U32(ctx, 31, 0x23CFC4u);
    ctx->pc = 0x23CFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CFBCu;
            // 0x23cfc0: 0xa78095f0  sh          $zero, -0x6A10($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294940144), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A680u;
    if (runtime->hasFunction(0x23A680u)) {
        auto targetFn = runtime->lookupFunction(0x23A680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CFC4u; }
        if (ctx->pc != 0x23CFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsEnableChangeRoboParts__FP13CGameDataUsed_0x23a680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CFC4u; }
        if (ctx->pc != 0x23CFC4u) { return; }
    }
    ctx->pc = 0x23CFC4u;
label_23cfc4:
    // 0x23cfc4: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x23cfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x23cfc8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x23cfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cfcc: 0x27a501bc  addiu       $a1, $sp, 0x1BC
    ctx->pc = 0x23cfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x23cfd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23cfd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cfd4: 0xc092afc  jal         func_24ABF0
    ctx->pc = 0x23CFD4u;
    SET_GPR_U32(ctx, 31, 0x23CFDCu);
    ctx->pc = 0x23CFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CFD4u;
            // 0x23cfd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24ABF0u;
    if (runtime->hasFunction(0x24ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x24ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CFDCu; }
        if (ctx->pc != 0x23CFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBuildUp__FP13CGameDataUsedPiPiPi_0x24abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CFDCu; }
        if (ctx->pc != 0x23CFDCu) { return; }
    }
    ctx->pc = 0x23CFDCu;
label_23cfdc:
    // 0x23cfdc: 0x3c0401e7  lui         $a0, 0x1E7
    ctx->pc = 0x23cfdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)487 << 16));
    // 0x23cfe0: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x23cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
    // 0x23cfe4: 0x24849570  addiu       $a0, $a0, -0x6A90
    ctx->pc = 0x23cfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940016));
    // 0x23cfe8: 0xc0655f8  jal         func_1957E0
    ctx->pc = 0x23CFE8u;
    SET_GPR_U32(ctx, 31, 0x23CFF0u);
    ctx->pc = 0x23CFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CFE8u;
            // 0x23cfec: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1957E0u;
    if (runtime->hasFunction(0x1957E0u)) {
        auto targetFn = runtime->lookupFunction(0x1957E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CFF0u; }
        if (ctx->pc != 0x23CFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWeaponData__9CGameDataFi_0x1957e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CFF0u; }
        if (ctx->pc != 0x23CFF0u) { return; }
    }
    ctx->pc = 0x23CFF0u;
label_23cff0:
    // 0x23cff0: 0xc0673b8  jal         func_19CEE0
    ctx->pc = 0x23CFF0u;
    SET_GPR_U32(ctx, 31, 0x23CFF8u);
    ctx->pc = 0x23CFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23CFF0u;
            // 0x23cff4: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEE0u;
    if (runtime->hasFunction(0x19CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CFF8u; }
        if (ctx->pc != 0x23CFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveEsa__16CUserDataManagerFv_0x19cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23CFF8u; }
        if (ctx->pc != 0x23CFF8u) { return; }
    }
    ctx->pc = 0x23CFF8u;
label_23cff8:
    // 0x23cff8: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x23cff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23cffc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23cffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d000: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x23d000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    // 0x23d004: 0x2406012e  addiu       $a2, $zero, 0x12E
    ctx->pc = 0x23d004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    // 0x23d008: 0xc067584  jal         func_19D610
    ctx->pc = 0x23D008u;
    SET_GPR_U32(ctx, 31, 0x23D010u);
    ctx->pc = 0x23D00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D008u;
            // 0x23d00c: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D610u;
    if (runtime->hasFunction(0x19D610u)) {
        auto targetFn = runtime->lookupFunction(0x19D610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D010u; }
        if (ctx->pc != 0x23D010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchEquip__16CUserDataManagerFii_0x19d610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D010u; }
        if (ctx->pc != 0x23D010u) { return; }
    }
    ctx->pc = 0x23D010u;
label_23d010:
    // 0x23d010: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x23D010u;
    {
        const bool branch_taken_0x23d010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d010) {
            ctx->pc = 0x23D0B4u;
            goto label_23d0b4;
        }
    }
    ctx->pc = 0x23D018u;
    // 0x23d018: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x23d018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x23d01c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x23d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x23d020: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x23d020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x23d024: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23D024u;
    {
        const bool branch_taken_0x23d024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D024u;
            // 0x23d028: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d024) {
            ctx->pc = 0x23D030u;
            goto label_23d030;
        }
    }
    ctx->pc = 0x23D02Cu;
    // 0x23d02c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23d02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d030:
    // 0x23d030: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x23d030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x23d034: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x23d034u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x23d038: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x23d038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x23d03c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x23d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x23d040: 0x1057001c  beq         $v0, $s7, . + 4 + (0x1C << 2)
    ctx->pc = 0x23D040u;
    {
        const bool branch_taken_0x23d040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x23d040) {
            ctx->pc = 0x23D0B4u;
            goto label_23d0b4;
        }
    }
    ctx->pc = 0x23D048u;
    // 0x23d048: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x23d048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x23d04c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23d04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23d050: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x23d050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x23d054: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23D054u;
    {
        const bool branch_taken_0x23d054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D054u;
            // 0x23d058: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d054) {
            ctx->pc = 0x23D0B4u;
            goto label_23d0b4;
        }
    }
    ctx->pc = 0x23D05Cu;
    // 0x23d05c: 0x14820015  bne         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23D05Cu;
    {
        const bool branch_taken_0x23d05c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d05c) {
            ctx->pc = 0x23D0B4u;
            goto label_23d0b4;
        }
    }
    ctx->pc = 0x23D064u;
    // 0x23d064: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x23D064u;
    {
        const bool branch_taken_0x23d064 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d064) {
            ctx->pc = 0x23D0B4u;
            goto label_23d0b4;
        }
    }
    ctx->pc = 0x23D06Cu;
    // 0x23d06c: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x23d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x23d070: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x23d070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23d074: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x23D074u;
    {
        const bool branch_taken_0x23d074 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x23D078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D074u;
            // 0x23d078: 0x32080  sll         $a0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d074) {
            ctx->pc = 0x23D09Cu;
            goto label_23d09c;
        }
    }
    ctx->pc = 0x23D07Cu;
label_23d07c:
    // 0x23d07c: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x23d07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x23d080: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23d080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x23d084: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23d084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d088: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x23d088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x23d08c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x23d08cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x23d090: 0x0  nop
    ctx->pc = 0x23d090u;
    // NOP
    // 0x23d094: 0x461fff9  bgez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x23D094u;
    {
        const bool branch_taken_0x23d094 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x23d094) {
            ctx->pc = 0x23D07Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23d07c;
        }
    }
    ctx->pc = 0x23D09Cu;
label_23d09c:
    // 0x23d09c: 0x0  nop
    ctx->pc = 0x23d09cu;
    // NOP
    // 0x23d0a0: 0x240213a0  addiu       $v0, $zero, 0x13A0
    ctx->pc = 0x23d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5024));
    // 0x23d0a4: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x23d0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x23d0a8: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x23d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x23d0ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23d0b0: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x23d0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
label_23d0b4:
    // 0x23d0b4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x23d0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x23d0b8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x23d0b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d0bc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x23d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23d0c0: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23D0C0u;
    {
        const bool branch_taken_0x23d0c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D0C0u;
            // 0x23d0c4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d0c0) {
            ctx->pc = 0x23D0F4u;
            goto label_23d0f4;
        }
    }
    ctx->pc = 0x23D0C8u;
    // 0x23d0c8: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x23d0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23d0cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23d0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d0d0: 0xc067584  jal         func_19D610
    ctx->pc = 0x23D0D0u;
    SET_GPR_U32(ctx, 31, 0x23D0D8u);
    ctx->pc = 0x23D0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D0D0u;
            // 0x23d0d4: 0x2406012f  addiu       $a2, $zero, 0x12F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D610u;
    if (runtime->hasFunction(0x19D610u)) {
        auto targetFn = runtime->lookupFunction(0x19D610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D0D8u; }
        if (ctx->pc != 0x23D0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchEquip__16CUserDataManagerFii_0x19d610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D0D8u; }
        if (ctx->pc != 0x23D0D8u) { return; }
    }
    ctx->pc = 0x23D0D8u;
label_23d0d8:
    // 0x23d0d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D0D8u;
    {
        const bool branch_taken_0x23d0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D0D8u;
            // 0x23d0dc: 0x27a401b8  addiu       $a0, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d0d8) {
            ctx->pc = 0x23D0F0u;
            goto label_23d0f0;
        }
    }
    ctx->pc = 0x23D0E0u;
    // 0x23d0e0: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23d0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23d0e4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x23d0e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d0e8: 0xc094400  jal         func_251000
    ctx->pc = 0x23D0E8u;
    SET_GPR_U32(ctx, 31, 0x23D0F0u);
    ctx->pc = 0x23D0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D0E8u;
            // 0x23d0ec: 0xafa001b8  sw          $zero, 0x1B8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D0F0u; }
        if (ctx->pc != 0x23D0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D0F0u; }
        if (ctx->pc != 0x23D0F0u) { return; }
    }
    ctx->pc = 0x23D0F0u;
label_23d0f0:
    // 0x23d0f0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x23d0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_23d0f4:
    // 0x23d0f4: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x23D0F4u;
    SET_GPR_U32(ctx, 31, 0x23D0FCu);
    ctx->pc = 0x23D0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D0F4u;
            // 0x23d0f8: 0xafa000f0  sw          $zero, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D0FCu; }
        if (ctx->pc != 0x23D0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D0FCu; }
        if (ctx->pc != 0x23D0FCu) { return; }
    }
    ctx->pc = 0x23D0FCu;
label_23d0fc:
    // 0x23d0fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23D0FCu;
    {
        const bool branch_taken_0x23d0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d0fc) {
            ctx->pc = 0x23D118u;
            goto label_23d118;
        }
    }
    ctx->pc = 0x23D104u;
    // 0x23d104: 0xc08e94c  jal         func_23A530
    ctx->pc = 0x23D104u;
    SET_GPR_U32(ctx, 31, 0x23D10Cu);
    ctx->pc = 0x23A530u;
    if (runtime->hasFunction(0x23A530u)) {
        auto targetFn = runtime->lookupFunction(0x23A530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D10Cu; }
        if (ctx->pc != 0x23D10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFishCondition__Fv_0x23a530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D10Cu; }
        if (ctx->pc != 0x23D10Cu) { return; }
    }
    ctx->pc = 0x23D10Cu;
label_23d10c:
    // 0x23d10c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23D10Cu;
    {
        const bool branch_taken_0x23d10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D10Cu;
            // 0x23d110: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d10c) {
            ctx->pc = 0x23D118u;
            goto label_23d118;
        }
    }
    ctx->pc = 0x23D114u;
    // 0x23d114: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x23d114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_23d118:
    // 0x23d118: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x23d118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23d11c: 0x24050135  addiu       $a1, $zero, 0x135
    ctx->pc = 0x23d11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
    // 0x23d120: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23d120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d124: 0xc0676bc  jal         func_19DAF0
    ctx->pc = 0x23D124u;
    SET_GPR_U32(ctx, 31, 0x23D12Cu);
    ctx->pc = 0x23D128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D124u;
            // 0x23d128: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DAF0u;
    if (runtime->hasFunction(0x19DAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D12Cu; }
        if (ctx->pc != 0x23D12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchItemOnItemBrd__16CUserDataManagerFii_0x19daf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D12Cu; }
        if (ctx->pc != 0x23D12Cu) { return; }
    }
    ctx->pc = 0x23D12Cu;
label_23d12c:
    // 0x23d12c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23D12Cu;
    {
        const bool branch_taken_0x23d12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D12Cu;
            // 0x23d130: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d12c) {
            ctx->pc = 0x23D138u;
            goto label_23d138;
        }
    }
    ctx->pc = 0x23D134u;
    // 0x23d134: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x23d134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_23d138:
    // 0x23d138: 0x8f8294ac  lw          $v0, -0x6B54($gp)
    ctx->pc = 0x23d138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23d13c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23d13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d140: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x23d140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x23d144: 0xc066898  jal         func_19A260
    ctx->pc = 0x23D144u;
    SET_GPR_U32(ctx, 31, 0x23D14Cu);
    ctx->pc = 0x23D148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D144u;
            // 0x23d148: 0x24444958  addiu       $a0, $v0, 0x4958 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 18776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A260u;
    if (runtime->hasFunction(0x19A260u)) {
        auto targetFn = runtime->lookupFunction(0x19A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D14Cu; }
        if (ctx->pc != 0x23D14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchAqua1NotUsed__13CFishAquariumFi_0x19a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D14Cu; }
        if (ctx->pc != 0x23D14Cu) { return; }
    }
    ctx->pc = 0x23D14Cu;
label_23d14c:
    // 0x23d14c: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x23d14cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x23d150: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x23D150u;
    {
        const bool branch_taken_0x23d150 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D150u;
            // 0x23d154: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d150) {
            ctx->pc = 0x23D15Cu;
            goto label_23d15c;
        }
    }
    ctx->pc = 0x23D158u;
    // 0x23d158: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x23d158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_23d15c:
    // 0x23d15c: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x23d15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23d160: 0x24050166  addiu       $a1, $zero, 0x166
    ctx->pc = 0x23d160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 358));
    // 0x23d164: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23d164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d168: 0xc0676bc  jal         func_19DAF0
    ctx->pc = 0x23D168u;
    SET_GPR_U32(ctx, 31, 0x23D170u);
    ctx->pc = 0x23D16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D168u;
            // 0x23d16c: 0xafa00120  sw          $zero, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DAF0u;
    if (runtime->hasFunction(0x19DAF0u)) {
        auto targetFn = runtime->lookupFunction(0x19DAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D170u; }
        if (ctx->pc != 0x23D170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchItemOnItemBrd__16CUserDataManagerFii_0x19daf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D170u; }
        if (ctx->pc != 0x23D170u) { return; }
    }
    ctx->pc = 0x23D170u;
label_23d170:
    // 0x23d170: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D170u;
    {
        const bool branch_taken_0x23d170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D170u;
            // 0x23d174: 0x240401a8  addiu       $a0, $zero, 0x1A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d170) {
            ctx->pc = 0x23D180u;
            goto label_23d180;
        }
    }
    ctx->pc = 0x23D178u;
    // 0x23d178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23d178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d17c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x23d17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_23d180:
    // 0x23d180: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x23D180u;
    SET_GPR_U32(ctx, 31, 0x23D188u);
    ctx->pc = 0x23D184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D180u;
            // 0x23d184: 0xafa00130  sw          $zero, 0x130($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D188u; }
        if (ctx->pc != 0x23D188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D188u; }
        if (ctx->pc != 0x23D188u) { return; }
    }
    ctx->pc = 0x23D188u;
label_23d188:
    // 0x23d188: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D188u;
    {
        const bool branch_taken_0x23d188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D188u;
            // 0x23d18c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d188) {
            ctx->pc = 0x23D19Cu;
            goto label_23d19c;
        }
    }
    ctx->pc = 0x23D190u;
    // 0x23d190: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23d190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d194: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x23d194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x23d198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23d198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d19c:
    // 0x23d19c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x23d19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d1a0: 0xc065b9c  jal         func_196E70
    ctx->pc = 0x23D1A0u;
    SET_GPR_U32(ctx, 31, 0x23D1A8u);
    ctx->pc = 0x23D1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D1A0u;
            // 0x23d1a4: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E70u;
    if (runtime->hasFunction(0x196E70u)) {
        auto targetFn = runtime->lookupFunction(0x196E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D1A8u; }
        if (ctx->pc != 0x23D1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFishingWeapon__FP13CGameDataUsed_0x196e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D1A8u; }
        if (ctx->pc != 0x23D1A8u) { return; }
    }
    ctx->pc = 0x23D1A8u;
label_23d1a8:
    // 0x23d1a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23d1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d1ac: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D1ACu;
    {
        const bool branch_taken_0x23d1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23D1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D1ACu;
            // 0x23d1b0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d1ac) {
            ctx->pc = 0x23D1CCu;
            goto label_23d1cc;
        }
    }
    ctx->pc = 0x23D1B4u;
    // 0x23d1b4: 0xc08e2f0  jal         func_238BC0
    ctx->pc = 0x23D1B4u;
    SET_GPR_U32(ctx, 31, 0x23D1BCu);
    ctx->pc = 0x23D1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D1B4u;
            // 0x23d1b8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238BC0u;
    if (runtime->hasFunction(0x238BC0u)) {
        auto targetFn = runtime->lookupFunction(0x238BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D1BCu; }
        if (ctx->pc != 0x23D1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTrushWeapon__FP13CGameDataUsed_0x238bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D1BCu; }
        if (ctx->pc != 0x23D1BCu) { return; }
    }
    ctx->pc = 0x23D1BCu;
label_23d1bc:
    // 0x23d1bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23D1BCu;
    {
        const bool branch_taken_0x23d1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d1bc) {
            ctx->pc = 0x23D1D8u;
            goto label_23d1d8;
        }
    }
    ctx->pc = 0x23D1C4u;
    // 0x23d1c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23D1C4u;
    {
        const bool branch_taken_0x23d1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D1C4u;
            // 0x23d1c8: 0xafa00140  sw          $zero, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d1c4) {
            ctx->pc = 0x23D1D8u;
            goto label_23d1d8;
        }
    }
    ctx->pc = 0x23D1CCu;
label_23d1cc:
    // 0x23d1cc: 0xc08e5b8  jal         func_2396E0
    ctx->pc = 0x23D1CCu;
    SET_GPR_U32(ctx, 31, 0x23D1D4u);
    ctx->pc = 0x2396E0u;
    if (runtime->hasFunction(0x2396E0u)) {
        auto targetFn = runtime->lookupFunction(0x2396E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D1D4u; }
        if (ctx->pc != 0x23D1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsDispTrushCommand__FP13CGameDataUsed_0x2396e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D1D4u; }
        if (ctx->pc != 0x23D1D4u) { return; }
    }
    ctx->pc = 0x23D1D4u;
label_23d1d4:
    // 0x23d1d4: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x23d1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_23d1d8:
    // 0x23d1d8: 0xc08ca8c  jal         func_232A30
    ctx->pc = 0x23D1D8u;
    SET_GPR_U32(ctx, 31, 0x23D1E0u);
    ctx->pc = 0x232A30u;
    if (runtime->hasFunction(0x232A30u)) {
        auto targetFn = runtime->lookupFunction(0x232A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D1E0u; }
        if (ctx->pc != 0x23D1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTrushMenu__Fv_0x232a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D1E0u; }
        if (ctx->pc != 0x23D1E0u) { return; }
    }
    ctx->pc = 0x23D1E0u;
label_23d1e0:
    // 0x23d1e0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23D1E0u;
    {
        const bool branch_taken_0x23d1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d1e0) {
            ctx->pc = 0x23D208u;
            goto label_23d208;
        }
    }
    ctx->pc = 0x23D1E8u;
    // 0x23d1e8: 0xc0684ec  jal         func_1A13B0
    ctx->pc = 0x23D1E8u;
    SET_GPR_U32(ctx, 31, 0x23D1F0u);
    ctx->pc = 0x1A13B0u;
    if (runtime->hasFunction(0x1A13B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A13B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D1F0u; }
        if (ctx->pc != 0x23D1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemOver__Fv_0x1a13b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D1F0u; }
        if (ctx->pc != 0x23D1F0u) { return; }
    }
    ctx->pc = 0x23D1F0u;
label_23d1f0:
    // 0x23d1f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D1F0u;
    {
        const bool branch_taken_0x23d1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d1f0) {
            ctx->pc = 0x23D208u;
            goto label_23d208;
        }
    }
    ctx->pc = 0x23D1F8u;
    // 0x23d1f8: 0xc068514  jal         func_1A1450
    ctx->pc = 0x23D1F8u;
    SET_GPR_U32(ctx, 31, 0x23D200u);
    ctx->pc = 0x1A1450u;
    if (runtime->hasFunction(0x1A1450u)) {
        auto targetFn = runtime->lookupFunction(0x1A1450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D200u; }
        if (ctx->pc != 0x23D200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemLimmitOver__Fv_0x1a1450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D200u; }
        if (ctx->pc != 0x23D200u) { return; }
    }
    ctx->pc = 0x23D200u;
label_23d200:
    // 0x23d200: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23D200u;
    {
        const bool branch_taken_0x23d200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d200) {
            ctx->pc = 0x23D20Cu;
            goto label_23d20c;
        }
    }
    ctx->pc = 0x23D208u;
label_23d208:
    // 0x23d208: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x23d208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_23d20c:
    // 0x23d20c: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x23d20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23d210: 0xc066e94  jal         func_19BA50
    ctx->pc = 0x23D210u;
    SET_GPR_U32(ctx, 31, 0x23D218u);
    ctx->pc = 0x23D214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D210u;
            // 0x23d214: 0xafa00150  sw          $zero, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BA50u;
    if (runtime->hasFunction(0x19BA50u)) {
        auto targetFn = runtime->lookupFunction(0x19BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D218u; }
        if (ctx->pc != 0x23D218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowPartyMember__16CUserDataManagerFv_0x19ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D218u; }
        if (ctx->pc != 0x23D218u) { return; }
    }
    ctx->pc = 0x23D218u;
label_23d218:
    // 0x23d218: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x23d218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x23d21c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23D21Cu;
    {
        const bool branch_taken_0x23d21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D21Cu;
            // 0x23d220: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d21c) {
            ctx->pc = 0x23D228u;
            goto label_23d228;
        }
    }
    ctx->pc = 0x23D224u;
    // 0x23d224: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x23d224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_23d228:
    // 0x23d228: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x23d228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23d22c: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x23d22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x23d230: 0xc067130  jal         func_19C4C0
    ctx->pc = 0x23D230u;
    SET_GPR_U32(ctx, 31, 0x23D238u);
    ctx->pc = 0x23D234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D230u;
            // 0x23d234: 0xafa00170  sw          $zero, 0x170($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C4C0u;
    if (runtime->hasFunction(0x19C4C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D238u; }
        if (ctx->pc != 0x23D238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckVoiceUnit__16CUserDataManagerFv_0x19c4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D238u; }
        if (ctx->pc != 0x23D238u) { return; }
    }
    ctx->pc = 0x23D238u;
label_23d238:
    // 0x23d238: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D238u;
    {
        const bool branch_taken_0x23d238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d238) {
            ctx->pc = 0x23D25Cu;
            goto label_23d25c;
        }
    }
    ctx->pc = 0x23D240u;
    // 0x23d240: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x23d240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23d244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23d244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d248: 0xc067138  jal         func_19C4E0
    ctx->pc = 0x23D248u;
    SET_GPR_U32(ctx, 31, 0x23D250u);
    ctx->pc = 0x23D24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D248u;
            // 0x23d24c: 0xafa20160  sw          $v0, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C4E0u;
    if (runtime->hasFunction(0x19C4E0u)) {
        auto targetFn = runtime->lookupFunction(0x19C4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D250u; }
        if (ctx->pc != 0x23D250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRoboVoiceFlag__16CUserDataManagerFv_0x19c4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D250u; }
        if (ctx->pc != 0x23D250u) { return; }
    }
    ctx->pc = 0x23D250u;
label_23d250:
    // 0x23d250: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23D250u;
    {
        const bool branch_taken_0x23d250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D250u;
            // 0x23d254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d250) {
            ctx->pc = 0x23D25Cu;
            goto label_23d25c;
        }
    }
    ctx->pc = 0x23D258u;
    // 0x23d258: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x23d258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
label_23d25c:
    // 0x23d25c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x23d25cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x23d260: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x23d260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x23d264: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D264u;
    {
        const bool branch_taken_0x23d264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D264u;
            // 0x23d268: 0xafa00180  sw          $zero, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d264) {
            ctx->pc = 0x23D274u;
            goto label_23d274;
        }
    }
    ctx->pc = 0x23D26Cu;
    // 0x23d26c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d270: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x23d270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
label_23d274:
    // 0x23d274: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x23d274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x23d278: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x23d278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    // 0x23d27c: 0x17c2000d  bne         $fp, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23D27Cu;
    {
        const bool branch_taken_0x23d27c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D27Cu;
            // 0x23d280: 0xafa001a0  sw          $zero, 0x1A0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d27c) {
            ctx->pc = 0x23D2B4u;
            goto label_23d2b4;
        }
    }
    ctx->pc = 0x23D284u;
    // 0x23d284: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x23D284u;
    SET_GPR_U32(ctx, 31, 0x23D28Cu);
    ctx->pc = 0x23D288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D284u;
            // 0x23d288: 0x24040138  addiu       $a0, $zero, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D28Cu; }
        if (ctx->pc != 0x23D28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D28Cu; }
        if (ctx->pc != 0x23D28Cu) { return; }
    }
    ctx->pc = 0x23D28Cu;
label_23d28c:
    // 0x23d28c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d290: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D290u;
    {
        const bool branch_taken_0x23d290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23D294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D290u;
            // 0x23d294: 0x2404013d  addiu       $a0, $zero, 0x13D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 317));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d290) {
            ctx->pc = 0x23D2B4u;
            goto label_23d2b4;
        }
    }
    ctx->pc = 0x23D298u;
    // 0x23d298: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x23D298u;
    SET_GPR_U32(ctx, 31, 0x23D2A0u);
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D2A0u; }
        if (ctx->pc != 0x23D2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D2A0u; }
        if (ctx->pc != 0x23D2A0u) { return; }
    }
    ctx->pc = 0x23D2A0u;
label_23d2a0:
    // 0x23d2a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D2A0u;
    {
        const bool branch_taken_0x23d2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D2A0u;
            // 0x23d2a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d2a0) {
            ctx->pc = 0x23D2B4u;
            goto label_23d2b4;
        }
    }
    ctx->pc = 0x23D2A8u;
    // 0x23d2a8: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x23d2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
    // 0x23d2ac: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x23d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x23d2b0: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x23d2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_23d2b4:
    // 0x23d2b4: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x23d2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x23d2b8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x23d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x23d2bc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x23d2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x23d2c0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23D2C0u;
    {
        const bool branch_taken_0x23d2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D2C0u;
            // 0x23d2c4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d2c0) {
            ctx->pc = 0x23D2FCu;
            goto label_23d2fc;
        }
    }
    ctx->pc = 0x23D2C8u;
    // 0x23d2c8: 0xc0684dc  jal         func_1A1370
    ctx->pc = 0x23D2C8u;
    SET_GPR_U32(ctx, 31, 0x23D2D0u);
    ctx->pc = 0x1A1370u;
    if (runtime->hasFunction(0x1A1370u)) {
        auto targetFn = runtime->lookupFunction(0x1A1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D2D0u; }
        if (ctx->pc != 0x23D2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserItemHaveNum__Fi_0x1a1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D2D0u; }
        if (ctx->pc != 0x23D2D0u) { return; }
    }
    ctx->pc = 0x23D2D0u;
label_23d2d0:
    // 0x23d2d0: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x23d2d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23d2d4: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x23D2D4u;
    {
        const bool branch_taken_0x23d2d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d2d4) {
            ctx->pc = 0x23D2FCu;
            goto label_23d2fc;
        }
    }
    ctx->pc = 0x23D2DCu;
    // 0x23d2dc: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x23d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x23d2e0: 0x24031389  addiu       $v1, $zero, 0x1389
    ctx->pc = 0x23d2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5001));
    // 0x23d2e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d2e8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x23d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x23d2ec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23d2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23d2f0: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x23d2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x23d2f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23d2f8: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x23d2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
label_23d2fc:
    // 0x23d2fc: 0x1000032f  b           . + 4 + (0x32F << 2)
    ctx->pc = 0x23D2FCu;
    {
        const bool branch_taken_0x23d2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D2FCu;
            // 0x23d300: 0xafa001b8  sw          $zero, 0x1B8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d2fc) {
            ctx->pc = 0x23DFBCu;
            goto label_23dfbc;
        }
    }
    ctx->pc = 0x23D304u;
label_23d304:
    // 0x23d304: 0x24021397  addiu       $v0, $zero, 0x1397
    ctx->pc = 0x23d304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5015));
    // 0x23d308: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x23d308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23d30c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23d30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23d310: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D310u;
    {
        const bool branch_taken_0x23d310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D310u;
            // 0x23d314: 0x24021398  addiu       $v0, $zero, 0x1398 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d310) {
            ctx->pc = 0x23D320u;
            goto label_23d320;
        }
    }
    ctx->pc = 0x23D318u;
    // 0x23d318: 0x14620047  bne         $v1, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x23D318u;
    {
        const bool branch_taken_0x23d318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d318) {
            ctx->pc = 0x23D438u;
            goto label_23d438;
        }
    }
    ctx->pc = 0x23D320u;
label_23d320:
    // 0x23d320: 0x2470ec69  addiu       $s0, $v1, -0x1397
    ctx->pc = 0x23d320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962281));
    // 0x23d324: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23d324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23d328: 0x16c30005  bne         $s6, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D328u;
    {
        const bool branch_taken_0x23d328 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        ctx->pc = 0x23D32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D328u;
            // 0x23d32c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d328) {
            ctx->pc = 0x23D340u;
            goto label_23d340;
        }
    }
    ctx->pc = 0x23D330u;
    // 0x23d330: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D330u;
    {
        const bool branch_taken_0x23d330 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D330u;
            // 0x23d334: 0x2402139a  addiu       $v0, $zero, 0x139A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5018));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d330) {
            ctx->pc = 0x23D340u;
            goto label_23d340;
        }
    }
    ctx->pc = 0x23D338u;
    // 0x23d338: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x23d338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d33c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x23d33cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_23d340:
    // 0x23d340: 0xc0684a8  jal         func_1A12A0
    ctx->pc = 0x23D340u;
    SET_GPR_U32(ctx, 31, 0x23D348u);
    ctx->pc = 0x23D344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D340u;
            // 0x23d344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A12A0u;
    if (runtime->hasFunction(0x1A12A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A12A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D348u; }
        if (ctx->pc != 0x23D348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsCheckParty__Fi_0x1a12a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D348u; }
        if (ctx->pc != 0x23D348u) { return; }
    }
    ctx->pc = 0x23D348u;
label_23d348:
    // 0x23d348: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x23D348u;
    {
        const bool branch_taken_0x23d348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D348u;
            // 0x23d34c: 0x2a010002  slti        $at, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d348) {
            ctx->pc = 0x23D420u;
            goto label_23d420;
        }
    }
    ctx->pc = 0x23D350u;
    // 0x23d350: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x23D350u;
    {
        const bool branch_taken_0x23d350 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D350u;
            // 0x23d354: 0x3c0201ed  lui         $v0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d350) {
            ctx->pc = 0x23D3E0u;
            goto label_23d3e0;
        }
    }
    ctx->pc = 0x23D358u;
    // 0x23d358: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x23d358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x23d35c: 0x2442d8c0  addiu       $v0, $v0, -0x2740
    ctx->pc = 0x23d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957248));
    // 0x23d360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23d360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23d364: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x23d364u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d368: 0x12000033  beqz        $s0, . + 4 + (0x33 << 2)
    ctx->pc = 0x23D368u;
    {
        const bool branch_taken_0x23d368 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D368u;
            // 0x23d36c: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d368) {
            ctx->pc = 0x23D438u;
            goto label_23d438;
        }
    }
    ctx->pc = 0x23D370u;
    // 0x23d370: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x23d370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d374: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x23d374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
    // 0x23d378: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23d378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d37c: 0xc087d14  jal         func_21F450
    ctx->pc = 0x23D37Cu;
    SET_GPR_U32(ctx, 31, 0x23D384u);
    ctx->pc = 0x23D380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D37Cu;
            // 0x23d380: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F450u;
    if (runtime->hasFunction(0x21F450u)) {
        auto targetFn = runtime->lookupFunction(0x21F450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D384u; }
        if (ctx->pc != 0x23D384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemUseEnable__12CMenuItemUseFP13CGameDataUsediPv_0x21f450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D384u; }
        if (ctx->pc != 0x23D384u) { return; }
    }
    ctx->pc = 0x23D384u;
label_23d384:
    // 0x23d384: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D384u;
    {
        const bool branch_taken_0x23d384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d384) {
            ctx->pc = 0x23D3A4u;
            goto label_23d3a4;
        }
    }
    ctx->pc = 0x23D38Cu;
    // 0x23d38c: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23d38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d390: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x23d390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x23d394: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23d394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23d398: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d39c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23d3a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23d3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23d3a4:
    // 0x23d3a4: 0x0  nop
    ctx->pc = 0x23d3a4u;
    // NOP
    // 0x23d3a8: 0x2402011f  addiu       $v0, $zero, 0x11F
    ctx->pc = 0x23d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
    // 0x23d3ac: 0x17c20022  bne         $fp, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x23D3ACu;
    {
        const bool branch_taken_0x23d3ac = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d3ac) {
            ctx->pc = 0x23D438u;
            goto label_23d438;
        }
    }
    ctx->pc = 0x23D3B4u;
    // 0x23d3b4: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x23d3b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23d3b8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x23d3b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x23d3bc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x23D3BCu;
    {
        const bool branch_taken_0x23d3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d3bc) {
            ctx->pc = 0x23D438u;
            goto label_23d438;
        }
    }
    ctx->pc = 0x23D3C4u;
    // 0x23d3c4: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d3c8: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x23d3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x23d3cc: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23d3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23d3d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d3d4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23d3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23d3d8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x23D3D8u;
    {
        const bool branch_taken_0x23d3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D3D8u;
            // 0x23d3dc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3d8) {
            ctx->pc = 0x23D438u;
            goto label_23d438;
        }
    }
    ctx->pc = 0x23D3E0u;
label_23d3e0:
    // 0x23d3e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x23d3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x23d3e4: 0x8c27d8cc  lw          $a3, -0x2734($at)
    ctx->pc = 0x23d3e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957260)));
    // 0x23d3e8: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x23d3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x23d3ec: 0x2484d570  addiu       $a0, $a0, -0x2A90
    ctx->pc = 0x23d3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
    // 0x23d3f0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x23d3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d3f4: 0xc087d14  jal         func_21F450
    ctx->pc = 0x23D3F4u;
    SET_GPR_U32(ctx, 31, 0x23D3FCu);
    ctx->pc = 0x23D3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D3F4u;
            // 0x23d3f8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F450u;
    if (runtime->hasFunction(0x21F450u)) {
        auto targetFn = runtime->lookupFunction(0x21F450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D3FCu; }
        if (ctx->pc != 0x23D3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemUseEnable__12CMenuItemUseFP13CGameDataUsediPv_0x21f450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D3FCu; }
        if (ctx->pc != 0x23D3FCu) { return; }
    }
    ctx->pc = 0x23D3FCu;
label_23d3fc:
    // 0x23d3fc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23D3FCu;
    {
        const bool branch_taken_0x23d3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d3fc) {
            ctx->pc = 0x23D438u;
            goto label_23d438;
        }
    }
    ctx->pc = 0x23D404u;
    // 0x23d404: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23d404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d408: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x23d408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x23d40c: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23d40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23d410: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d414: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23d414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23d418: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23D418u;
    {
        const bool branch_taken_0x23d418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D418u;
            // 0x23d41c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d418) {
            ctx->pc = 0x23D438u;
            goto label_23d438;
        }
    }
    ctx->pc = 0x23D420u;
label_23d420:
    // 0x23d420: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x23d420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x23d424: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23d424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23d428: 0xc094400  jal         func_251000
    ctx->pc = 0x23D428u;
    SET_GPR_U32(ctx, 31, 0x23D430u);
    ctx->pc = 0x23D42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D428u;
            // 0x23d42c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D430u; }
        if (ctx->pc != 0x23D430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D430u; }
        if (ctx->pc != 0x23D430u) { return; }
    }
    ctx->pc = 0x23D430u;
label_23d430:
    // 0x23d430: 0x100002e2  b           . + 4 + (0x2E2 << 2)
    ctx->pc = 0x23D430u;
    {
        const bool branch_taken_0x23d430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d430) {
            ctx->pc = 0x23DFBCu;
            goto label_23dfbc;
        }
    }
    ctx->pc = 0x23D438u;
label_23d438:
    // 0x23d438: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23d438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d43c: 0x2402138a  addiu       $v0, $zero, 0x138A
    ctx->pc = 0x23d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5002));
    // 0x23d440: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23d440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23d444: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x23d444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23d448: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23d448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23d44c: 0x1462003c  bne         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x23D44Cu;
    {
        const bool branch_taken_0x23d44c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D44Cu;
            // 0x23d450: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d44c) {
            ctx->pc = 0x23D540u;
            goto label_23d540;
        }
    }
    ctx->pc = 0x23D454u;
    // 0x23d454: 0xc06847c  jal         func_1A11F0
    ctx->pc = 0x23D454u;
    SET_GPR_U32(ctx, 31, 0x23D45Cu);
    ctx->pc = 0x23D458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D454u;
            // 0x23d458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A11F0u;
    if (runtime->hasFunction(0x1A11F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A11F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D45Cu; }
        if (ctx->pc != 0x23D45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsItemtypeWhoisEquip__FiPi_0x1a11f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D45Cu; }
        if (ctx->pc != 0x23D45Cu) { return; }
    }
    ctx->pc = 0x23D45Cu;
label_23d45c:
    // 0x23d45c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23d45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d460: 0xc0684a8  jal         func_1A12A0
    ctx->pc = 0x23D460u;
    SET_GPR_U32(ctx, 31, 0x23D468u);
    ctx->pc = 0x23D464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D460u;
            // 0x23d464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A12A0u;
    if (runtime->hasFunction(0x1A12A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A12A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D468u; }
        if (ctx->pc != 0x23D468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsCheckParty__Fi_0x1a12a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D468u; }
        if (ctx->pc != 0x23D468u) { return; }
    }
    ctx->pc = 0x23D468u;
label_23d468:
    // 0x23d468: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23D468u;
    {
        const bool branch_taken_0x23d468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D468u;
            // 0x23d46c: 0x27a401b8  addiu       $a0, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d468) {
            ctx->pc = 0x23D484u;
            goto label_23d484;
        }
    }
    ctx->pc = 0x23D470u;
    // 0x23d470: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23d470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23d474: 0xc094400  jal         func_251000
    ctx->pc = 0x23D474u;
    SET_GPR_U32(ctx, 31, 0x23D47Cu);
    ctx->pc = 0x23D478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D474u;
            // 0x23d478: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D47Cu; }
        if (ctx->pc != 0x23D47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D47Cu; }
        if (ctx->pc != 0x23D47Cu) { return; }
    }
    ctx->pc = 0x23D47Cu;
label_23d47c:
    // 0x23d47c: 0x100002cf  b           . + 4 + (0x2CF << 2)
    ctx->pc = 0x23D47Cu;
    {
        const bool branch_taken_0x23d47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d47c) {
            ctx->pc = 0x23DFBCu;
            goto label_23dfbc;
        }
    }
    ctx->pc = 0x23D484u;
label_23d484:
    // 0x23d484: 0x0  nop
    ctx->pc = 0x23d484u;
    // NOP
    // 0x23d488: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x23d488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x23d48c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D48Cu;
    {
        const bool branch_taken_0x23d48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d48c) {
            ctx->pc = 0x23D4B0u;
            goto label_23d4b0;
        }
    }
    ctx->pc = 0x23D494u;
    // 0x23d494: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23d494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d498: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x23d498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x23d49c: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23d49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23d4a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d4a4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23d4a8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x23D4A8u;
    {
        const bool branch_taken_0x23d4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D4A8u;
            // 0x23d4ac: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d4a8) {
            ctx->pc = 0x23D540u;
            goto label_23d540;
        }
    }
    ctx->pc = 0x23D4B0u;
label_23d4b0:
    // 0x23d4b0: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x23d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x23d4b4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x23d4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x23d4b8: 0x2442d8c0  addiu       $v0, $v0, -0x2740
    ctx->pc = 0x23d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957248));
    // 0x23d4bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23d4c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23d4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d4c4: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x23d4c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23d4c8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x23d4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x23d4cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D4CCu;
    {
        const bool branch_taken_0x23d4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d4cc) {
            ctx->pc = 0x23D4ECu;
            goto label_23d4ec;
        }
    }
    ctx->pc = 0x23D4D4u;
    // 0x23d4d4: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d4d8: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x23d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x23d4dc: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23d4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23d4e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d4e4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23d4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23d4e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23d4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23d4ec:
    // 0x23d4ec: 0x0  nop
    ctx->pc = 0x23d4ecu;
    // NOP
    // 0x23d4f0: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x23d4f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23d4f4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x23d4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x23d4f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D4F8u;
    {
        const bool branch_taken_0x23d4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d4f8) {
            ctx->pc = 0x23D518u;
            goto label_23d518;
        }
    }
    ctx->pc = 0x23D500u;
    // 0x23d500: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23d500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d504: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x23d504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x23d508: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23d508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23d50c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d510: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23d510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23d514: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23d514u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23d518:
    // 0x23d518: 0x94820008  lhu         $v0, 0x8($a0)
    ctx->pc = 0x23d518u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x23d51c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23d51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x23d520: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D520u;
    {
        const bool branch_taken_0x23d520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d520) {
            ctx->pc = 0x23D540u;
            goto label_23d540;
        }
    }
    ctx->pc = 0x23D528u;
    // 0x23d528: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23d528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d52c: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x23d52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x23d530: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23d530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23d534: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d538: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23d538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23d53c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23d53cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23d540:
    // 0x23d540: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23d540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d544: 0x2402138d  addiu       $v0, $zero, 0x138D
    ctx->pc = 0x23d544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5005));
    // 0x23d548: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23d548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23d54c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x23d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23d550: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23d550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23d554: 0x1462002e  bne         $v1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x23D554u;
    {
        const bool branch_taken_0x23d554 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d554) {
            ctx->pc = 0x23D610u;
            goto label_23d610;
        }
    }
    ctx->pc = 0x23D55Cu;
    // 0x23d55c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x23d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x23d560: 0x9042001c  lbu         $v0, 0x1C($v0)
    ctx->pc = 0x23d560u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x23d564: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23D564u;
    {
        const bool branch_taken_0x23d564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D564u;
            // 0x23d568: 0x26c2fffe  addiu       $v0, $s6, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d564) {
            ctx->pc = 0x23D58Cu;
            goto label_23d58c;
        }
    }
    ctx->pc = 0x23D56Cu;
    // 0x23d56c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x23d56cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x23d570: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x23D570u;
    {
        const bool branch_taken_0x23d570 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d570) {
            ctx->pc = 0x23D58Cu;
            goto label_23d58c;
        }
    }
    ctx->pc = 0x23D578u;
    // 0x23d578: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x23d578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
    // 0x23d57c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23d580: 0x84630110  lh          $v1, 0x110($v1)
    ctx->pc = 0x23d580u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x23d584: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D584u;
    {
        const bool branch_taken_0x23d584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d584) {
            ctx->pc = 0x23D5A8u;
            goto label_23d5a8;
        }
    }
    ctx->pc = 0x23D58Cu;
label_23d58c:
    // 0x23d58c: 0x0  nop
    ctx->pc = 0x23d58cu;
    // NOP
    // 0x23d590: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x23d590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x23d594: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23d594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23d598: 0xc094400  jal         func_251000
    ctx->pc = 0x23D598u;
    SET_GPR_U32(ctx, 31, 0x23D5A0u);
    ctx->pc = 0x23D59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D598u;
            // 0x23d59c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D5A0u; }
        if (ctx->pc != 0x23D5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D5A0u; }
        if (ctx->pc != 0x23D5A0u) { return; }
    }
    ctx->pc = 0x23D5A0u;
label_23d5a0:
    // 0x23d5a0: 0x10000286  b           . + 4 + (0x286 << 2)
    ctx->pc = 0x23D5A0u;
    {
        const bool branch_taken_0x23d5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d5a0) {
            ctx->pc = 0x23DFBCu;
            goto label_23dfbc;
        }
    }
    ctx->pc = 0x23D5A8u;
label_23d5a8:
    // 0x23d5a8: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D5A8u;
    {
        const bool branch_taken_0x23d5a8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D5A8u;
            // 0x23d5ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d5a8) {
            ctx->pc = 0x23D5B8u;
            goto label_23d5b8;
        }
    }
    ctx->pc = 0x23D5B0u;
    // 0x23d5b0: 0x16c20017  bne         $s6, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x23D5B0u;
    {
        const bool branch_taken_0x23d5b0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d5b0) {
            ctx->pc = 0x23D610u;
            goto label_23d610;
        }
    }
    ctx->pc = 0x23D5B8u;
label_23d5b8:
    // 0x23d5b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23d5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d5bc: 0xc065948  jal         func_196520
    ctx->pc = 0x23D5BCu;
    SET_GPR_U32(ctx, 31, 0x23D5C4u);
    ctx->pc = 0x23D5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D5BCu;
            // 0x23d5c0: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196520u;
    if (runtime->hasFunction(0x196520u)) {
        auto targetFn = runtime->lookupFunction(0x196520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D5C4u; }
        if (ctx->pc != 0x23D5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemEquip__Fii_0x196520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D5C4u; }
        if (ctx->pc != 0x23D5C4u) { return; }
    }
    ctx->pc = 0x23D5C4u;
label_23d5c4:
    // 0x23d5c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23D5C4u;
    {
        const bool branch_taken_0x23d5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D5C4u;
            // 0x23d5c8: 0x27a401b8  addiu       $a0, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d5c4) {
            ctx->pc = 0x23D5E0u;
            goto label_23d5e0;
        }
    }
    ctx->pc = 0x23D5CCu;
    // 0x23d5cc: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23d5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23d5d0: 0xc094400  jal         func_251000
    ctx->pc = 0x23D5D0u;
    SET_GPR_U32(ctx, 31, 0x23D5D8u);
    ctx->pc = 0x23D5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D5D0u;
            // 0x23d5d4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D5D8u; }
        if (ctx->pc != 0x23D5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D5D8u; }
        if (ctx->pc != 0x23D5D8u) { return; }
    }
    ctx->pc = 0x23D5D8u;
label_23d5d8:
    // 0x23d5d8: 0x10000278  b           . + 4 + (0x278 << 2)
    ctx->pc = 0x23D5D8u;
    {
        const bool branch_taken_0x23d5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d5d8) {
            ctx->pc = 0x23DFBCu;
            goto label_23dfbc;
        }
    }
    ctx->pc = 0x23D5E0u;
label_23d5e0:
    // 0x23d5e0: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x23d5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23d5e4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x23d5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d5e8: 0xc067688  jal         func_19DA20
    ctx->pc = 0x23D5E8u;
    SET_GPR_U32(ctx, 31, 0x23D5F0u);
    ctx->pc = 0x23D5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D5E8u;
            // 0x23d5ec: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DA20u;
    if (runtime->hasFunction(0x19DA20u)) {
        auto targetFn = runtime->lookupFunction(0x19DA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D5F0u; }
        if (ctx->pc != 0x23D5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchActiveItemTableSpace__16CUserDataManagerFii_0x19da20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D5F0u; }
        if (ctx->pc != 0x23D5F0u) { return; }
    }
    ctx->pc = 0x23D5F0u;
label_23d5f0:
    // 0x23d5f0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D5F0u;
    {
        const bool branch_taken_0x23d5f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23d5f0) {
            ctx->pc = 0x23D610u;
            goto label_23d610;
        }
    }
    ctx->pc = 0x23D5F8u;
    // 0x23d5f8: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d5fc: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x23d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x23d600: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23d600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23d604: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d608: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23d608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23d60c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23d60cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23d610:
    // 0x23d610: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23d610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d614: 0x24021391  addiu       $v0, $zero, 0x1391
    ctx->pc = 0x23d614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5009));
    // 0x23d618: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23d618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23d61c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x23d61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23d620: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23d620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23d624: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x23D624u;
    {
        const bool branch_taken_0x23d624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D624u;
            // 0x23d628: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d624) {
            ctx->pc = 0x23D6B8u;
            goto label_23d6b8;
        }
    }
    ctx->pc = 0x23D62Cu;
    // 0x23d62c: 0xc066274  jal         func_1989D0
    ctx->pc = 0x23D62Cu;
    SET_GPR_U32(ctx, 31, 0x23D634u);
    ctx->pc = 0x1989D0u;
    if (runtime->hasFunction(0x1989D0u)) {
        auto targetFn = runtime->lookupFunction(0x1989D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D634u; }
        if (ctx->pc != 0x23D634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsSpectolTrans__13CGameDataUsedFv_0x1989d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D634u; }
        if (ctx->pc != 0x23D634u) { return; }
    }
    ctx->pc = 0x23D634u;
label_23d634:
    // 0x23d634: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23D634u;
    {
        const bool branch_taken_0x23d634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d634) {
            ctx->pc = 0x23D664u;
            goto label_23d664;
        }
    }
    ctx->pc = 0x23D63Cu;
    // 0x23d63c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x23d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x23d640: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D640u;
    {
        const bool branch_taken_0x23d640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d640) {
            ctx->pc = 0x23D664u;
            goto label_23d664;
        }
    }
    ctx->pc = 0x23D648u;
    // 0x23d648: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x23d648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x23d64c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D64Cu;
    {
        const bool branch_taken_0x23d64c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d64c) {
            ctx->pc = 0x23D664u;
            goto label_23d664;
        }
    }
    ctx->pc = 0x23D654u;
    // 0x23d654: 0x8f838ad4  lw          $v1, -0x752C($gp)
    ctx->pc = 0x23d654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
    // 0x23d658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23d658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d65c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D65Cu;
    {
        const bool branch_taken_0x23d65c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d65c) {
            ctx->pc = 0x23D680u;
            goto label_23d680;
        }
    }
    ctx->pc = 0x23D664u;
label_23d664:
    // 0x23d664: 0x0  nop
    ctx->pc = 0x23d664u;
    // NOP
    // 0x23d668: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x23d668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x23d66c: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23d66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23d670: 0xc094400  jal         func_251000
    ctx->pc = 0x23D670u;
    SET_GPR_U32(ctx, 31, 0x23D678u);
    ctx->pc = 0x23D674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D670u;
            // 0x23d674: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D678u; }
        if (ctx->pc != 0x23D678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D678u; }
        if (ctx->pc != 0x23D678u) { return; }
    }
    ctx->pc = 0x23D678u;
label_23d678:
    // 0x23d678: 0x10000250  b           . + 4 + (0x250 << 2)
    ctx->pc = 0x23D678u;
    {
        const bool branch_taken_0x23d678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d678) {
            ctx->pc = 0x23DFBCu;
            goto label_23dfbc;
        }
    }
    ctx->pc = 0x23D680u;
label_23d680:
    // 0x23d680: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x23d680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x23d684: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23D684u;
    {
        const bool branch_taken_0x23d684 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23D688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D684u;
            // 0x23d688: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d684) {
            ctx->pc = 0x23D6B8u;
            goto label_23d6b8;
        }
    }
    ctx->pc = 0x23D68Cu;
    // 0x23d68c: 0xc065cb8  jal         func_1972E0
    ctx->pc = 0x23D68Cu;
    SET_GPR_U32(ctx, 31, 0x23D694u);
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D694u; }
        if (ctx->pc != 0x23D694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D694u; }
        if (ctx->pc != 0x23D694u) { return; }
    }
    ctx->pc = 0x23D694u;
label_23d694:
    // 0x23d694: 0x28410065  slti        $at, $v0, 0x65
    ctx->pc = 0x23d694u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x23d698: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D698u;
    {
        const bool branch_taken_0x23d698 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d698) {
            ctx->pc = 0x23D6B8u;
            goto label_23d6b8;
        }
    }
    ctx->pc = 0x23D6A0u;
    // 0x23d6a0: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d6a4: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x23d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x23d6a8: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23d6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23d6ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d6acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d6b0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23d6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23d6b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23d6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23d6b8:
    // 0x23d6b8: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d6bc: 0x2402138e  addiu       $v0, $zero, 0x138E
    ctx->pc = 0x23d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5006));
    // 0x23d6c0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x23d6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23d6c4: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x23d6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x23d6c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23d6cc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D6CCu;
    {
        const bool branch_taken_0x23d6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D6CCu;
            // 0x23d6d0: 0x2402138f  addiu       $v0, $zero, 0x138F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5007));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d6cc) {
            ctx->pc = 0x23D6DCu;
            goto label_23d6dc;
        }
    }
    ctx->pc = 0x23D6D4u;
    // 0x23d6d4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23D6D4u;
    {
        const bool branch_taken_0x23d6d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d6d4) {
            ctx->pc = 0x23D6F8u;
            goto label_23d6f8;
        }
    }
    ctx->pc = 0x23D6DCu;
label_23d6dc:
    // 0x23d6dc: 0x0  nop
    ctx->pc = 0x23d6dcu;
    // NOP
    // 0x23d6e0: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x23d6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x23d6e4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D6E4u;
    {
        const bool branch_taken_0x23d6e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x23D6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D6E4u;
            // 0x23d6e8: 0x3c038020  lui         $v1, 0x8020 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d6e4) {
            ctx->pc = 0x23D6F8u;
            goto label_23d6f8;
        }
    }
    ctx->pc = 0x23D6ECu;
    // 0x23d6ec: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x23d6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x23d6f0: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23d6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23d6f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23d6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23d6f8:
    // 0x23d6f8: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23d6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d6fc: 0x24021392  addiu       $v0, $zero, 0x1392
    ctx->pc = 0x23d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5010));
    // 0x23d700: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23d700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23d704: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x23d704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23d708: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23d708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23d70c: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23D70Cu;
    {
        const bool branch_taken_0x23d70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D70Cu;
            // 0x23d710: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d70c) {
            ctx->pc = 0x23D75Cu;
            goto label_23d75c;
        }
    }
    ctx->pc = 0x23D714u;
    // 0x23d714: 0xc0684a8  jal         func_1A12A0
    ctx->pc = 0x23D714u;
    SET_GPR_U32(ctx, 31, 0x23D71Cu);
    ctx->pc = 0x1A12A0u;
    if (runtime->hasFunction(0x1A12A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A12A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D71Cu; }
        if (ctx->pc != 0x23D71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsCheckParty__Fi_0x1a12a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D71Cu; }
        if (ctx->pc != 0x23D71Cu) { return; }
    }
    ctx->pc = 0x23D71Cu;
label_23d71c:
    // 0x23d71c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23D71Cu;
    {
        const bool branch_taken_0x23d71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D71Cu;
            // 0x23d720: 0x27a401b8  addiu       $a0, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d71c) {
            ctx->pc = 0x23D738u;
            goto label_23d738;
        }
    }
    ctx->pc = 0x23D724u;
    // 0x23d724: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23d724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23d728: 0xc094400  jal         func_251000
    ctx->pc = 0x23D728u;
    SET_GPR_U32(ctx, 31, 0x23D730u);
    ctx->pc = 0x23D72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D728u;
            // 0x23d72c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D730u; }
        if (ctx->pc != 0x23D730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D730u; }
        if (ctx->pc != 0x23D730u) { return; }
    }
    ctx->pc = 0x23D730u;
label_23d730:
    // 0x23d730: 0x10000222  b           . + 4 + (0x222 << 2)
    ctx->pc = 0x23D730u;
    {
        const bool branch_taken_0x23d730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d730) {
            ctx->pc = 0x23DFBCu;
            goto label_23dfbc;
        }
    }
    ctx->pc = 0x23D738u;
label_23d738:
    // 0x23d738: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x23d738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x23d73c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D73Cu;
    {
        const bool branch_taken_0x23d73c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d73c) {
            ctx->pc = 0x23D75Cu;
            goto label_23d75c;
        }
    }
    ctx->pc = 0x23D744u;
    // 0x23d744: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23d744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d748: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x23d748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x23d74c: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23d74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23d750: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d754: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23d754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23d758: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23d758u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23d75c:
    // 0x23d75c: 0x0  nop
    ctx->pc = 0x23d75cu;
    // NOP
    // 0x23d760: 0x8fa501b8  lw          $a1, 0x1B8($sp)
    ctx->pc = 0x23d760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d764: 0x2402139f  addiu       $v0, $zero, 0x139F
    ctx->pc = 0x23d764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5023));
    // 0x23d768: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x23d768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x23d76c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x23d76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23d770: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23d770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23d774: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x23D774u;
    {
        const bool branch_taken_0x23d774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d774) {
            ctx->pc = 0x23D7CCu;
            goto label_23d7cc;
        }
    }
    ctx->pc = 0x23D77Cu;
    // 0x23d77c: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x23d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
    // 0x23d780: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D780u;
    {
        const bool branch_taken_0x23d780 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23d780) {
            ctx->pc = 0x23D798u;
            goto label_23d798;
        }
    }
    ctx->pc = 0x23D788u;
    // 0x23d788: 0x8f828ad4  lw          $v0, -0x752C($gp)
    ctx->pc = 0x23d788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937300)));
    // 0x23d78c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23d78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d790: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D790u;
    {
        const bool branch_taken_0x23d790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x23d790) {
            ctx->pc = 0x23D7B0u;
            goto label_23d7b0;
        }
    }
    ctx->pc = 0x23D798u;
label_23d798:
    // 0x23d798: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x23d798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x23d79c: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23d79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23d7a0: 0xc094400  jal         func_251000
    ctx->pc = 0x23D7A0u;
    SET_GPR_U32(ctx, 31, 0x23D7A8u);
    ctx->pc = 0x23D7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D7A0u;
            // 0x23d7a4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D7A8u; }
        if (ctx->pc != 0x23D7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D7A8u; }
        if (ctx->pc != 0x23D7A8u) { return; }
    }
    ctx->pc = 0x23D7A8u;
label_23d7a8:
    // 0x23d7a8: 0x10000204  b           . + 4 + (0x204 << 2)
    ctx->pc = 0x23D7A8u;
    {
        const bool branch_taken_0x23d7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d7a8) {
            ctx->pc = 0x23DFBCu;
            goto label_23dfbc;
        }
    }
    ctx->pc = 0x23D7B0u;
label_23d7b0:
    // 0x23d7b0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x23d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x23d7b4: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D7B4u;
    {
        const bool branch_taken_0x23d7b4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23d7b4) {
            ctx->pc = 0x23D7CCu;
            goto label_23d7cc;
        }
    }
    ctx->pc = 0x23D7BCu;
    // 0x23d7bc: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x23d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x23d7c0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x23d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x23d7c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23d7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23d7c8: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x23d7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
label_23d7cc:
    // 0x23d7cc: 0x0  nop
    ctx->pc = 0x23d7ccu;
    // NOP
    // 0x23d7d0: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23d7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d7d4: 0x2402138c  addiu       $v0, $zero, 0x138C
    ctx->pc = 0x23d7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5004));
    // 0x23d7d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23d7dc: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x23d7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23d7e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23d7e4: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23D7E4u;
    {
        const bool branch_taken_0x23d7e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D7E4u;
            // 0x23d7e8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d7e4) {
            ctx->pc = 0x23D820u;
            goto label_23d820;
        }
    }
    ctx->pc = 0x23D7ECu;
    // 0x23d7ec: 0xc066060  jal         func_198180
    ctx->pc = 0x23D7ECu;
    SET_GPR_U32(ctx, 31, 0x23D7F4u);
    ctx->pc = 0x198180u;
    if (runtime->hasFunction(0x198180u)) {
        auto targetFn = runtime->lookupFunction(0x198180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D7F4u; }
        if (ctx->pc != 0x23D7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRepair__13CGameDataUsedFv_0x198180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D7F4u; }
        if (ctx->pc != 0x23D7F4u) { return; }
    }
    ctx->pc = 0x23D7F4u;
label_23d7f4:
    // 0x23d7f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D7F4u;
    {
        const bool branch_taken_0x23d7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d7f4) {
            ctx->pc = 0x23D808u;
            goto label_23d808;
        }
    }
    ctx->pc = 0x23D7FCu;
    // 0x23d7fc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x23d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23d800: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D800u;
    {
        const bool branch_taken_0x23d800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d800) {
            ctx->pc = 0x23D820u;
            goto label_23d820;
        }
    }
    ctx->pc = 0x23D808u;
label_23d808:
    // 0x23d808: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x23d808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x23d80c: 0x34432020  ori         $v1, $v0, 0x2020
    ctx->pc = 0x23d80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x23d810: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23d810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d814: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d814u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d818: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23d818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23d81c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23d81cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23d820:
    // 0x23d820: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23d820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d824: 0x24021395  addiu       $v0, $zero, 0x1395
    ctx->pc = 0x23d824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5013));
    // 0x23d828: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x23d828u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23d82c: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x23d82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x23d830: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23d830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23d834: 0x14620033  bne         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x23D834u;
    {
        const bool branch_taken_0x23d834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D834u;
            // 0x23d838: 0x3c038020  lui         $v1, 0x8020 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d834) {
            ctx->pc = 0x23D904u;
            goto label_23d904;
        }
    }
    ctx->pc = 0x23D83Cu;
    // 0x23d83c: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x23d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x23d840: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23d840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23d844: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x23d844u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d848: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23d848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x23d84c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23d84cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d850: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23d850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d854:
    // 0x23d854: 0x0  nop
    ctx->pc = 0x23d854u;
    // NOP
    // 0x23d858: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x23d858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d85c: 0xc066648  jal         func_199920
    ctx->pc = 0x23D85Cu;
    SET_GPR_U32(ctx, 31, 0x23D864u);
    ctx->pc = 0x23D860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D85Cu;
            // 0x23d860: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199920u;
    if (runtime->hasFunction(0x199920u)) {
        auto targetFn = runtime->lookupFunction(0x199920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D864u; }
        if (ctx->pc != 0x23D864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGiftBoxItemNo__13CGameDataUsedFi_0x199920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D864u; }
        if (ctx->pc != 0x23D864u) { return; }
    }
    ctx->pc = 0x23D864u;
label_23d864:
    // 0x23d864: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x23d864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23d868: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23d868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d86c: 0xc067674  jal         func_19D9D0
    ctx->pc = 0x23D86Cu;
    SET_GPR_U32(ctx, 31, 0x23D874u);
    ctx->pc = 0x23D870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D86Cu;
            // 0x23d870: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D9D0u;
    if (runtime->hasFunction(0x19D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x19D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D874u; }
        if (ctx->pc != 0x23D874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedDataPtr__16CUserDataManagerFi_0x19d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D874u; }
        if (ctx->pc != 0x23D874u) { return; }
    }
    ctx->pc = 0x23D874u;
label_23d874:
    // 0x23d874: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23D874u;
    {
        const bool branch_taken_0x23d874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D874u;
            // 0x23d878: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d874) {
            ctx->pc = 0x23D890u;
            goto label_23d890;
        }
    }
    ctx->pc = 0x23D87Cu;
    // 0x23d87c: 0xc065c9c  jal         func_197270
    ctx->pc = 0x23D87Cu;
    SET_GPR_U32(ctx, 31, 0x23D884u);
    ctx->pc = 0x197270u;
    if (runtime->hasFunction(0x197270u)) {
        auto targetFn = runtime->lookupFunction(0x197270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D884u; }
        if (ctx->pc != 0x23D884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckStackRemain__13CGameDataUsedFv_0x197270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D884u; }
        if (ctx->pc != 0x23D884u) { return; }
    }
    ctx->pc = 0x23D884u;
label_23d884:
    // 0x23d884: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23D884u;
    {
        const bool branch_taken_0x23d884 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23d884) {
            ctx->pc = 0x23D890u;
            goto label_23d890;
        }
    }
    ctx->pc = 0x23D88Cu;
    // 0x23d88c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x23d88cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_23d890:
    // 0x23d890: 0x1e400002  bgtz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x23D890u;
    {
        const bool branch_taken_0x23d890 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x23d890) {
            ctx->pc = 0x23D89Cu;
            goto label_23d89c;
        }
    }
    ctx->pc = 0x23D898u;
    // 0x23d898: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23d898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_23d89c:
    // 0x23d89c: 0x0  nop
    ctx->pc = 0x23d89cu;
    // NOP
    // 0x23d8a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23d8a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23d8a4: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x23d8a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23d8a8: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x23D8A8u;
    {
        const bool branch_taken_0x23d8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D8A8u;
            // 0x23d8ac: 0x15102a  slt         $v0, $zero, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d8a8) {
            ctx->pc = 0x23D854u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23d854;
        }
    }
    ctx->pc = 0x23D8B0u;
    // 0x23d8b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D8B0u;
    {
        const bool branch_taken_0x23d8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d8b0) {
            ctx->pc = 0x23D8C8u;
            goto label_23d8c8;
        }
    }
    ctx->pc = 0x23D8B8u;
    // 0x23d8b8: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x23d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x23d8bc: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x23d8bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x23d8c0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D8C0u;
    {
        const bool branch_taken_0x23d8c0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d8c0) {
            ctx->pc = 0x23D8E0u;
            goto label_23d8e0;
        }
    }
    ctx->pc = 0x23D8C8u;
label_23d8c8:
    // 0x23d8c8: 0x3c028030  lui         $v0, 0x8030
    ctx->pc = 0x23d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32816 << 16));
    // 0x23d8cc: 0x34433030  ori         $v1, $v0, 0x3030
    ctx->pc = 0x23d8ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12336);
    // 0x23d8d0: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d8d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d8d8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23d8dc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23d8e0:
    // 0x23d8e0: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x23d8e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23d8e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D8E4u;
    {
        const bool branch_taken_0x23d8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d8e4) {
            ctx->pc = 0x23D904u;
            goto label_23d904;
        }
    }
    ctx->pc = 0x23D8ECu;
    // 0x23d8ec: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d8f0: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x23d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x23d8f4: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23d8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23d8f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23d8fc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23d900: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23d900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23d904:
    // 0x23d904: 0x0  nop
    ctx->pc = 0x23d904u;
    // NOP
    // 0x23d908: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23d908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d90c: 0x24021396  addiu       $v0, $zero, 0x1396
    ctx->pc = 0x23d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5014));
    // 0x23d910: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x23d910u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23d914: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x23d914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x23d918: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23d918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23d91c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23D91Cu;
    {
        const bool branch_taken_0x23d91c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d91c) {
            ctx->pc = 0x23D960u;
            goto label_23d960;
        }
    }
    ctx->pc = 0x23D924u;
    // 0x23d924: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x23d924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x23d928: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D928u;
    {
        const bool branch_taken_0x23d928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d928) {
            ctx->pc = 0x23D948u;
            goto label_23d948;
        }
    }
    ctx->pc = 0x23D930u;
    // 0x23d930: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x23d930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x23d934: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23d934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23d938: 0xc094400  jal         func_251000
    ctx->pc = 0x23D938u;
    SET_GPR_U32(ctx, 31, 0x23D940u);
    ctx->pc = 0x23D93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D938u;
            // 0x23d93c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D940u; }
        if (ctx->pc != 0x23D940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D940u; }
        if (ctx->pc != 0x23D940u) { return; }
    }
    ctx->pc = 0x23D940u;
label_23d940:
    // 0x23d940: 0x1000019e  b           . + 4 + (0x19E << 2)
    ctx->pc = 0x23D940u;
    {
        const bool branch_taken_0x23d940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d940) {
            ctx->pc = 0x23DFBCu;
            goto label_23dfbc;
        }
    }
    ctx->pc = 0x23D948u;
label_23d948:
    // 0x23d948: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x23d948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x23d94c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D94Cu;
    {
        const bool branch_taken_0x23d94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D94Cu;
            // 0x23d950: 0x3c038020  lui         $v1, 0x8020 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d94c) {
            ctx->pc = 0x23D960u;
            goto label_23d960;
        }
    }
    ctx->pc = 0x23D954u;
    // 0x23d954: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x23d954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x23d958: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23d958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23d95c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23d960:
    // 0x23d960: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23d960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23d964: 0x240213b2  addiu       $v0, $zero, 0x13B2
    ctx->pc = 0x23d964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5042));
    // 0x23d968: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x23d968u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23d96c: 0x2852021  addu        $a0, $s4, $a1
    ctx->pc = 0x23d96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x23d970: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23d970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23d974: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23D974u;
    {
        const bool branch_taken_0x23d974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d974) {
            ctx->pc = 0x23D9A0u;
            goto label_23d9a0;
        }
    }
    ctx->pc = 0x23D97Cu;
    // 0x23d97c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x23d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x23d980: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D980u;
    {
        const bool branch_taken_0x23d980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d980) {
            ctx->pc = 0x23D9A0u;
            goto label_23d9a0;
        }
    }
    ctx->pc = 0x23D988u;
    // 0x23d988: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x23d988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x23d98c: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23d98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23d990: 0xc094400  jal         func_251000
    ctx->pc = 0x23D990u;
    SET_GPR_U32(ctx, 31, 0x23D998u);
    ctx->pc = 0x23D994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D990u;
            // 0x23d994: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D998u; }
        if (ctx->pc != 0x23D998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D998u; }
        if (ctx->pc != 0x23D998u) { return; }
    }
    ctx->pc = 0x23D998u;
label_23d998:
    // 0x23d998: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x23D998u;
    {
        const bool branch_taken_0x23d998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d998) {
            ctx->pc = 0x23DFBCu;
            goto label_23dfbc;
        }
    }
    ctx->pc = 0x23D9A0u;
label_23d9a0:
    // 0x23d9a0: 0x2402139b  addiu       $v0, $zero, 0x139B
    ctx->pc = 0x23d9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5019));
    // 0x23d9a4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D9A4u;
    {
        const bool branch_taken_0x23d9a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D9A4u;
            // 0x23d9a8: 0x2402139c  addiu       $v0, $zero, 0x139C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5020));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9a4) {
            ctx->pc = 0x23D9B4u;
            goto label_23d9b4;
        }
    }
    ctx->pc = 0x23D9ACu;
    // 0x23d9ac: 0x14620076  bne         $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x23D9ACu;
    {
        const bool branch_taken_0x23d9ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d9ac) {
            ctx->pc = 0x23DB88u;
            goto label_23db88;
        }
    }
    ctx->pc = 0x23D9B4u;
label_23d9b4:
    // 0x23d9b4: 0x0  nop
    ctx->pc = 0x23d9b4u;
    // NOP
    // 0x23d9b8: 0x2ac10002  slti        $at, $s6, 0x2
    ctx->pc = 0x23d9b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23d9bc: 0x10200041  beqz        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x23D9BCu;
    {
        const bool branch_taken_0x23d9bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d9bc) {
            ctx->pc = 0x23DAC4u;
            goto label_23dac4;
        }
    }
    ctx->pc = 0x23D9C4u;
    // 0x23d9c4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x23d9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x23d9c8: 0x2463ec65  addiu       $v1, $v1, -0x139B
    ctx->pc = 0x23d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962277));
    // 0x23d9cc: 0x162880  sll         $a1, $s6, 2
    ctx->pc = 0x23d9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x23d9d0: 0x2484d8c0  addiu       $a0, $a0, -0x2740
    ctx->pc = 0x23d9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957248));
    // 0x23d9d4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x23d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x23d9d8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x23d9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x23d9dc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x23d9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23d9e0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d9e4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x23d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23d9e8: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x23d9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x23d9ec: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23d9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23d9f0: 0x24020127  addiu       $v0, $zero, 0x127
    ctx->pc = 0x23d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
    // 0x23d9f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23d9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x23d9f8: 0x17c20010  bne         $fp, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23D9F8u;
    {
        const bool branch_taken_0x23d9f8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D9F8u;
            // 0x23d9fc: 0x24700170  addiu       $s0, $v1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d9f8) {
            ctx->pc = 0x23DA3Cu;
            goto label_23da3c;
        }
    }
    ctx->pc = 0x23DA00u;
    // 0x23da00: 0xc066168  jal         func_1985A0
    ctx->pc = 0x23DA00u;
    SET_GPR_U32(ctx, 31, 0x23DA08u);
    ctx->pc = 0x23DA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DA00u;
            // 0x23da04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DA08u; }
        if (ctx->pc != 0x23DA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsLevelUp__13CGameDataUsedFv_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DA08u; }
        if (ctx->pc != 0x23DA08u) { return; }
    }
    ctx->pc = 0x23DA08u;
label_23da08:
    // 0x23da08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DA08u;
    {
        const bool branch_taken_0x23da08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DA08u;
            // 0x23da0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da08) {
            ctx->pc = 0x23DA20u;
            goto label_23da20;
        }
    }
    ctx->pc = 0x23DA10u;
    // 0x23da10: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x23DA10u;
    SET_GPR_U32(ctx, 31, 0x23DA18u);
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DA18u; }
        if (ctx->pc != 0x23DA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DA18u; }
        if (ctx->pc != 0x23DA18u) { return; }
    }
    ctx->pc = 0x23DA18u;
label_23da18:
    // 0x23da18: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x23DA18u;
    {
        const bool branch_taken_0x23da18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23da18) {
            ctx->pc = 0x23DB88u;
            goto label_23db88;
        }
    }
    ctx->pc = 0x23DA20u;
label_23da20:
    // 0x23da20: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x23da20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x23da24: 0x34432020  ori         $v1, $v0, 0x2020
    ctx->pc = 0x23da24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x23da28: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23da2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23da2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23da30: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23da30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23da34: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x23DA34u;
    {
        const bool branch_taken_0x23da34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DA34u;
            // 0x23da38: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da34) {
            ctx->pc = 0x23DB88u;
            goto label_23db88;
        }
    }
    ctx->pc = 0x23DA3Cu;
label_23da3c:
    // 0x23da3c: 0x0  nop
    ctx->pc = 0x23da3cu;
    // NOP
    // 0x23da40: 0xc0660bc  jal         func_1982F0
    ctx->pc = 0x23DA40u;
    SET_GPR_U32(ctx, 31, 0x23DA48u);
    ctx->pc = 0x23DA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DA40u;
            // 0x23da44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1982F0u;
    if (runtime->hasFunction(0x1982F0u)) {
        auto targetFn = runtime->lookupFunction(0x1982F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DA48u; }
        if (ctx->pc != 0x23DA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnableRepairItemNo__13CGameDataUsedFv_0x1982f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DA48u; }
        if (ctx->pc != 0x23DA48u) { return; }
    }
    ctx->pc = 0x23DA48u;
label_23da48:
    // 0x23da48: 0x13c20008  beq         $fp, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23DA48u;
    {
        const bool branch_taken_0x23da48 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x23DA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DA48u;
            // 0x23da4c: 0x27a401b8  addiu       $a0, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da48) {
            ctx->pc = 0x23DA6Cu;
            goto label_23da6c;
        }
    }
    ctx->pc = 0x23DA50u;
    // 0x23da50: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23da50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23da54: 0xc094400  jal         func_251000
    ctx->pc = 0x23DA54u;
    SET_GPR_U32(ctx, 31, 0x23DA5Cu);
    ctx->pc = 0x23DA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DA54u;
            // 0x23da58: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DA5Cu; }
        if (ctx->pc != 0x23DA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DA5Cu; }
        if (ctx->pc != 0x23DA5Cu) { return; }
    }
    ctx->pc = 0x23DA5Cu;
label_23da5c:
    // 0x23da5c: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23da60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23da60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23da64: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x23DA64u;
    {
        const bool branch_taken_0x23da64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DA64u;
            // 0x23da68: 0xafa201b8  sw          $v0, 0x1B8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da64) {
            ctx->pc = 0x23DB88u;
            goto label_23db88;
        }
    }
    ctx->pc = 0x23DA6Cu;
label_23da6c:
    // 0x23da6c: 0x0  nop
    ctx->pc = 0x23da6cu;
    // NOP
    // 0x23da70: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DA70u;
    {
        const bool branch_taken_0x23da70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x23da70) {
            ctx->pc = 0x23DA90u;
            goto label_23da90;
        }
    }
    ctx->pc = 0x23DA78u;
    // 0x23da78: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23da78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23da7c: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x23da7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x23da80: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23da80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23da84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23da84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23da88: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23da88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23da8c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23da90:
    // 0x23da90: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x23DA90u;
    {
        const bool branch_taken_0x23da90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DA90u;
            // 0x23da94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23da90) {
            ctx->pc = 0x23DB88u;
            goto label_23db88;
        }
    }
    ctx->pc = 0x23DA98u;
    // 0x23da98: 0xc066060  jal         func_198180
    ctx->pc = 0x23DA98u;
    SET_GPR_U32(ctx, 31, 0x23DAA0u);
    ctx->pc = 0x198180u;
    if (runtime->hasFunction(0x198180u)) {
        auto targetFn = runtime->lookupFunction(0x198180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DAA0u; }
        if (ctx->pc != 0x23DAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRepair__13CGameDataUsedFv_0x198180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DAA0u; }
        if (ctx->pc != 0x23DAA0u) { return; }
    }
    ctx->pc = 0x23DAA0u;
label_23daa0:
    // 0x23daa0: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x23DAA0u;
    {
        const bool branch_taken_0x23daa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23daa0) {
            ctx->pc = 0x23DB88u;
            goto label_23db88;
        }
    }
    ctx->pc = 0x23DAA8u;
    // 0x23daa8: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23daac: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x23daacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x23dab0: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23dab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23dab4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23dab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23dab8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23dabc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x23DABCu;
    {
        const bool branch_taken_0x23dabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DABCu;
            // 0x23dac0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dabc) {
            ctx->pc = 0x23DB88u;
            goto label_23db88;
        }
    }
    ctx->pc = 0x23DAC4u;
label_23dac4:
    // 0x23dac4: 0x0  nop
    ctx->pc = 0x23dac4u;
    // NOP
    // 0x23dac8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23dac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23dacc: 0x16c20029  bne         $s6, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x23DACCu;
    {
        const bool branch_taken_0x23dacc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DACCu;
            // 0x23dad0: 0x2402139c  addiu       $v0, $zero, 0x139C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5020));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dacc) {
            ctx->pc = 0x23DB74u;
            goto label_23db74;
        }
    }
    ctx->pc = 0x23DAD4u;
    // 0x23dad4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DAD4u;
    {
        const bool branch_taken_0x23dad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23dad4) {
            ctx->pc = 0x23DAF4u;
            goto label_23daf4;
        }
    }
    ctx->pc = 0x23DADCu;
    // 0x23dadc: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x23dadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x23dae0: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23dae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23dae4: 0xc094400  jal         func_251000
    ctx->pc = 0x23DAE4u;
    SET_GPR_U32(ctx, 31, 0x23DAECu);
    ctx->pc = 0x23DAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DAE4u;
            // 0x23dae8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DAECu; }
        if (ctx->pc != 0x23DAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DAECu; }
        if (ctx->pc != 0x23DAECu) { return; }
    }
    ctx->pc = 0x23DAECu;
label_23daec:
    // 0x23daec: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x23DAECu;
    {
        const bool branch_taken_0x23daec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23daec) {
            ctx->pc = 0x23DFBCu;
            goto label_23dfbc;
        }
    }
    ctx->pc = 0x23DAF4u;
label_23daf4:
    // 0x23daf4: 0x0  nop
    ctx->pc = 0x23daf4u;
    // NOP
    // 0x23daf8: 0x24020127  addiu       $v0, $zero, 0x127
    ctx->pc = 0x23daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
    // 0x23dafc: 0x17c20007  bne         $fp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DAFCu;
    {
        const bool branch_taken_0x23dafc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x23dafc) {
            ctx->pc = 0x23DB1Cu;
            goto label_23db1c;
        }
    }
    ctx->pc = 0x23DB04u;
    // 0x23db04: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x23db04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x23db08: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23db08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23db0c: 0xc094400  jal         func_251000
    ctx->pc = 0x23DB0Cu;
    SET_GPR_U32(ctx, 31, 0x23DB14u);
    ctx->pc = 0x23DB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DB0Cu;
            // 0x23db10: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DB14u; }
        if (ctx->pc != 0x23DB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DB14u; }
        if (ctx->pc != 0x23DB14u) { return; }
    }
    ctx->pc = 0x23DB14u;
label_23db14:
    // 0x23db14: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x23DB14u;
    {
        const bool branch_taken_0x23db14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23db14) {
            ctx->pc = 0x23DFBCu;
            goto label_23dfbc;
        }
    }
    ctx->pc = 0x23DB1Cu;
label_23db1c:
    // 0x23db1c: 0x0  nop
    ctx->pc = 0x23db1cu;
    // NOP
    // 0x23db20: 0x2402139d  addiu       $v0, $zero, 0x139D
    ctx->pc = 0x23db20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5021));
    // 0x23db24: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x23db24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x23db28: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x23db28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23db2c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23DB2Cu;
    {
        const bool branch_taken_0x23db2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DB2Cu;
            // 0x23db30: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db2c) {
            ctx->pc = 0x23DB54u;
            goto label_23db54;
        }
    }
    ctx->pc = 0x23DB34u;
    // 0x23db34: 0x8c22d8c8  lw          $v0, -0x2738($at)
    ctx->pc = 0x23db34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
    // 0x23db38: 0xc066060  jal         func_198180
    ctx->pc = 0x23DB38u;
    SET_GPR_U32(ctx, 31, 0x23DB40u);
    ctx->pc = 0x23DB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DB38u;
            // 0x23db3c: 0x24440030  addiu       $a0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198180u;
    if (runtime->hasFunction(0x198180u)) {
        auto targetFn = runtime->lookupFunction(0x198180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DB40u; }
        if (ctx->pc != 0x23DB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRepair__13CGameDataUsedFv_0x198180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DB40u; }
        if (ctx->pc != 0x23DB40u) { return; }
    }
    ctx->pc = 0x23DB40u;
label_23db40:
    // 0x23db40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DB40u;
    {
        const bool branch_taken_0x23db40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23db40) {
            ctx->pc = 0x23DB54u;
            goto label_23db54;
        }
    }
    ctx->pc = 0x23DB48u;
    // 0x23db48: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x23db48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x23db4c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23DB4Cu;
    {
        const bool branch_taken_0x23db4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23db4c) {
            ctx->pc = 0x23DB88u;
            goto label_23db88;
        }
    }
    ctx->pc = 0x23DB54u;
label_23db54:
    // 0x23db54: 0x0  nop
    ctx->pc = 0x23db54u;
    // NOP
    // 0x23db58: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x23db58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x23db5c: 0x34432020  ori         $v1, $v0, 0x2020
    ctx->pc = 0x23db5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x23db60: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23db60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23db64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23db64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23db68: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23db68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23db6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23DB6Cu;
    {
        const bool branch_taken_0x23db6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DB6Cu;
            // 0x23db70: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23db6c) {
            ctx->pc = 0x23DB88u;
            goto label_23db88;
        }
    }
    ctx->pc = 0x23DB74u;
label_23db74:
    // 0x23db74: 0x0  nop
    ctx->pc = 0x23db74u;
    // NOP
    // 0x23db78: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x23db78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x23db7c: 0x2651021  addu        $v0, $s3, $a1
    ctx->pc = 0x23db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x23db80: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23db80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23db84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23db84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23db88:
    // 0x23db88: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23db88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23db8c: 0x2402139e  addiu       $v0, $zero, 0x139E
    ctx->pc = 0x23db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5022));
    // 0x23db90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23db90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23db94: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x23db94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23db98: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23db98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23db9c: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x23DB9Cu;
    {
        const bool branch_taken_0x23db9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23db9c) {
            ctx->pc = 0x23DC00u;
            goto label_23dc00;
        }
    }
    ctx->pc = 0x23DBA4u;
    // 0x23dba4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x23dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x23dba8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23DBA8u;
    {
        const bool branch_taken_0x23dba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DBA8u;
            // 0x23dbac: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dba8) {
            ctx->pc = 0x23DBE8u;
            goto label_23dbe8;
        }
    }
    ctx->pc = 0x23DBB0u;
    // 0x23dbb0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23dbb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23dbb4: 0xc066a0c  jal         func_19A830
    ctx->pc = 0x23DBB4u;
    SET_GPR_U32(ctx, 31, 0x23DBBCu);
    ctx->pc = 0x23DBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DBB4u;
            // 0x23dbb8: 0x8c24d8c8  lw          $a0, -0x2738($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A830u;
    if (runtime->hasFunction(0x19A830u)) {
        auto targetFn = runtime->lookupFunction(0x19A830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DBBCu; }
        if (ctx->pc != 0x23DBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__9ROBO_DATAFf_0x19a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DBBCu; }
        if (ctx->pc != 0x23DBBCu) { return; }
    }
    ctx->pc = 0x23DBBCu;
label_23dbbc:
    // 0x23dbbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23dbc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23dbc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23dbc4: 0x0  nop
    ctx->pc = 0x23dbc4u;
    // NOP
    // 0x23dbc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23dbc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23dbcc: 0x0  nop
    ctx->pc = 0x23dbccu;
    // NOP
    // 0x23dbd0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x23DBD0u;
    {
        const bool branch_taken_0x23dbd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23dbd0) {
            ctx->pc = 0x23DBE8u;
            goto label_23dbe8;
        }
    }
    ctx->pc = 0x23DBD8u;
    // 0x23dbd8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x23dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x23dbdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23dbe0: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DBE0u;
    {
        const bool branch_taken_0x23dbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23dbe0) {
            ctx->pc = 0x23DC00u;
            goto label_23dc00;
        }
    }
    ctx->pc = 0x23DBE8u;
label_23dbe8:
    // 0x23dbe8: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x23dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x23dbec: 0x34432020  ori         $v1, $v0, 0x2020
    ctx->pc = 0x23dbecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x23dbf0: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23dbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23dbf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23dbf8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23dbfc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23dbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23dc00:
    // 0x23dc00: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23dc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23dc04: 0x240213a2  addiu       $v0, $zero, 0x13A2
    ctx->pc = 0x23dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5026));
    // 0x23dc08: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x23dc08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23dc0c: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x23dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x23dc10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23dc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23dc14: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DC14u;
    {
        const bool branch_taken_0x23dc14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23dc14) {
            ctx->pc = 0x23DC34u;
            goto label_23dc34;
        }
    }
    ctx->pc = 0x23DC1Cu;
    // 0x23dc1c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x23dc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23dc20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DC20u;
    {
        const bool branch_taken_0x23dc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DC20u;
            // 0x23dc24: 0x3c038020  lui         $v1, 0x8020 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc20) {
            ctx->pc = 0x23DC34u;
            goto label_23dc34;
        }
    }
    ctx->pc = 0x23DC28u;
    // 0x23dc28: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x23dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x23dc2c: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23dc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23dc30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23dc30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23dc34:
    // 0x23dc34: 0x0  nop
    ctx->pc = 0x23dc34u;
    // NOP
    // 0x23dc38: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23dc3c: 0x240213a0  addiu       $v0, $zero, 0x13A0
    ctx->pc = 0x23dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5024));
    // 0x23dc40: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x23dc40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23dc44: 0x2841821  addu        $v1, $s4, $a0
    ctx->pc = 0x23dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x23dc48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23dc4c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23DC4Cu;
    {
        const bool branch_taken_0x23dc4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23DC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DC4Cu;
            // 0x23dc50: 0x240213a1  addiu       $v0, $zero, 0x13A1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5025));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc4c) {
            ctx->pc = 0x23DC5Cu;
            goto label_23dc5c;
        }
    }
    ctx->pc = 0x23DC54u;
    // 0x23dc54: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x23DC54u;
    {
        const bool branch_taken_0x23dc54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23dc54) {
            ctx->pc = 0x23DCD8u;
            goto label_23dcd8;
        }
    }
    ctx->pc = 0x23DC5Cu;
label_23dc5c:
    // 0x23dc5c: 0x0  nop
    ctx->pc = 0x23dc5cu;
    // NOP
    // 0x23dc60: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x23dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x23dc64: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DC64u;
    {
        const bool branch_taken_0x23dc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DC64u;
            // 0x23dc68: 0x3c038020  lui         $v1, 0x8020 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc64) {
            ctx->pc = 0x23DC7Cu;
            goto label_23dc7c;
        }
    }
    ctx->pc = 0x23DC6Cu;
    // 0x23dc6c: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x23dc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x23dc70: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23dc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23dc74: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x23DC74u;
    {
        const bool branch_taken_0x23dc74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DC74u;
            // 0x23dc78: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc74) {
            ctx->pc = 0x23DCD8u;
            goto label_23dcd8;
        }
    }
    ctx->pc = 0x23DC7Cu;
label_23dc7c:
    // 0x23dc7c: 0x0  nop
    ctx->pc = 0x23dc7cu;
    // NOP
    // 0x23dc80: 0x86e30002  lh          $v1, 0x2($s7)
    ctx->pc = 0x23dc80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x23dc84: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x23dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x23dc88: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DC88u;
    {
        const bool branch_taken_0x23dc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23DC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DC88u;
            // 0x23dc8c: 0x3c038020  lui         $v1, 0x8020 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc88) {
            ctx->pc = 0x23DCA0u;
            goto label_23dca0;
        }
    }
    ctx->pc = 0x23DC90u;
    // 0x23dc90: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x23dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x23dc94: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23dc94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23dc98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x23DC98u;
    {
        const bool branch_taken_0x23dc98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DC98u;
            // 0x23dc9c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dc98) {
            ctx->pc = 0x23DCD8u;
            goto label_23dcd8;
        }
    }
    ctx->pc = 0x23DCA0u;
label_23dca0:
    // 0x23dca0: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x23dca0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23dca4: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x23DCA4u;
    {
        const bool branch_taken_0x23dca4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dca4) {
            ctx->pc = 0x23DCD8u;
            goto label_23dcd8;
        }
    }
    ctx->pc = 0x23DCACu;
    // 0x23dcac: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x23dcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
    // 0x23dcb0: 0xc067674  jal         func_19D9D0
    ctx->pc = 0x23DCB0u;
    SET_GPR_U32(ctx, 31, 0x23DCB8u);
    ctx->pc = 0x23DCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DCB0u;
            // 0x23dcb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D9D0u;
    if (runtime->hasFunction(0x19D9D0u)) {
        auto targetFn = runtime->lookupFunction(0x19D9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DCB8u; }
        if (ctx->pc != 0x23DCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedDataPtr__16CUserDataManagerFi_0x19d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DCB8u; }
        if (ctx->pc != 0x23DCB8u) { return; }
    }
    ctx->pc = 0x23DCB8u;
label_23dcb8:
    // 0x23dcb8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DCB8u;
    {
        const bool branch_taken_0x23dcb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23dcb8) {
            ctx->pc = 0x23DCD8u;
            goto label_23dcd8;
        }
    }
    ctx->pc = 0x23DCC0u;
    // 0x23dcc0: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23dcc4: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x23dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x23dcc8: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23dcc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23dccc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23dcd0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23dcd4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23dcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23dcd8:
    // 0x23dcd8: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23dcdc: 0x240213a3  addiu       $v0, $zero, 0x13A3
    ctx->pc = 0x23dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5027));
    // 0x23dce0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23dce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23dce4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x23dce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23dce8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23dce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23dcec: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DCECu;
    {
        const bool branch_taken_0x23dcec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23DCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DCECu;
            // 0x23dcf0: 0x240213a4  addiu       $v0, $zero, 0x13A4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5028));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcec) {
            ctx->pc = 0x23DD0Cu;
            goto label_23dd0c;
        }
    }
    ctx->pc = 0x23DCF4u;
    // 0x23dcf4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23DCF4u;
    {
        const bool branch_taken_0x23dcf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23DCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DCF4u;
            // 0x23dcf8: 0x240213a8  addiu       $v0, $zero, 0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5032));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcf4) {
            ctx->pc = 0x23DD0Cu;
            goto label_23dd0c;
        }
    }
    ctx->pc = 0x23DCFCu;
    // 0x23dcfc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23DCFCu;
    {
        const bool branch_taken_0x23dcfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23DD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DCFCu;
            // 0x23dd00: 0x240213a9  addiu       $v0, $zero, 0x13A9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5033));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dcfc) {
            ctx->pc = 0x23DD0Cu;
            goto label_23dd0c;
        }
    }
    ctx->pc = 0x23DD04u;
    // 0x23dd04: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x23DD04u;
    {
        const bool branch_taken_0x23dd04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23dd04) {
            ctx->pc = 0x23DD3Cu;
            goto label_23dd3c;
        }
    }
    ctx->pc = 0x23DD0Cu;
label_23dd0c:
    // 0x23dd0c: 0x0  nop
    ctx->pc = 0x23dd0cu;
    // NOP
    // 0x23dd10: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x23dd10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x23dd14: 0xc06762c  jal         func_19D8B0
    ctx->pc = 0x23DD14u;
    SET_GPR_U32(ctx, 31, 0x23DD1Cu);
    ctx->pc = 0x23DD18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DD14u;
            // 0x23dd18: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D8B0u;
    if (runtime->hasFunction(0x19D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x19D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DD1Cu; }
        if (ctx->pc != 0x23DD1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchSpaceUsedData__16CUserDataManagerFi_0x19d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DD1Cu; }
        if (ctx->pc != 0x23DD1Cu) { return; }
    }
    ctx->pc = 0x23DD1Cu;
label_23dd1c:
    // 0x23dd1c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DD1Cu;
    {
        const bool branch_taken_0x23dd1c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x23dd1c) {
            ctx->pc = 0x23DD3Cu;
            goto label_23dd3c;
        }
    }
    ctx->pc = 0x23DD24u;
    // 0x23dd24: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23dd28: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x23dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x23dd2c: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23dd2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23dd30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23dd34: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23dd38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23dd38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23dd3c:
    // 0x23dd3c: 0x0  nop
    ctx->pc = 0x23dd3cu;
    // NOP
    // 0x23dd40: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23dd44: 0x24021389  addiu       $v0, $zero, 0x1389
    ctx->pc = 0x23dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5001));
    // 0x23dd48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23dd48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23dd4c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x23dd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23dd50: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23dd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23dd54: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x23DD54u;
    {
        const bool branch_taken_0x23dd54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23DD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DD54u;
            // 0x23dd58: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dd54) {
            ctx->pc = 0x23DD98u;
            goto label_23dd98;
        }
    }
    ctx->pc = 0x23DD5Cu;
    // 0x23dd5c: 0xc066254  jal         func_198950
    ctx->pc = 0x23DD5Cu;
    SET_GPR_U32(ctx, 31, 0x23DD64u);
    ctx->pc = 0x198950u;
    if (runtime->hasFunction(0x198950u)) {
        auto targetFn = runtime->lookupFunction(0x198950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DD64u; }
        if (ctx->pc != 0x23DD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsTrush__13CGameDataUsedFv_0x198950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DD64u; }
        if (ctx->pc != 0x23DD64u) { return; }
    }
    ctx->pc = 0x23DD64u;
label_23dd64:
    // 0x23dd64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DD64u;
    {
        const bool branch_taken_0x23dd64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dd64) {
            ctx->pc = 0x23DD84u;
            goto label_23dd84;
        }
    }
    ctx->pc = 0x23DD6Cu;
    // 0x23dd6c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x23dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x23dd70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DD70u;
    {
        const bool branch_taken_0x23dd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dd70) {
            ctx->pc = 0x23DD84u;
            goto label_23dd84;
        }
    }
    ctx->pc = 0x23DD78u;
    // 0x23dd78: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x23dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x23dd7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23DD7Cu;
    {
        const bool branch_taken_0x23dd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dd7c) {
            ctx->pc = 0x23DD98u;
            goto label_23dd98;
        }
    }
    ctx->pc = 0x23DD84u;
label_23dd84:
    // 0x23dd84: 0x0  nop
    ctx->pc = 0x23dd84u;
    // NOP
    // 0x23dd88: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x23dd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x23dd8c: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23dd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23dd90: 0xc094400  jal         func_251000
    ctx->pc = 0x23DD90u;
    SET_GPR_U32(ctx, 31, 0x23DD98u);
    ctx->pc = 0x23DD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DD90u;
            // 0x23dd94: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DD98u; }
        if (ctx->pc != 0x23DD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DD98u; }
        if (ctx->pc != 0x23DD98u) { return; }
    }
    ctx->pc = 0x23DD98u;
label_23dd98:
    // 0x23dd98: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23dd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23dd9c: 0x2402138b  addiu       $v0, $zero, 0x138B
    ctx->pc = 0x23dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5003));
    // 0x23dda0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23dda0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23dda4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x23dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23dda8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23ddac: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23DDACu;
    {
        const bool branch_taken_0x23ddac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23ddac) {
            ctx->pc = 0x23DDDCu;
            goto label_23dddc;
        }
    }
    ctx->pc = 0x23DDB4u;
    // 0x23ddb4: 0x82e30004  lb          $v1, 0x4($s7)
    ctx->pc = 0x23ddb4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x23ddb8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x23ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x23ddbc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DDBCu;
    {
        const bool branch_taken_0x23ddbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23ddbc) {
            ctx->pc = 0x23DDDCu;
            goto label_23dddc;
        }
    }
    ctx->pc = 0x23DDC4u;
    // 0x23ddc4: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x23ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x23ddc8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23DDC8u;
    {
        const bool branch_taken_0x23ddc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DDC8u;
            // 0x23ddcc: 0x27a401b8  addiu       $a0, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ddc8) {
            ctx->pc = 0x23DDDCu;
            goto label_23dddc;
        }
    }
    ctx->pc = 0x23DDD0u;
    // 0x23ddd0: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23ddd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23ddd4: 0xc094400  jal         func_251000
    ctx->pc = 0x23DDD4u;
    SET_GPR_U32(ctx, 31, 0x23DDDCu);
    ctx->pc = 0x23DDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DDD4u;
            // 0x23ddd8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DDDCu; }
        if (ctx->pc != 0x23DDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DDDCu; }
        if (ctx->pc != 0x23DDDCu) { return; }
    }
    ctx->pc = 0x23DDDCu;
label_23dddc:
    // 0x23dddc: 0x0  nop
    ctx->pc = 0x23dddcu;
    // NOP
    // 0x23dde0: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23dde4: 0x240213aa  addiu       $v0, $zero, 0x13AA
    ctx->pc = 0x23dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5034));
    // 0x23dde8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23dde8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23ddec: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x23ddecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23ddf0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23ddf4: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23DDF4u;
    {
        const bool branch_taken_0x23ddf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23ddf4) {
            ctx->pc = 0x23DE34u;
            goto label_23de34;
        }
    }
    ctx->pc = 0x23DDFCu;
    // 0x23ddfc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x23ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x23de00: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DE00u;
    {
        const bool branch_taken_0x23de00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23de00) {
            ctx->pc = 0x23DE20u;
            goto label_23de20;
        }
    }
    ctx->pc = 0x23DE08u;
    // 0x23de08: 0x27a401b8  addiu       $a0, $sp, 0x1B8
    ctx->pc = 0x23de08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x23de0c: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23de0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23de10: 0xc094400  jal         func_251000
    ctx->pc = 0x23DE10u;
    SET_GPR_U32(ctx, 31, 0x23DE18u);
    ctx->pc = 0x23DE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DE10u;
            // 0x23de14: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DE18u; }
        if (ctx->pc != 0x23DE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DE18u; }
        if (ctx->pc != 0x23DE18u) { return; }
    }
    ctx->pc = 0x23DE18u;
label_23de18:
    // 0x23de18: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x23DE18u;
    {
        const bool branch_taken_0x23de18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23de18) {
            ctx->pc = 0x23DFBCu;
            goto label_23dfbc;
        }
    }
    ctx->pc = 0x23DE20u;
label_23de20:
    // 0x23de20: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x23de20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x23de24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23de24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23de28: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x23DE28u;
    {
        const bool branch_taken_0x23de28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23DE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DE28u;
            // 0x23de2c: 0x240213ab  addiu       $v0, $zero, 0x13AB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5035));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de28) {
            ctx->pc = 0x23DE34u;
            goto label_23de34;
        }
    }
    ctx->pc = 0x23DE30u;
    // 0x23de30: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x23de30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_23de34:
    // 0x23de34: 0x0  nop
    ctx->pc = 0x23de34u;
    // NOP
    // 0x23de38: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23de38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23de3c: 0x240213b3  addiu       $v0, $zero, 0x13B3
    ctx->pc = 0x23de3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5043));
    // 0x23de40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23de40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23de44: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x23de44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23de48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23de48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23de4c: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x23DE4Cu;
    {
        const bool branch_taken_0x23de4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23de4c) {
            ctx->pc = 0x23DEDCu;
            goto label_23dedc;
        }
    }
    ctx->pc = 0x23DE54u;
    // 0x23de54: 0xc08ca88  jal         func_232A20
    ctx->pc = 0x23DE54u;
    SET_GPR_U32(ctx, 31, 0x23DE5Cu);
    ctx->pc = 0x232A20u;
    if (runtime->hasFunction(0x232A20u)) {
        auto targetFn = runtime->lookupFunction(0x232A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DE5Cu; }
        if (ctx->pc != 0x23DE5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuLoopType__Fv_0x232a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DE5Cu; }
        if (ctx->pc != 0x23DE5Cu) { return; }
    }
    ctx->pc = 0x23DE5Cu;
label_23de5c:
    // 0x23de5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DE5Cu;
    {
        const bool branch_taken_0x23de5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23de5c) {
            ctx->pc = 0x23DE7Cu;
            goto label_23de7c;
        }
    }
    ctx->pc = 0x23DE64u;
    // 0x23de64: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23de64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23de68: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x23de68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x23de6c: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23de6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23de70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23de70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23de74: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23de74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23de78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23de78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23de7c:
    // 0x23de7c: 0x0  nop
    ctx->pc = 0x23de7cu;
    // NOP
    // 0x23de80: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x23de80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x23de84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23de84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23de88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23DE88u;
    {
        const bool branch_taken_0x23de88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23de88) {
            ctx->pc = 0x23DE98u;
            goto label_23de98;
        }
    }
    ctx->pc = 0x23DE90u;
    // 0x23de90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DE90u;
    {
        const bool branch_taken_0x23de90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23de90) {
            ctx->pc = 0x23DEB0u;
            goto label_23deb0;
        }
    }
    ctx->pc = 0x23DE98u;
label_23de98:
    // 0x23de98: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x23de98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x23de9c: 0x34432020  ori         $v1, $v0, 0x2020
    ctx->pc = 0x23de9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x23dea0: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23dea4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23dea8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23dea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23deac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23deacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23deb0:
    // 0x23deb0: 0xc0676e0  jal         func_19DB80
    ctx->pc = 0x23DEB0u;
    SET_GPR_U32(ctx, 31, 0x23DEB8u);
    ctx->pc = 0x23DEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DEB0u;
            // 0x23deb4: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19DB80u;
    if (runtime->hasFunction(0x19DB80u)) {
        auto targetFn = runtime->lookupFunction(0x19DB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DEB8u; }
        if (ctx->pc != 0x23DEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNumStackOverBoard__16CUserDataManagerFv_0x19db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DEB8u; }
        if (ctx->pc != 0x23DEB8u) { return; }
    }
    ctx->pc = 0x23DEB8u;
label_23deb8:
    // 0x23deb8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x23deb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23debc: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DEBCu;
    {
        const bool branch_taken_0x23debc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23debc) {
            ctx->pc = 0x23DEDCu;
            goto label_23dedc;
        }
    }
    ctx->pc = 0x23DEC4u;
    // 0x23dec4: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23dec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23dec8: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x23dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x23decc: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23deccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23ded0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23ded4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23ded8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23ded8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23dedc:
    // 0x23dedc: 0x0  nop
    ctx->pc = 0x23dedcu;
    // NOP
    // 0x23dee0: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23dee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23dee4: 0x240213b4  addiu       $v0, $zero, 0x13B4
    ctx->pc = 0x23dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5044));
    // 0x23dee8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23dee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23deec: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x23deecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23def0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23def0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23def4: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x23DEF4u;
    {
        const bool branch_taken_0x23def4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23def4) {
            ctx->pc = 0x23DF70u;
            goto label_23df70;
        }
    }
    ctx->pc = 0x23DEFCu;
    // 0x23defc: 0xc08ca88  jal         func_232A20
    ctx->pc = 0x23DEFCu;
    SET_GPR_U32(ctx, 31, 0x23DF04u);
    ctx->pc = 0x232A20u;
    if (runtime->hasFunction(0x232A20u)) {
        auto targetFn = runtime->lookupFunction(0x232A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DF04u; }
        if (ctx->pc != 0x23DF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuLoopType__Fv_0x232a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DF04u; }
        if (ctx->pc != 0x23DF04u) { return; }
    }
    ctx->pc = 0x23DF04u;
label_23df04:
    // 0x23df04: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23DF04u;
    {
        const bool branch_taken_0x23df04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23df04) {
            ctx->pc = 0x23DF28u;
            goto label_23df28;
        }
    }
    ctx->pc = 0x23DF0Cu;
    // 0x23df0c: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23df10: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x23df10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x23df14: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23df14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23df18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23df18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23df1c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23df20: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x23DF20u;
    {
        const bool branch_taken_0x23df20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DF20u;
            // 0x23df24: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df20) {
            ctx->pc = 0x23DF70u;
            goto label_23df70;
        }
    }
    ctx->pc = 0x23DF28u;
label_23df28:
    // 0x23df28: 0xc08caa8  jal         func_232AA0
    ctx->pc = 0x23DF28u;
    SET_GPR_U32(ctx, 31, 0x23DF30u);
    ctx->pc = 0x232AA0u;
    if (runtime->hasFunction(0x232AA0u)) {
        auto targetFn = runtime->lookupFunction(0x232AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DF30u; }
        if (ctx->pc != 0x23DF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_GetBattleAreaScene__Fv_0x232aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DF30u; }
        if (ctx->pc != 0x23DF30u) { return; }
    }
    ctx->pc = 0x23DF30u;
label_23df30:
    // 0x23df30: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23DF30u;
    {
        const bool branch_taken_0x23df30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23df30) {
            ctx->pc = 0x23DF70u;
            goto label_23df70;
        }
    }
    ctx->pc = 0x23DF38u;
    // 0x23df38: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x23df38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23df3c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x23df3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x23df40: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x23DF40u;
    {
        const bool branch_taken_0x23df40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DF40u;
            // 0x23df44: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df40) {
            ctx->pc = 0x23DF70u;
            goto label_23df70;
        }
    }
    ctx->pc = 0x23DF48u;
    // 0x23df48: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23DF48u;
    {
        const bool branch_taken_0x23df48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DF48u;
            // 0x23df4c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df48) {
            ctx->pc = 0x23DF70u;
            goto label_23df70;
        }
    }
    ctx->pc = 0x23DF50u;
    // 0x23df50: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23DF50u;
    {
        const bool branch_taken_0x23df50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23df50) {
            ctx->pc = 0x23DF70u;
            goto label_23df70;
        }
    }
    ctx->pc = 0x23DF58u;
    // 0x23df58: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23df58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23df5c: 0x3c038020  lui         $v1, 0x8020
    ctx->pc = 0x23df5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32800 << 16));
    // 0x23df60: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x23df60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x23df64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23df64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23df68: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x23df68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x23df6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x23df6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_23df70:
    // 0x23df70: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x23df70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23df74: 0x240213b5  addiu       $v0, $zero, 0x13B5
    ctx->pc = 0x23df74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5045));
    // 0x23df78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23df78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23df7c: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x23df7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x23df80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23df80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23df84: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23DF84u;
    {
        const bool branch_taken_0x23df84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23df84) {
            ctx->pc = 0x23DFACu;
            goto label_23dfac;
        }
    }
    ctx->pc = 0x23DF8Cu;
    // 0x23df8c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x23df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x23df90: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23DF90u;
    {
        const bool branch_taken_0x23df90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DF90u;
            // 0x23df94: 0x27a401b8  addiu       $a0, $sp, 0x1B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23df90) {
            ctx->pc = 0x23DFACu;
            goto label_23dfac;
        }
    }
    ctx->pc = 0x23DF98u;
    // 0x23df98: 0x27a501b4  addiu       $a1, $sp, 0x1B4
    ctx->pc = 0x23df98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x23df9c: 0xc094400  jal         func_251000
    ctx->pc = 0x23DF9Cu;
    SET_GPR_U32(ctx, 31, 0x23DFA4u);
    ctx->pc = 0x23DFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DF9Cu;
            // 0x23dfa0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251000u;
    if (runtime->hasFunction(0x251000u)) {
        auto targetFn = runtime->lookupFunction(0x251000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DFA4u; }
        if (ctx->pc != 0x23DFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        local_sort1__FRiPiPi_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DFA4u; }
        if (ctx->pc != 0x23DFA4u) { return; }
    }
    ctx->pc = 0x23DFA4u;
label_23dfa4:
    // 0x23dfa4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23DFA4u;
    {
        const bool branch_taken_0x23dfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dfa4) {
            ctx->pc = 0x23DFBCu;
            goto label_23dfbc;
        }
    }
    ctx->pc = 0x23DFACu;
label_23dfac:
    // 0x23dfac: 0x0  nop
    ctx->pc = 0x23dfacu;
    // NOP
    // 0x23dfb0: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x23dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23dfb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23dfb8: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x23dfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
label_23dfbc:
    // 0x23dfbc: 0x0  nop
    ctx->pc = 0x23dfbcu;
    // NOP
    // 0x23dfc0: 0x8fa401b8  lw          $a0, 0x1B8($sp)
    ctx->pc = 0x23dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x23dfc4: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x23dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x23dfc8: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x23dfc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23dfcc: 0x1460fccd  bnez        $v1, . + 4 + (-0x333 << 2)
    ctx->pc = 0x23DFCCu;
    {
        const bool branch_taken_0x23dfcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DFCCu;
            // 0x23dfd0: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23dfcc) {
            ctx->pc = 0x23D304u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23d304;
        }
    }
    ctx->pc = 0x23DFD4u;
    // 0x23dfd4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x23dfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23dfd8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x23dfd8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23dfdc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x23dfdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23dfe0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x23dfe0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23dfe4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23dfe4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23dfe8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23dfe8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23dfec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23dfecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23dff0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23dff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23dff4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23dff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23dff8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23dff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23dffc: 0x3e00008  jr          $ra
    ctx->pc = 0x23DFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23E000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DFFCu;
            // 0x23e000: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23E004u;
}
