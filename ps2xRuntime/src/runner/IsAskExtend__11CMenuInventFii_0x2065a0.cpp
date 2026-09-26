#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsAskExtend__11CMenuInventFii
// Address: 0x2065a0 - 0x206ddc
void IsAskExtend__11CMenuInventFii_0x2065a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsAskExtend__11CMenuInventFii_0x2065a0");
#endif

    switch (ctx->pc) {
        case 0x206638u: goto label_206638;
        case 0x206660u: goto label_206660;
        case 0x2066c4u: goto label_2066c4;
        case 0x2066dcu: goto label_2066dc;
        case 0x20672cu: goto label_20672c;
        case 0x206754u: goto label_206754;
        case 0x20676cu: goto label_20676c;
        case 0x2067d0u: goto label_2067d0;
        case 0x2067e4u: goto label_2067e4;
        case 0x2067f8u: goto label_2067f8;
        case 0x206820u: goto label_206820;
        case 0x206834u: goto label_206834;
        case 0x20685cu: goto label_20685c;
        case 0x206870u: goto label_206870;
        case 0x206888u: goto label_206888;
        case 0x206890u: goto label_206890;
        case 0x2068a4u: goto label_2068a4;
        case 0x2068bcu: goto label_2068bc;
        case 0x2068c4u: goto label_2068c4;
        case 0x2068d8u: goto label_2068d8;
        case 0x2068e4u: goto label_2068e4;
        case 0x206908u: goto label_206908;
        case 0x20692cu: goto label_20692c;
        case 0x20694cu: goto label_20694c;
        case 0x206980u: goto label_206980;
        case 0x206994u: goto label_206994;
        case 0x2069a8u: goto label_2069a8;
        case 0x2069b0u: goto label_2069b0;
        case 0x2069ecu: goto label_2069ec;
        case 0x206a00u: goto label_206a00;
        case 0x206a2cu: goto label_206a2c;
        case 0x206a4cu: goto label_206a4c;
        case 0x206a68u: goto label_206a68;
        case 0x206a98u: goto label_206a98;
        case 0x206aa8u: goto label_206aa8;
        case 0x206ac0u: goto label_206ac0;
        case 0x206ad4u: goto label_206ad4;
        case 0x206af0u: goto label_206af0;
        case 0x206b04u: goto label_206b04;
        case 0x206b24u: goto label_206b24;
        case 0x206b38u: goto label_206b38;
        case 0x206b64u: goto label_206b64;
        case 0x206b7cu: goto label_206b7c;
        case 0x206b98u: goto label_206b98;
        case 0x206bccu: goto label_206bcc;
        case 0x206be0u: goto label_206be0;
        case 0x206bf4u: goto label_206bf4;
        case 0x206c10u: goto label_206c10;
        case 0x206c28u: goto label_206c28;
        case 0x206c48u: goto label_206c48;
        case 0x206c54u: goto label_206c54;
        case 0x206c68u: goto label_206c68;
        case 0x206c84u: goto label_206c84;
        case 0x206c9cu: goto label_206c9c;
        case 0x206cccu: goto label_206ccc;
        case 0x206d00u: goto label_206d00;
        case 0x206d0cu: goto label_206d0c;
        case 0x206d14u: goto label_206d14;
        case 0x206d3cu: goto label_206d3c;
        case 0x206d5cu: goto label_206d5c;
        case 0x206d68u: goto label_206d68;
        case 0x206d7cu: goto label_206d7c;
        case 0x206d94u: goto label_206d94;
        case 0x206dacu: goto label_206dac;
        default: break;
    }

    ctx->pc = 0x2065a0u;

    // 0x2065a0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x2065a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x2065a4: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x2065a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x2065a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2065a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2065ac: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x2065acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x2065b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2065b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2065b4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2065b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2065b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2065b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2065bc: 0x24a5cb30  addiu       $a1, $a1, -0x34D0
    ctx->pc = 0x2065bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953776));
    // 0x2065c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2065c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2065c4: 0x2463ca40  addiu       $v1, $v1, -0x35C0
    ctx->pc = 0x2065c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953536));
    // 0x2065c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2065c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2065cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2065ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2065d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2065d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2065d4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2065d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2065d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2065d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2065dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2065dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2065e0: 0x8c31cb44  lw          $s1, -0x34BC($at)
    ctx->pc = 0x2065e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953796)));
    // 0x2065e4: 0x8486005a  lh          $a2, 0x5A($a0)
    ctx->pc = 0x2065e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 90)));
    // 0x2065e8: 0x848200c8  lh          $v0, 0xC8($a0)
    ctx->pc = 0x2065e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x2065ec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2065ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2065f0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x2065f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2065f4: 0x8c32ca54  lw          $s2, -0x35AC($at)
    ctx->pc = 0x2065f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953556)));
    // 0x2065f8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2065f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2065fc: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2065fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x206600: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x206600u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x206604: 0x8c760000  lw          $s6, 0x0($v1)
    ctx->pc = 0x206604u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206608: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x206608u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x20660c: 0x102001e8  beqz        $at, . + 4 + (0x1E8 << 2)
    ctx->pc = 0x20660Cu;
    {
        const bool branch_taken_0x20660c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x206610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20660Cu;
            // 0x206610: 0x26950058  addiu       $s5, $s4, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20660c) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206614u;
    // 0x206614: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x206614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x206618: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x206618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20661c: 0x24639970  addiu       $v1, $v1, -0x6690
    ctx->pc = 0x20661cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941040));
    // 0x206620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206624: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x206624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206628: 0x400008  jr          $v0
    ctx->pc = 0x206628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206630u: goto label_206630;
            case 0x20691Cu: goto label_20691c;
            case 0x206938u: goto label_206938;
            case 0x206A54u: goto label_206a54;
            case 0x206B84u: goto label_206b84;
            case 0x206CA4u: goto label_206ca4;
            case 0x206DB0u: goto label_206db0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206630u;
label_206630:
    // 0x206630: 0xc0875fc  jal         func_21D7F0
    ctx->pc = 0x206630u;
    SET_GPR_U32(ctx, 31, 0x206638u);
    ctx->pc = 0x206634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206630u;
            // 0x206634: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D7F0u;
    if (runtime->hasFunction(0x21D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x21D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206638u; }
        if (ctx->pc != 0x206638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommandMsgCursor__7CDC2MesFv_0x21d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206638u; }
        if (ctx->pc != 0x206638u) { return; }
    }
    ctx->pc = 0x206638u;
label_206638:
    // 0x206638: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x206638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x20663c: 0x106000ab  beqz        $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x20663Cu;
    {
        const bool branch_taken_0x20663c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x206640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20663Cu;
            // 0x206640: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20663c) {
            ctx->pc = 0x2068ECu;
            goto label_2068ec;
        }
    }
    ctx->pc = 0x206644u;
    // 0x206644: 0x762021  addu        $a0, $v1, $s6
    ctx->pc = 0x206644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x206648: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x206648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20664c: 0x8c831c84  lw          $v1, 0x1C84($a0)
    ctx->pc = 0x20664cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7300)));
    // 0x206650: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206650u;
    {
        const bool branch_taken_0x206650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x206650) {
            ctx->pc = 0x206668u;
            goto label_206668;
        }
    }
    ctx->pc = 0x206658u;
    // 0x206658: 0xc094274  jal         func_2509D0
    ctx->pc = 0x206658u;
    SET_GPR_U32(ctx, 31, 0x206660u);
    ctx->pc = 0x20665Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206658u;
            // 0x20665c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206660u; }
        if (ctx->pc != 0x206660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206660u; }
        if (ctx->pc != 0x206660u) { return; }
    }
    ctx->pc = 0x206660u;
label_206660:
    // 0x206660: 0x100001d4  b           . + 4 + (0x1D4 << 2)
    ctx->pc = 0x206660u;
    {
        const bool branch_taken_0x206660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206660u;
            // 0x206664: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206660) {
            ctx->pc = 0x206DB4u;
            goto label_206db4;
        }
    }
    ctx->pc = 0x206668u;
label_206668:
    // 0x206668: 0x8c831a04  lw          $v1, 0x1A04($a0)
    ctx->pc = 0x206668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6660)));
    // 0x20666c: 0x27828200  addiu       $v0, $gp, -0x7E00
    ctx->pc = 0x20666cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935040));
    // 0x206670: 0x2463eae8  addiu       $v1, $v1, -0x1518
    ctx->pc = 0x206670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961896));
    // 0x206674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206678: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x206678u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20667c: 0xa6a20070  sh          $v0, 0x70($s5)
    ctx->pc = 0x20667cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 112), (uint16_t)GPR_U32(ctx, 2));
    // 0x206680: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x206680u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x206684: 0x86a20070  lh          $v0, 0x70($s5)
    ctx->pc = 0x206684u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x206688: 0x2c410008  sltiu       $at, $v0, 0x8
    ctx->pc = 0x206688u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x20668c: 0x10200092  beqz        $at, . + 4 + (0x92 << 2)
    ctx->pc = 0x20668Cu;
    {
        const bool branch_taken_0x20668c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x206690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20668Cu;
            // 0x206690: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20668c) {
            ctx->pc = 0x2068D8u;
            goto label_2068d8;
        }
    }
    ctx->pc = 0x206694u;
    // 0x206694: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x206694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x206698: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x206698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20669c: 0x24639950  addiu       $v1, $v1, -0x66B0
    ctx->pc = 0x20669cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941008));
    // 0x2066a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2066a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2066a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2066a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2066a8: 0x400008  jr          $v0
    ctx->pc = 0x2066A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2066B0u: goto label_2066b0;
            case 0x2066E8u: goto label_2066e8;
            case 0x2067C0u: goto label_2067c0;
            case 0x206800u: goto label_206800;
            case 0x20683Cu: goto label_20683c;
            case 0x206878u: goto label_206878;
            case 0x2068ACu: goto label_2068ac;
            case 0x2068D8u: goto label_2068d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2066B0u;
label_2066b0:
    // 0x2066b0: 0x8e860124  lw          $a2, 0x124($s4)
    ctx->pc = 0x2066b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x2066b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2066b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2066b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066bc: 0xc080624  jal         func_201890
    ctx->pc = 0x2066BCu;
    SET_GPR_U32(ctx, 31, 0x2066C4u);
    ctx->pc = 0x2066C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2066BCu;
            // 0x2066c0: 0x24120005  addiu       $s2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201890u;
    if (runtime->hasFunction(0x201890u)) {
        auto targetFn = runtime->lookupFunction(0x201890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2066C4u; }
        if (ctx->pc != 0x2066C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNetaCircle__11CMenuInventFii_0x201890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2066C4u; }
        if (ctx->pc != 0x2066C4u) { return; }
    }
    ctx->pc = 0x2066C4u;
label_2066c4:
    // 0x2066c4: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2066C4u;
    {
        const bool branch_taken_0x2066c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2066C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2066C4u;
            // 0x2066c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066c4) {
            ctx->pc = 0x2066D0u;
            goto label_2066d0;
        }
    }
    ctx->pc = 0x2066CCu;
    // 0x2066cc: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x2066ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2066d0:
    // 0x2066d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2066d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066d4: 0xc08e87c  jal         func_23A1F0
    ctx->pc = 0x2066D4u;
    SET_GPR_U32(ctx, 31, 0x2066DCu);
    ctx->pc = 0x2066D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2066D4u;
            // 0x2066d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A1F0u;
    if (runtime->hasFunction(0x23A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x23A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2066DCu; }
        if (ctx->pc != 0x2066DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm_0x23a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2066DCu; }
        if (ctx->pc != 0x2066DCu) { return; }
    }
    ctx->pc = 0x2066DCu;
label_2066dc:
    // 0x2066dc: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x2066dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2066e0: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2066E0u;
    {
        const bool branch_taken_0x2066e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2066E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2066E0u;
            // 0x2066e4: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066e0) {
            ctx->pc = 0x2068D8u;
            goto label_2068d8;
        }
    }
    ctx->pc = 0x2066E8u;
label_2066e8:
    // 0x2066e8: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x2066e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2066ec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2066ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2066f0: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2066F0u;
    {
        const bool branch_taken_0x2066f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2066F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2066F0u;
            // 0x2066f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066f0) {
            ctx->pc = 0x206734u;
            goto label_206734;
        }
    }
    ctx->pc = 0x2066F8u;
    // 0x2066f8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2066f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2066fc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2066FCu;
    {
        const bool branch_taken_0x2066fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x206700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2066FCu;
            // 0x206700: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066fc) {
            ctx->pc = 0x20671Cu;
            goto label_20671c;
        }
    }
    ctx->pc = 0x206704u;
    // 0x206704: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x206704u;
    {
        const bool branch_taken_0x206704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x206704) {
            ctx->pc = 0x20671Cu;
            goto label_20671c;
        }
    }
    ctx->pc = 0x20670Cu;
    // 0x20670c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20670Cu;
    {
        const bool branch_taken_0x20670c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20670c) {
            ctx->pc = 0x20671Cu;
            goto label_20671c;
        }
    }
    ctx->pc = 0x206714u;
    // 0x206714: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x206714u;
    {
        const bool branch_taken_0x206714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206714u;
            // 0x206718: 0x8e820f28  lw          $v0, 0xF28($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206714) {
            ctx->pc = 0x206790u;
            goto label_206790;
        }
    }
    ctx->pc = 0x20671Cu;
label_20671c:
    // 0x20671c: 0x8e850124  lw          $a1, 0x124($s4)
    ctx->pc = 0x20671cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x206720: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206724: 0xc082128  jal         func_2084A0
    ctx->pc = 0x206724u;
    SET_GPR_U32(ctx, 31, 0x20672Cu);
    ctx->pc = 0x206728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206724u;
            // 0x206728: 0x27a60170  addiu       $a2, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2084A0u;
    if (runtime->hasFunction(0x2084A0u)) {
        auto targetFn = runtime->lookupFunction(0x2084A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20672Cu; }
        if (ctx->pc != 0x20672Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNetaBoardCursorPosition__11CMenuInventFiPi_0x2084a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20672Cu; }
        if (ctx->pc != 0x20672Cu) { return; }
    }
    ctx->pc = 0x20672Cu;
label_20672c:
    // 0x20672c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x20672Cu;
    {
        const bool branch_taken_0x20672c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20672Cu;
            // 0x206730: 0x8e840124  lw          $a0, 0x124($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20672c) {
            ctx->pc = 0x20678Cu;
            goto label_20678c;
        }
    }
    ctx->pc = 0x206734u;
label_206734:
    // 0x206734: 0x8e820130  lw          $v0, 0x130($s4)
    ctx->pc = 0x206734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x206738: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x206738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x20673c: 0x8e83012c  lw          $v1, 0x12C($s4)
    ctx->pc = 0x20673cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x206740: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x206740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x206744: 0x24a596d8  addiu       $a1, $a1, -0x6928
    ctx->pc = 0x206744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940376));
    // 0x206748: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x206748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x20674c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x20674Cu;
    SET_GPR_U32(ctx, 31, 0x206754u);
    ctx->pc = 0x206750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20674Cu;
            // 0x206750: 0x623023  subu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206754u; }
        if (ctx->pc != 0x206754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206754u; }
        if (ctx->pc != 0x206754u) { return; }
    }
    ctx->pc = 0x206754u;
label_206754:
    // 0x206754: 0x8e840ee8  lw          $a0, 0xEE8($s4)
    ctx->pc = 0x206754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3816)));
    // 0x206758: 0x27b00174  addiu       $s0, $sp, 0x174
    ctx->pc = 0x206758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
    // 0x20675c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x20675cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x206760: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x206760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x206764: 0xc08974c  jal         func_225D30
    ctx->pc = 0x206764u;
    SET_GPR_U32(ctx, 31, 0x20676Cu);
    ctx->pc = 0x206768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206764u;
            // 0x206768: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20676Cu; }
        if (ctx->pc != 0x20676Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20676Cu; }
        if (ctx->pc != 0x20676Cu) { return; }
    }
    ctx->pc = 0x20676Cu;
label_20676c:
    // 0x20676c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x20676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x206770: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x206770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x206774: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x206774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x206778: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x206778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20677c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20677cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x206780: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x206780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x206784: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x206784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x206788: 0x24440032  addiu       $a0, $v0, 0x32
    ctx->pc = 0x206788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
label_20678c:
    // 0x20678c: 0x8e820f28  lw          $v0, 0xF28($s4)
    ctx->pc = 0x20678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3880)));
label_206790:
    // 0x206790: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206794: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x206794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
    // 0x206798: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x206798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20679c: 0x8e820f24  lw          $v0, 0xF24($s4)
    ctx->pc = 0x20679cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3876)));
    // 0x2067a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2067a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2067a4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2067a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2067a8: 0xc7a00174  lwc1        $f0, 0x174($sp)
    ctx->pc = 0x2067a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2067ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2067acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2067b0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2067b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2067b4: 0x8e820f24  lw          $v0, 0xF24($s4)
    ctx->pc = 0x2067b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3876)));
    // 0x2067b8: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x2067B8u;
    {
        const bool branch_taken_0x2067b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2067BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2067B8u;
            // 0x2067bc: 0xa0430001  sb          $v1, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2067b8) {
            ctx->pc = 0x2068D8u;
            goto label_2068d8;
        }
    }
    ctx->pc = 0x2067C0u;
label_2067c0:
    // 0x2067c0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2067c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2067c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2067c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2067c8: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2067C8u;
    SET_GPR_U32(ctx, 31, 0x2067D0u);
    ctx->pc = 0x2067CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2067C8u;
            // 0x2067cc: 0x24a59830  addiu       $a1, $a1, -0x67D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2067D0u; }
        if (ctx->pc != 0x2067D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2067D0u; }
        if (ctx->pc != 0x2067D0u) { return; }
    }
    ctx->pc = 0x2067D0u;
label_2067d0:
    // 0x2067d0: 0xdf829150  ld          $v0, -0x6EB0($gp)
    ctx->pc = 0x2067d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938960)));
    // 0x2067d4: 0x27a30178  addiu       $v1, $sp, 0x178
    ctx->pc = 0x2067d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x2067d8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2067d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2067dc: 0xc07fe48  jal         func_1FF920
    ctx->pc = 0x2067DCu;
    SET_GPR_U32(ctx, 31, 0x2067E4u);
    ctx->pc = 0x2067E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2067DCu;
            // 0x2067e0: 0x8f849140  lw          $a0, -0x6EC0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938944)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF920u;
    if (runtime->hasFunction(0x1FF920u)) {
        auto targetFn = runtime->lookupFunction(0x1FF920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2067E4u; }
        if (ctx->pc != 0x2067E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoName__FP17USER_PICTURE_INFO_0x1ff920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2067E4u; }
        if (ctx->pc != 0x2067E4u) { return; }
    }
    ctx->pc = 0x2067E4u;
label_2067e4:
    // 0x2067e4: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x2067e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x2067e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2067e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2067ec: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x2067ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x2067f0: 0xc087720  jal         func_21DC80
    ctx->pc = 0x2067F0u;
    SET_GPR_U32(ctx, 31, 0x2067F8u);
    ctx->pc = 0x2067F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2067F0u;
            // 0x2067f4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2067F8u; }
        if (ctx->pc != 0x2067F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2067F8u; }
        if (ctx->pc != 0x2067F8u) { return; }
    }
    ctx->pc = 0x2067F8u;
label_2067f8:
    // 0x2067f8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2067F8u;
    {
        const bool branch_taken_0x2067f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2067FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2067F8u;
            // 0x2067fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2067f8) {
            ctx->pc = 0x2068DCu;
            goto label_2068dc;
        }
    }
    ctx->pc = 0x206800u;
label_206800:
    // 0x206800: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x206800u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x206804: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x206804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x206808: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x206808u;
    {
        const bool branch_taken_0x206808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20680Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206808u;
            // 0x20680c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206808) {
            ctx->pc = 0x206828u;
            goto label_206828;
        }
    }
    ctx->pc = 0x206810u;
    // 0x206810: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x206810u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x206814: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206818: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x206818u;
    SET_GPR_U32(ctx, 31, 0x206820u);
    ctx->pc = 0x20681Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206818u;
            // 0x20681c: 0x24a59850  addiu       $a1, $a1, -0x67B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206820u; }
        if (ctx->pc != 0x206820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206820u; }
        if (ctx->pc != 0x206820u) { return; }
    }
    ctx->pc = 0x206820u;
label_206820:
    // 0x206820: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x206820u;
    {
        const bool branch_taken_0x206820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206820) {
            ctx->pc = 0x2068D8u;
            goto label_2068d8;
        }
    }
    ctx->pc = 0x206828u;
label_206828:
    // 0x206828: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20682c: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x20682Cu;
    SET_GPR_U32(ctx, 31, 0x206834u);
    ctx->pc = 0x206830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20682Cu;
            // 0x206830: 0x24a59870  addiu       $a1, $a1, -0x6790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206834u; }
        if (ctx->pc != 0x206834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206834u; }
        if (ctx->pc != 0x206834u) { return; }
    }
    ctx->pc = 0x206834u;
label_206834:
    // 0x206834: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x206834u;
    {
        const bool branch_taken_0x206834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206834) {
            ctx->pc = 0x2068D8u;
            goto label_2068d8;
        }
    }
    ctx->pc = 0x20683Cu;
label_20683c:
    // 0x20683c: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x20683cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x206840: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x206840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x206844: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x206844u;
    {
        const bool branch_taken_0x206844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x206848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206844u;
            // 0x206848: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206844) {
            ctx->pc = 0x206864u;
            goto label_206864;
        }
    }
    ctx->pc = 0x20684Cu;
    // 0x20684c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20684cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x206850: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206854: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x206854u;
    SET_GPR_U32(ctx, 31, 0x20685Cu);
    ctx->pc = 0x206858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206854u;
            // 0x206858: 0x24a59890  addiu       $a1, $a1, -0x6770 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20685Cu; }
        if (ctx->pc != 0x20685Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20685Cu; }
        if (ctx->pc != 0x20685Cu) { return; }
    }
    ctx->pc = 0x20685Cu;
label_20685c:
    // 0x20685c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x20685Cu;
    {
        const bool branch_taken_0x20685c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20685c) {
            ctx->pc = 0x2068D8u;
            goto label_2068d8;
        }
    }
    ctx->pc = 0x206864u;
label_206864:
    // 0x206864: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206868: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x206868u;
    SET_GPR_U32(ctx, 31, 0x206870u);
    ctx->pc = 0x20686Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206868u;
            // 0x20686c: 0x24a598b0  addiu       $a1, $a1, -0x6750 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206870u; }
        if (ctx->pc != 0x206870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206870u; }
        if (ctx->pc != 0x206870u) { return; }
    }
    ctx->pc = 0x206870u;
label_206870:
    // 0x206870: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x206870u;
    {
        const bool branch_taken_0x206870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206870) {
            ctx->pc = 0x2068D8u;
            goto label_2068d8;
        }
    }
    ctx->pc = 0x206878u;
label_206878:
    // 0x206878: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x206878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x20687c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20687cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206880: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x206880u;
    SET_GPR_U32(ctx, 31, 0x206888u);
    ctx->pc = 0x206884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206880u;
            // 0x206884: 0x24a598c8  addiu       $a1, $a1, -0x6738 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206888u; }
        if (ctx->pc != 0x206888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206888u; }
        if (ctx->pc != 0x206888u) { return; }
    }
    ctx->pc = 0x206888u;
label_206888:
    // 0x206888: 0xc07fe48  jal         func_1FF920
    ctx->pc = 0x206888u;
    SET_GPR_U32(ctx, 31, 0x206890u);
    ctx->pc = 0x20688Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206888u;
            // 0x20688c: 0x8f849140  lw          $a0, -0x6EC0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938944)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF920u;
    if (runtime->hasFunction(0x1FF920u)) {
        auto targetFn = runtime->lookupFunction(0x1FF920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206890u; }
        if (ctx->pc != 0x206890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoName__FP17USER_PICTURE_INFO_0x1ff920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206890u; }
        if (ctx->pc != 0x206890u) { return; }
    }
    ctx->pc = 0x206890u;
label_206890:
    // 0x206890: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x206890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x206894: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206898: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x206898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x20689c: 0xc087720  jal         func_21DC80
    ctx->pc = 0x20689Cu;
    SET_GPR_U32(ctx, 31, 0x2068A4u);
    ctx->pc = 0x2068A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20689Cu;
            // 0x2068a0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2068A4u; }
        if (ctx->pc != 0x2068A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2068A4u; }
        if (ctx->pc != 0x2068A4u) { return; }
    }
    ctx->pc = 0x2068A4u;
label_2068a4:
    // 0x2068a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2068A4u;
    {
        const bool branch_taken_0x2068a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2068a4) {
            ctx->pc = 0x2068D8u;
            goto label_2068d8;
        }
    }
    ctx->pc = 0x2068ACu;
label_2068ac:
    // 0x2068ac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2068acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2068b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2068b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2068b4: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x2068B4u;
    SET_GPR_U32(ctx, 31, 0x2068BCu);
    ctx->pc = 0x2068B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2068B4u;
            // 0x2068b8: 0x24a598d8  addiu       $a1, $a1, -0x6728 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2068BCu; }
        if (ctx->pc != 0x2068BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2068BCu; }
        if (ctx->pc != 0x2068BCu) { return; }
    }
    ctx->pc = 0x2068BCu;
label_2068bc:
    // 0x2068bc: 0xc07fe48  jal         func_1FF920
    ctx->pc = 0x2068BCu;
    SET_GPR_U32(ctx, 31, 0x2068C4u);
    ctx->pc = 0x2068C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2068BCu;
            // 0x2068c0: 0x8f849140  lw          $a0, -0x6EC0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938944)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF920u;
    if (runtime->hasFunction(0x1FF920u)) {
        auto targetFn = runtime->lookupFunction(0x1FF920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2068C4u; }
        if (ctx->pc != 0x2068C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoName__FP17USER_PICTURE_INFO_0x1ff920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2068C4u; }
        if (ctx->pc != 0x2068C4u) { return; }
    }
    ctx->pc = 0x2068C4u;
label_2068c4:
    // 0x2068c4: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x2068c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x2068c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2068c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2068cc: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x2068ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x2068d0: 0xc087720  jal         func_21DC80
    ctx->pc = 0x2068D0u;
    SET_GPR_U32(ctx, 31, 0x2068D8u);
    ctx->pc = 0x2068D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2068D0u;
            // 0x2068d4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2068D8u; }
        if (ctx->pc != 0x2068D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2068D8u; }
        if (ctx->pc != 0x2068D8u) { return; }
    }
    ctx->pc = 0x2068D8u;
label_2068d8:
    // 0x2068d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2068d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2068dc:
    // 0x2068dc: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2068DCu;
    SET_GPR_U32(ctx, 31, 0x2068E4u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2068E4u; }
        if (ctx->pc != 0x2068E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2068E4u; }
        if (ctx->pc != 0x2068E4u) { return; }
    }
    ctx->pc = 0x2068E4u;
label_2068e4:
    // 0x2068e4: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x2068E4u;
    {
        const bool branch_taken_0x2068e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2068e4) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x2068ECu;
label_2068ec:
    // 0x2068ec: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x2068ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x2068f0: 0x1040012f  beqz        $v0, . + 4 + (0x12F << 2)
    ctx->pc = 0x2068F0u;
    {
        const bool branch_taken_0x2068f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2068F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2068F0u;
            // 0x2068f4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2068f0) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x2068F8u;
    // 0x2068f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2068f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2068fc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2068fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x206900: 0xc08e87c  jal         func_23A1F0
    ctx->pc = 0x206900u;
    SET_GPR_U32(ctx, 31, 0x206908u);
    ctx->pc = 0x206904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206900u;
            // 0x206904: 0xa2000001  sb          $zero, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A1F0u;
    if (runtime->hasFunction(0x23A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x23A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206908u; }
        if (ctx->pc != 0x206908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm_0x23a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206908u; }
        if (ctx->pc != 0x206908u) { return; }
    }
    ctx->pc = 0x206908u;
label_206908:
    // 0x206908: 0x8e820f24  lw          $v0, 0xF24($s4)
    ctx->pc = 0x206908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3876)));
    // 0x20690c: 0x10400128  beqz        $v0, . + 4 + (0x128 << 2)
    ctx->pc = 0x20690Cu;
    {
        const bool branch_taken_0x20690c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20690c) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206914u;
    // 0x206914: 0x10000126  b           . + 4 + (0x126 << 2)
    ctx->pc = 0x206914u;
    {
        const bool branch_taken_0x206914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206914u;
            // 0x206918: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206914) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x20691Cu;
label_20691c:
    // 0x20691c: 0x12600124  beqz        $s3, . + 4 + (0x124 << 2)
    ctx->pc = 0x20691Cu;
    {
        const bool branch_taken_0x20691c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x206920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20691Cu;
            // 0x206920: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20691c) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206924u;
    // 0x206924: 0xc094274  jal         func_2509D0
    ctx->pc = 0x206924u;
    SET_GPR_U32(ctx, 31, 0x20692Cu);
    ctx->pc = 0x206928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206924u;
            // 0x206928: 0xa6a00070  sh          $zero, 0x70($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 112), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20692Cu; }
        if (ctx->pc != 0x20692Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20692Cu; }
        if (ctx->pc != 0x20692Cu) { return; }
    }
    ctx->pc = 0x20692Cu;
label_20692c:
    // 0x20692c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206930: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x206930u;
    {
        const bool branch_taken_0x206930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206930u;
            // 0x206934: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206930) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206938u;
label_206938:
    // 0x206938: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x206938u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x20693c: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x20693Cu;
    {
        const bool branch_taken_0x20693c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20693Cu;
            // 0x206940: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20693c) {
            ctx->pc = 0x206A34u;
            goto label_206a34;
        }
    }
    ctx->pc = 0x206944u;
    // 0x206944: 0xc087630  jal         func_21D8C0
    ctx->pc = 0x206944u;
    SET_GPR_U32(ctx, 31, 0x20694Cu);
    ctx->pc = 0x206948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206944u;
            // 0x206948: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D8C0u;
    if (runtime->hasFunction(0x21D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20694Cu; }
        if (ctx->pc != 0x20694Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor__7CDC2MesFv_0x21d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20694Cu; }
        if (ctx->pc != 0x20694Cu) { return; }
    }
    ctx->pc = 0x20694Cu;
label_20694c:
    // 0x20694c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20694cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x206950: 0x12630033  beq         $s3, $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x206950u;
    {
        const bool branch_taken_0x206950 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x206954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206950u;
            // 0x206954: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206950) {
            ctx->pc = 0x206A20u;
            goto label_206a20;
        }
    }
    ctx->pc = 0x206958u;
    // 0x206958: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20695c: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20695Cu;
    {
        const bool branch_taken_0x20695c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x20695c) {
            ctx->pc = 0x20696Cu;
            goto label_20696c;
        }
    }
    ctx->pc = 0x206964u;
    // 0x206964: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x206964u;
    {
        const bool branch_taken_0x206964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206964) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x20696Cu;
label_20696c:
    // 0x20696c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x20696Cu;
    {
        const bool branch_taken_0x20696c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20696Cu;
            // 0x206970: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20696c) {
            ctx->pc = 0x206A1Cu;
            goto label_206a1c;
        }
    }
    ctx->pc = 0x206974u;
    // 0x206974: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206978: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x206978u;
    SET_GPR_U32(ctx, 31, 0x206980u);
    ctx->pc = 0x20697Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206978u;
            // 0x20697c: 0x24a598e8  addiu       $a1, $a1, -0x6718 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206980u; }
        if (ctx->pc != 0x206980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206980u; }
        if (ctx->pc != 0x206980u) { return; }
    }
    ctx->pc = 0x206980u;
label_206980:
    // 0x206980: 0xdf829158  ld          $v0, -0x6EA8($gp)
    ctx->pc = 0x206980u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294938968)));
    // 0x206984: 0x27a30180  addiu       $v1, $sp, 0x180
    ctx->pc = 0x206984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x206988: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x206988u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x20698c: 0xc07fe48  jal         func_1FF920
    ctx->pc = 0x20698Cu;
    SET_GPR_U32(ctx, 31, 0x206994u);
    ctx->pc = 0x206990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20698Cu;
            // 0x206990: 0x8f849140  lw          $a0, -0x6EC0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938944)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF920u;
    if (runtime->hasFunction(0x1FF920u)) {
        auto targetFn = runtime->lookupFunction(0x1FF920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206994u; }
        if (ctx->pc != 0x206994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoName__FP17USER_PICTURE_INFO_0x1ff920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206994u; }
        if (ctx->pc != 0x206994u) { return; }
    }
    ctx->pc = 0x206994u;
label_206994:
    // 0x206994: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x206994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
    // 0x206998: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x206998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20699c: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x20699cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x2069a0: 0xc087720  jal         func_21DC80
    ctx->pc = 0x2069A0u;
    SET_GPR_U32(ctx, 31, 0x2069A8u);
    ctx->pc = 0x2069A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2069A0u;
            // 0x2069a4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2069A8u; }
        if (ctx->pc != 0x2069A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2069A8u; }
        if (ctx->pc != 0x2069A8u) { return; }
    }
    ctx->pc = 0x2069A8u;
label_2069a8:
    // 0x2069a8: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2069A8u;
    SET_GPR_U32(ctx, 31, 0x2069B0u);
    ctx->pc = 0x2069ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2069A8u;
            // 0x2069ac: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2069B0u; }
        if (ctx->pc != 0x2069B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2069B0u; }
        if (ctx->pc != 0x2069B0u) { return; }
    }
    ctx->pc = 0x2069B0u;
label_2069b0:
    // 0x2069b0: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x2069b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2069b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2069b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2069b8: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2069B8u;
    {
        const bool branch_taken_0x2069b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2069BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2069B8u;
            // 0x2069bc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2069b8) {
            ctx->pc = 0x2069F4u;
            goto label_2069f4;
        }
    }
    ctx->pc = 0x2069C0u;
    // 0x2069c0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2069C0u;
    {
        const bool branch_taken_0x2069c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2069C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2069C0u;
            // 0x2069c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2069c0) {
            ctx->pc = 0x2069E0u;
            goto label_2069e0;
        }
    }
    ctx->pc = 0x2069C8u;
    // 0x2069c8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2069C8u;
    {
        const bool branch_taken_0x2069c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2069c8) {
            ctx->pc = 0x2069E0u;
            goto label_2069e0;
        }
    }
    ctx->pc = 0x2069D0u;
    // 0x2069d0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2069D0u;
    {
        const bool branch_taken_0x2069d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2069d0) {
            ctx->pc = 0x2069E0u;
            goto label_2069e0;
        }
    }
    ctx->pc = 0x2069D8u;
    // 0x2069d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2069D8u;
    {
        const bool branch_taken_0x2069d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2069DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2069D8u;
            // 0x2069dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2069d8) {
            ctx->pc = 0x206A14u;
            goto label_206a14;
        }
    }
    ctx->pc = 0x2069E0u;
label_2069e0:
    // 0x2069e0: 0x8e850124  lw          $a1, 0x124($s4)
    ctx->pc = 0x2069e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
    // 0x2069e4: 0xc07fadc  jal         func_1FEB70
    ctx->pc = 0x2069E4u;
    SET_GPR_U32(ctx, 31, 0x2069ECu);
    ctx->pc = 0x2069E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2069E4u;
            // 0x2069e8: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB70u;
    if (runtime->hasFunction(0x1FEB70u)) {
        auto targetFn = runtime->lookupFunction(0x1FEB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2069ECu; }
        if (ctx->pc != 0x2069ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeletePhotoData__15CInventUserDataFi_0x1feb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2069ECu; }
        if (ctx->pc != 0x2069ECu) { return; }
    }
    ctx->pc = 0x2069ECu;
label_2069ec:
    // 0x2069ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2069ECu;
    {
        const bool branch_taken_0x2069ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2069ec) {
            ctx->pc = 0x206A10u;
            goto label_206a10;
        }
    }
    ctx->pc = 0x2069F4u;
label_2069f4:
    // 0x2069f4: 0x8e85012c  lw          $a1, 0x12C($s4)
    ctx->pc = 0x2069f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x2069f8: 0xc07fa00  jal         func_1FE800
    ctx->pc = 0x2069F8u;
    SET_GPR_U32(ctx, 31, 0x206A00u);
    ctx->pc = 0x2069FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2069F8u;
            // 0x2069fc: 0x8f8490d8  lw          $a0, -0x6F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE800u;
    if (runtime->hasFunction(0x1FE800u)) {
        auto targetFn = runtime->lookupFunction(0x1FE800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206A00u; }
        if (ctx->pc != 0x206A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeletePhotoData__13CDC2AlbumDataFi_0x1fe800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206A00u; }
        if (ctx->pc != 0x206A00u) { return; }
    }
    ctx->pc = 0x206A00u;
label_206a00:
    // 0x206a00: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x206a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x206a04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x206a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206a08: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x206a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x206a0c: 0xa0430508  sb          $v1, 0x508($v0)
    ctx->pc = 0x206a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1288), (uint8_t)GPR_U32(ctx, 3));
label_206a10:
    // 0x206a10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206a14:
    // 0x206a14: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x206A14u;
    {
        const bool branch_taken_0x206a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206A14u;
            // 0x206a18: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a14) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206A1Cu;
label_206a1c:
    // 0x206a1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_206a20:
    // 0x206a20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x206a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206a24: 0xc08e87c  jal         func_23A1F0
    ctx->pc = 0x206A24u;
    SET_GPR_U32(ctx, 31, 0x206A2Cu);
    ctx->pc = 0x206A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206A24u;
            // 0x206a28: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A1F0u;
    if (runtime->hasFunction(0x23A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x23A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206A2Cu; }
        if (ctx->pc != 0x206A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm_0x23a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206A2Cu; }
        if (ctx->pc != 0x206A2Cu) { return; }
    }
    ctx->pc = 0x206A2Cu;
label_206a2c:
    // 0x206a2c: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x206A2Cu;
    {
        const bool branch_taken_0x206a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206A2Cu;
            // 0x206a30: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a2c) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206A34u;
label_206a34:
    // 0x206a34: 0x144500de  bne         $v0, $a1, . + 4 + (0xDE << 2)
    ctx->pc = 0x206A34u;
    {
        const bool branch_taken_0x206a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x206a34) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206A3Cu;
    // 0x206a3c: 0x126000dc  beqz        $s3, . + 4 + (0xDC << 2)
    ctx->pc = 0x206A3Cu;
    {
        const bool branch_taken_0x206a3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x206A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206A3Cu;
            // 0x206a40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a3c) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206A44u;
    // 0x206a44: 0xc08e87c  jal         func_23A1F0
    ctx->pc = 0x206A44u;
    SET_GPR_U32(ctx, 31, 0x206A4Cu);
    ctx->pc = 0x23A1F0u;
    if (runtime->hasFunction(0x23A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x23A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206A4Cu; }
        if (ctx->pc != 0x206A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm_0x23a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206A4Cu; }
        if (ctx->pc != 0x206A4Cu) { return; }
    }
    ctx->pc = 0x206A4Cu;
label_206a4c:
    // 0x206a4c: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x206A4Cu;
    {
        const bool branch_taken_0x206a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206A4Cu;
            // 0x206a50: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a4c) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206A54u;
label_206a54:
    // 0x206a54: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x206a54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x206a58: 0x144000d5  bnez        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x206A58u;
    {
        const bool branch_taken_0x206a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206A58u;
            // 0x206a5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a58) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206A60u;
    // 0x206a60: 0xc087630  jal         func_21D8C0
    ctx->pc = 0x206A60u;
    SET_GPR_U32(ctx, 31, 0x206A68u);
    ctx->pc = 0x21D8C0u;
    if (runtime->hasFunction(0x21D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206A68u; }
        if (ctx->pc != 0x206A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor__7CDC2MesFv_0x21d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206A68u; }
        if (ctx->pc != 0x206A68u) { return; }
    }
    ctx->pc = 0x206A68u;
label_206a68:
    // 0x206a68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x206a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x206a6c: 0x12630040  beq         $s3, $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x206A6Cu;
    {
        const bool branch_taken_0x206a6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x206A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206A6Cu;
            // 0x206a70: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a6c) {
            ctx->pc = 0x206B70u;
            goto label_206b70;
        }
    }
    ctx->pc = 0x206A74u;
    // 0x206a74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206a78: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x206A78u;
    {
        const bool branch_taken_0x206a78 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x206a78) {
            ctx->pc = 0x206A88u;
            goto label_206a88;
        }
    }
    ctx->pc = 0x206A80u;
    // 0x206a80: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x206A80u;
    {
        const bool branch_taken_0x206a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206a80) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206A88u;
label_206a88:
    // 0x206a88: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x206A88u;
    {
        const bool branch_taken_0x206a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206A88u;
            // 0x206a8c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206a88) {
            ctx->pc = 0x206B6Cu;
            goto label_206b6c;
        }
    }
    ctx->pc = 0x206A90u;
    // 0x206a90: 0xc094274  jal         func_2509D0
    ctx->pc = 0x206A90u;
    SET_GPR_U32(ctx, 31, 0x206A98u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206A98u; }
        if (ctx->pc != 0x206A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206A98u; }
        if (ctx->pc != 0x206A98u) { return; }
    }
    ctx->pc = 0x206A98u;
label_206a98:
    // 0x206a98: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x206a98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x206a9c: 0x8f859148  lw          $a1, -0x6EB8($gp)
    ctx->pc = 0x206a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938952)));
    // 0x206aa0: 0xc07f868  jal         func_1FE1A0
    ctx->pc = 0x206AA0u;
    SET_GPR_U32(ctx, 31, 0x206AA8u);
    ctx->pc = 0x206AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206AA0u;
            // 0x206aa4: 0x8f849140  lw          $a0, -0x6EC0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938944)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A0u;
    if (runtime->hasFunction(0x1FE1A0u)) {
        auto targetFn = runtime->lookupFunction(0x1FE1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206AA8u; }
        if (ctx->pc != 0x206AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy_USER_PICTURE_INFO__FP17USER_PICTURE_INFOP17USER_PICTURE_INFO_0x1fe1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206AA8u; }
        if (ctx->pc != 0x206AA8u) { return; }
    }
    ctx->pc = 0x206AA8u;
label_206aa8:
    // 0x206aa8: 0x8f839148  lw          $v1, -0x6EB8($gp)
    ctx->pc = 0x206aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938952)));
    // 0x206aac: 0x8f829140  lw          $v0, -0x6EC0($gp)
    ctx->pc = 0x206aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938944)));
    // 0x206ab0: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x206ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x206ab4: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x206ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x206ab8: 0xc049c18  jal         func_127060
    ctx->pc = 0x206AB8u;
    SET_GPR_U32(ctx, 31, 0x206AC0u);
    ctx->pc = 0x206ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206AB8u;
            // 0x206abc: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206AC0u; }
        if (ctx->pc != 0x206AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206AC0u; }
        if (ctx->pc != 0x206AC0u) { return; }
    }
    ctx->pc = 0x206AC0u;
label_206ac0:
    // 0x206ac0: 0x8f829148  lw          $v0, -0x6EB8($gp)
    ctx->pc = 0x206ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938952)));
    // 0x206ac4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206ac8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x206ac8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x206acc: 0xc07f85c  jal         func_1FE170
    ctx->pc = 0x206ACCu;
    SET_GPR_U32(ctx, 31, 0x206AD4u);
    ctx->pc = 0x206AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206ACCu;
            // 0x206ad0: 0x8f849140  lw          $a0, -0x6EC0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938944)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE170u;
    if (runtime->hasFunction(0x1FE170u)) {
        auto targetFn = runtime->lookupFunction(0x1FE170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206AD4u; }
        if (ctx->pc != 0x206AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init_USER_PICTURE_INFO__FP17USER_PICTURE_INFO_0x1fe170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206AD4u; }
        if (ctx->pc != 0x206AD4u) { return; }
    }
    ctx->pc = 0x206AD4u;
label_206ad4:
    // 0x206ad4: 0x86a30070  lh          $v1, 0x70($s5)
    ctx->pc = 0x206ad4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 112)));
    // 0x206ad8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x206ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x206adc: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x206ADCu;
    {
        const bool branch_taken_0x206adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x206adc) {
            ctx->pc = 0x206B18u;
            goto label_206b18;
        }
    }
    ctx->pc = 0x206AE4u;
    // 0x206ae4: 0x8f8490d8  lw          $a0, -0x6F28($gp)
    ctx->pc = 0x206ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
    // 0x206ae8: 0xc07fa10  jal         func_1FE840
    ctx->pc = 0x206AE8u;
    SET_GPR_U32(ctx, 31, 0x206AF0u);
    ctx->pc = 0x206AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206AE8u;
            // 0x206aec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE840u;
    if (runtime->hasFunction(0x1FE840u)) {
        auto targetFn = runtime->lookupFunction(0x1FE840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206AF0u; }
        if (ctx->pc != 0x206AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAlbumPhotoInfo__13CDC2AlbumDataFi_0x1fe840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206AF0u; }
        if (ctx->pc != 0x206AF0u) { return; }
    }
    ctx->pc = 0x206AF0u;
label_206af0:
    // 0x206af0: 0x8e840028  lw          $a0, 0x28($s4)
    ctx->pc = 0x206af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x206af4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x206af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206af8: 0x26850440  addiu       $a1, $s4, 0x440
    ctx->pc = 0x206af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1088));
    // 0x206afc: 0xc07f958  jal         func_1FE560
    ctx->pc = 0x206AFCu;
    SET_GPR_U32(ctx, 31, 0x206B04u);
    ctx->pc = 0x206B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206AFCu;
            // 0x206b00: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE560u;
    if (runtime->hasFunction(0x1FE560u)) {
        auto targetFn = runtime->lookupFunction(0x1FE560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B04u; }
        if (ctx->pc != 0x206B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachPictTex__FiPP10mgCTextureP17USER_PICTURE_INFOi_0x1fe560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B04u; }
        if (ctx->pc != 0x206B04u) { return; }
    }
    ctx->pc = 0x206B04u;
label_206b04:
    // 0x206b04: 0x8f82914c  lw          $v0, -0x6EB4($gp)
    ctx->pc = 0x206b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938956)));
    // 0x206b08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206b0c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x206b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x206b10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x206B10u;
    {
        const bool branch_taken_0x206b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206B10u;
            // 0x206b14: 0xa0430508  sb          $v1, 0x508($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1288), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b10) {
            ctx->pc = 0x206B48u;
            goto label_206b48;
        }
    }
    ctx->pc = 0x206B18u;
label_206b18:
    // 0x206b18: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x206b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
    // 0x206b1c: 0xc07faac  jal         func_1FEAB0
    ctx->pc = 0x206B1Cu;
    SET_GPR_U32(ctx, 31, 0x206B24u);
    ctx->pc = 0x206B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206B1Cu;
            // 0x206b20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B24u; }
        if (ctx->pc != 0x206B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B24u; }
        if (ctx->pc != 0x206B24u) { return; }
    }
    ctx->pc = 0x206B24u;
label_206b24:
    // 0x206b24: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x206b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x206b28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x206b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b2c: 0x268503c8  addiu       $a1, $s4, 0x3C8
    ctx->pc = 0x206b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 968));
    // 0x206b30: 0xc07f958  jal         func_1FE560
    ctx->pc = 0x206B30u;
    SET_GPR_U32(ctx, 31, 0x206B38u);
    ctx->pc = 0x206B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206B30u;
            // 0x206b34: 0x2407001e  addiu       $a3, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE560u;
    if (runtime->hasFunction(0x1FE560u)) {
        auto targetFn = runtime->lookupFunction(0x1FE560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B38u; }
        if (ctx->pc != 0x206B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachPictTex__FiPP10mgCTextureP17USER_PICTURE_INFOi_0x1fe560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B38u; }
        if (ctx->pc != 0x206B38u) { return; }
    }
    ctx->pc = 0x206B38u;
label_206b38:
    // 0x206b38: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x206b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x206b3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x206b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206b40: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x206b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x206b44: 0xa0430508  sb          $v1, 0x508($v0)
    ctx->pc = 0x206b44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1288), (uint8_t)GPR_U32(ctx, 3));
label_206b48:
    // 0x206b48: 0xa6a00070  sh          $zero, 0x70($s5)
    ctx->pc = 0x206b48u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x206b4c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x206b4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b50: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x206b50u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x206b54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b58: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x206b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x206b5c: 0xc08e87c  jal         func_23A1F0
    ctx->pc = 0x206B5Cu;
    SET_GPR_U32(ctx, 31, 0x206B64u);
    ctx->pc = 0x206B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206B5Cu;
            // 0x206b60: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A1F0u;
    if (runtime->hasFunction(0x23A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x23A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B64u; }
        if (ctx->pc != 0x206B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm_0x23a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B64u; }
        if (ctx->pc != 0x206B64u) { return; }
    }
    ctx->pc = 0x206B64u;
label_206b64:
    // 0x206b64: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x206B64u;
    {
        const bool branch_taken_0x206b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206B64u;
            // 0x206b68: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b64) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206B6Cu;
label_206b6c:
    // 0x206b6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_206b70:
    // 0x206b70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x206b70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b74: 0xc08e87c  jal         func_23A1F0
    ctx->pc = 0x206B74u;
    SET_GPR_U32(ctx, 31, 0x206B7Cu);
    ctx->pc = 0x206B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206B74u;
            // 0x206b78: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A1F0u;
    if (runtime->hasFunction(0x23A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x23A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B7Cu; }
        if (ctx->pc != 0x206B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm_0x23a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B7Cu; }
        if (ctx->pc != 0x206B7Cu) { return; }
    }
    ctx->pc = 0x206B7Cu;
label_206b7c:
    // 0x206b7c: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x206B7Cu;
    {
        const bool branch_taken_0x206b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206B7Cu;
            // 0x206b80: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b7c) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206B84u;
label_206b84:
    // 0x206b84: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x206b84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x206b88: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x206B88u;
    {
        const bool branch_taken_0x206b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206b88) {
            ctx->pc = 0x206C8Cu;
            goto label_206c8c;
        }
    }
    ctx->pc = 0x206B90u;
    // 0x206b90: 0xc087630  jal         func_21D8C0
    ctx->pc = 0x206B90u;
    SET_GPR_U32(ctx, 31, 0x206B98u);
    ctx->pc = 0x206B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206B90u;
            // 0x206b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D8C0u;
    if (runtime->hasFunction(0x21D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B98u; }
        if (ctx->pc != 0x206B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor__7CDC2MesFv_0x21d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B98u; }
        if (ctx->pc != 0x206B98u) { return; }
    }
    ctx->pc = 0x206B98u;
label_206b98:
    // 0x206b98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x206b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x206b9c: 0x12630036  beq         $s3, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x206B9Cu;
    {
        const bool branch_taken_0x206b9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x206BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206B9Cu;
            // 0x206ba0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206b9c) {
            ctx->pc = 0x206C78u;
            goto label_206c78;
        }
    }
    ctx->pc = 0x206BA4u;
    // 0x206ba4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206ba8: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x206BA8u;
    {
        const bool branch_taken_0x206ba8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x206ba8) {
            ctx->pc = 0x206BB8u;
            goto label_206bb8;
        }
    }
    ctx->pc = 0x206BB0u;
    // 0x206bb0: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x206BB0u;
    {
        const bool branch_taken_0x206bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206bb0) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206BB8u;
label_206bb8:
    // 0x206bb8: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x206BB8u;
    {
        const bool branch_taken_0x206bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206BB8u;
            // 0x206bbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206bb8) {
            ctx->pc = 0x206C74u;
            goto label_206c74;
        }
    }
    ctx->pc = 0x206BC0u;
    // 0x206bc0: 0x27a50188  addiu       $a1, $sp, 0x188
    ctx->pc = 0x206bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x206bc4: 0xc0805c8  jal         func_201720
    ctx->pc = 0x206BC4u;
    SET_GPR_U32(ctx, 31, 0x206BCCu);
    ctx->pc = 0x206BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206BC4u;
            // 0x206bc8: 0xafa00188  sw          $zero, 0x188($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (runtime->hasFunction(0x201720u)) {
        auto targetFn = runtime->lookupFunction(0x201720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206BCCu; }
        if (ctx->pc != 0x206BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfoFromMode__11CMenuInventFPi_0x201720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206BCCu; }
        if (ctx->pc != 0x206BCCu) { return; }
    }
    ctx->pc = 0x206BCCu;
label_206bcc:
    // 0x206bcc: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x206bccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x206bd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x206bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x206bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206bd8: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x206BD8u;
    SET_GPR_U32(ctx, 31, 0x206BE0u);
    ctx->pc = 0x206BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206BD8u;
            // 0x206bdc: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (runtime->hasFunction(0x1FE690u)) {
        auto targetFn = runtime->lookupFunction(0x1FE690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206BE0u; }
        if (ctx->pc != 0x206BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPhotoDataNoNeed__FP17USER_PICTURE_INFOiPi_0x1fe690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206BE0u; }
        if (ctx->pc != 0x206BE0u) { return; }
    }
    ctx->pc = 0x206BE0u;
label_206be0:
    // 0x206be0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x206be0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206be4: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x206be4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x206be8: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x206BE8u;
    {
        const bool branch_taken_0x206be8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x206BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206BE8u;
            // 0x206bec: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206be8) {
            ctx->pc = 0x206C20u;
            goto label_206c20;
        }
    }
    ctx->pc = 0x206BF0u;
    // 0x206bf0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x206bf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206bf4:
    // 0x206bf4: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x206bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x206bf8: 0x8c4300a0  lw          $v1, 0xA0($v0)
    ctx->pc = 0x206bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x206bfc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x206bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x206c00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x206c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206c04: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x206c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x206c08: 0xc07f85c  jal         func_1FE170
    ctx->pc = 0x206C08u;
    SET_GPR_U32(ctx, 31, 0x206C10u);
    ctx->pc = 0x206C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206C08u;
            // 0x206c0c: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE170u;
    if (runtime->hasFunction(0x1FE170u)) {
        auto targetFn = runtime->lookupFunction(0x1FE170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206C10u; }
        if (ctx->pc != 0x206C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init_USER_PICTURE_INFO__FP17USER_PICTURE_INFO_0x1fe170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206C10u; }
        if (ctx->pc != 0x206C10u) { return; }
    }
    ctx->pc = 0x206C10u;
label_206c10:
    // 0x206c10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x206c10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x206c14: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x206c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x206c18: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x206C18u;
    {
        const bool branch_taken_0x206c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206C18u;
            // 0x206c1c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c18) {
            ctx->pc = 0x206BF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_206bf4;
        }
    }
    ctx->pc = 0x206C20u;
label_206c20:
    // 0x206c20: 0xc094274  jal         func_2509D0
    ctx->pc = 0x206C20u;
    SET_GPR_U32(ctx, 31, 0x206C28u);
    ctx->pc = 0x206C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206C20u;
            // 0x206c24: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206C28u; }
        if (ctx->pc != 0x206C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206C28u; }
        if (ctx->pc != 0x206C28u) { return; }
    }
    ctx->pc = 0x206C28u;
label_206c28:
    // 0x206c28: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x206c28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x206c2c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x206c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x206c30: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x206C30u;
    {
        const bool branch_taken_0x206c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x206C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206C30u;
            // 0x206c34: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c30) {
            ctx->pc = 0x206C5Cu;
            goto label_206c5c;
        }
    }
    ctx->pc = 0x206C38u;
    // 0x206c38: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x206c38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x206c3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c40: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x206C40u;
    SET_GPR_U32(ctx, 31, 0x206C48u);
    ctx->pc = 0x206C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206C40u;
            // 0x206c44: 0x24a59900  addiu       $a1, $a1, -0x6700 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206C48u; }
        if (ctx->pc != 0x206C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206C48u; }
        if (ctx->pc != 0x206C48u) { return; }
    }
    ctx->pc = 0x206C48u;
label_206c48:
    // 0x206c48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c4c: 0xc080384  jal         func_200E10
    ctx->pc = 0x206C4Cu;
    SET_GPR_U32(ctx, 31, 0x206C54u);
    ctx->pc = 0x206C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206C4Cu;
            // 0x206c50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200E10u;
    if (runtime->hasFunction(0x200E10u)) {
        auto targetFn = runtime->lookupFunction(0x200E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206C54u; }
        if (ctx->pc != 0x206C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPhotoNetaBoardToAlbum__11CMenuInventFi_0x200e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206C54u; }
        if (ctx->pc != 0x206C54u) { return; }
    }
    ctx->pc = 0x206C54u;
label_206c54:
    // 0x206c54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x206C54u;
    {
        const bool branch_taken_0x206c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206C54u;
            // 0x206c58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c54) {
            ctx->pc = 0x206C6Cu;
            goto label_206c6c;
        }
    }
    ctx->pc = 0x206C5Cu;
label_206c5c:
    // 0x206c5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c60: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x206C60u;
    SET_GPR_U32(ctx, 31, 0x206C68u);
    ctx->pc = 0x206C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206C60u;
            // 0x206c64: 0x24a59918  addiu       $a1, $a1, -0x66E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206C68u; }
        if (ctx->pc != 0x206C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206C68u; }
        if (ctx->pc != 0x206C68u) { return; }
    }
    ctx->pc = 0x206C68u;
label_206c68:
    // 0x206c68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x206c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_206c6c:
    // 0x206c6c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x206C6Cu;
    {
        const bool branch_taken_0x206c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206C6Cu;
            // 0x206c70: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c6c) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206C74u;
label_206c74:
    // 0x206c74: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_206c78:
    // 0x206c78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x206c78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c7c: 0xc08e87c  jal         func_23A1F0
    ctx->pc = 0x206C7Cu;
    SET_GPR_U32(ctx, 31, 0x206C84u);
    ctx->pc = 0x206C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206C7Cu;
            // 0x206c80: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A1F0u;
    if (runtime->hasFunction(0x23A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x23A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206C84u; }
        if (ctx->pc != 0x206C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm_0x23a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206C84u; }
        if (ctx->pc != 0x206C84u) { return; }
    }
    ctx->pc = 0x206C84u;
label_206c84:
    // 0x206c84: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x206C84u;
    {
        const bool branch_taken_0x206c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206C84u;
            // 0x206c88: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c84) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206C8Cu;
label_206c8c:
    // 0x206c8c: 0x12600048  beqz        $s3, . + 4 + (0x48 << 2)
    ctx->pc = 0x206C8Cu;
    {
        const bool branch_taken_0x206c8c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x206C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206C8Cu;
            // 0x206c90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c8c) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206C94u;
    // 0x206c94: 0xc08e87c  jal         func_23A1F0
    ctx->pc = 0x206C94u;
    SET_GPR_U32(ctx, 31, 0x206C9Cu);
    ctx->pc = 0x206C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206C94u;
            // 0x206c98: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A1F0u;
    if (runtime->hasFunction(0x23A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x23A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206C9Cu; }
        if (ctx->pc != 0x206C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm_0x23a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206C9Cu; }
        if (ctx->pc != 0x206C9Cu) { return; }
    }
    ctx->pc = 0x206C9Cu;
label_206c9c:
    // 0x206c9c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x206C9Cu;
    {
        const bool branch_taken_0x206c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206C9Cu;
            // 0x206ca0: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c9c) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206CA4u;
label_206ca4:
    // 0x206ca4: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x206ca4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x206ca8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x206ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206cac: 0x1045003b  beq         $v0, $a1, . + 4 + (0x3B << 2)
    ctx->pc = 0x206CACu;
    {
        const bool branch_taken_0x206cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x206cac) {
            ctx->pc = 0x206D9Cu;
            goto label_206d9c;
        }
    }
    ctx->pc = 0x206CB4u;
    // 0x206cb4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x206CB4u;
    {
        const bool branch_taken_0x206cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206CB4u;
            // 0x206cb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206cb4) {
            ctx->pc = 0x206CC4u;
            goto label_206cc4;
        }
    }
    ctx->pc = 0x206CBCu;
    // 0x206cbc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x206CBCu;
    {
        const bool branch_taken_0x206cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206cbc) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206CC4u;
label_206cc4:
    // 0x206cc4: 0xc087630  jal         func_21D8C0
    ctx->pc = 0x206CC4u;
    SET_GPR_U32(ctx, 31, 0x206CCCu);
    ctx->pc = 0x21D8C0u;
    if (runtime->hasFunction(0x21D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206CCCu; }
        if (ctx->pc != 0x206CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor__7CDC2MesFv_0x21d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206CCCu; }
        if (ctx->pc != 0x206CCCu) { return; }
    }
    ctx->pc = 0x206CCCu;
label_206ccc:
    // 0x206ccc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x206cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x206cd0: 0x1263002d  beq         $s3, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x206CD0u;
    {
        const bool branch_taken_0x206cd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x206CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206CD0u;
            // 0x206cd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206cd0) {
            ctx->pc = 0x206D88u;
            goto label_206d88;
        }
    }
    ctx->pc = 0x206CD8u;
    // 0x206cd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x206cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206cdc: 0x12630003  beq         $s3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x206CDCu;
    {
        const bool branch_taken_0x206cdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x206cdc) {
            ctx->pc = 0x206CECu;
            goto label_206cec;
        }
    }
    ctx->pc = 0x206CE4u;
    // 0x206ce4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x206CE4u;
    {
        const bool branch_taken_0x206ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206ce4) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206CECu;
label_206cec:
    // 0x206cec: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x206CECu;
    {
        const bool branch_taken_0x206cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206CECu;
            // 0x206cf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206cec) {
            ctx->pc = 0x206D84u;
            goto label_206d84;
        }
    }
    ctx->pc = 0x206CF4u;
    // 0x206cf4: 0x27a5018c  addiu       $a1, $sp, 0x18C
    ctx->pc = 0x206cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x206cf8: 0xc0805c8  jal         func_201720
    ctx->pc = 0x206CF8u;
    SET_GPR_U32(ctx, 31, 0x206D00u);
    ctx->pc = 0x206CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206CF8u;
            // 0x206cfc: 0xafa0018c  sw          $zero, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201720u;
    if (runtime->hasFunction(0x201720u)) {
        auto targetFn = runtime->lookupFunction(0x201720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206D00u; }
        if (ctx->pc != 0x206D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfoFromMode__11CMenuInventFPi_0x201720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206D00u; }
        if (ctx->pc != 0x206D00u) { return; }
    }
    ctx->pc = 0x206D00u;
label_206d00:
    // 0x206d00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x206d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x206D04u;
    {
        const bool branch_taken_0x206d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206D04u;
            // 0x206d08: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206d04) {
            ctx->pc = 0x206D1Cu;
            goto label_206d1c;
        }
    }
    ctx->pc = 0x206D0Cu;
label_206d0c:
    // 0x206d0c: 0xc07f85c  jal         func_1FE170
    ctx->pc = 0x206D0Cu;
    SET_GPR_U32(ctx, 31, 0x206D14u);
    ctx->pc = 0x206D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206D0Cu;
            // 0x206d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE170u;
    if (runtime->hasFunction(0x1FE170u)) {
        auto targetFn = runtime->lookupFunction(0x1FE170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206D14u; }
        if (ctx->pc != 0x206D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init_USER_PICTURE_INFO__FP17USER_PICTURE_INFO_0x1fe170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206D14u; }
        if (ctx->pc != 0x206D14u) { return; }
    }
    ctx->pc = 0x206D14u;
label_206d14:
    // 0x206d14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x206d14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x206d18: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x206d18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_206d1c:
    // 0x206d1c: 0x0  nop
    ctx->pc = 0x206d1cu;
    // NOP
    // 0x206d20: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x206d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x206d24: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x206d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x206d28: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x206D28u;
    {
        const bool branch_taken_0x206d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206D28u;
            // 0x206d2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206d28) {
            ctx->pc = 0x206D0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_206d0c;
        }
    }
    ctx->pc = 0x206D30u;
    // 0x206d30: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x206d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x206d34: 0xc094274  jal         func_2509D0
    ctx->pc = 0x206D34u;
    SET_GPR_U32(ctx, 31, 0x206D3Cu);
    ctx->pc = 0x206D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206D34u;
            // 0x206d38: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206D3Cu; }
        if (ctx->pc != 0x206D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206D3Cu; }
        if (ctx->pc != 0x206D3Cu) { return; }
    }
    ctx->pc = 0x206D3Cu;
label_206d3c:
    // 0x206d3c: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x206d3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x206d40: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x206d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x206d44: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x206D44u;
    {
        const bool branch_taken_0x206d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x206D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206D44u;
            // 0x206d48: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206d44) {
            ctx->pc = 0x206D70u;
            goto label_206d70;
        }
    }
    ctx->pc = 0x206D4Cu;
    // 0x206d4c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x206d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x206d50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d54: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x206D54u;
    SET_GPR_U32(ctx, 31, 0x206D5Cu);
    ctx->pc = 0x206D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206D54u;
            // 0x206d58: 0x24a59930  addiu       $a1, $a1, -0x66D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206D5Cu; }
        if (ctx->pc != 0x206D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206D5Cu; }
        if (ctx->pc != 0x206D5Cu) { return; }
    }
    ctx->pc = 0x206D5Cu;
label_206d5c:
    // 0x206d5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d60: 0xc080384  jal         func_200E10
    ctx->pc = 0x206D60u;
    SET_GPR_U32(ctx, 31, 0x206D68u);
    ctx->pc = 0x206D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206D60u;
            // 0x206d64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200E10u;
    if (runtime->hasFunction(0x200E10u)) {
        auto targetFn = runtime->lookupFunction(0x200E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206D68u; }
        if (ctx->pc != 0x206D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPhotoNetaBoardToAlbum__11CMenuInventFi_0x200e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206D68u; }
        if (ctx->pc != 0x206D68u) { return; }
    }
    ctx->pc = 0x206D68u;
label_206d68:
    // 0x206d68: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x206D68u;
    {
        const bool branch_taken_0x206d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206d68) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206D70u;
label_206d70:
    // 0x206d70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d74: 0xc08e7cc  jal         func_239F30
    ctx->pc = 0x206D74u;
    SET_GPR_U32(ctx, 31, 0x206D7Cu);
    ctx->pc = 0x206D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206D74u;
            // 0x206d78: 0x24a59940  addiu       $a1, $a1, -0x66C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206D7Cu; }
        if (ctx->pc != 0x206D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206D7Cu; }
        if (ctx->pc != 0x206D7Cu) { return; }
    }
    ctx->pc = 0x206D7Cu;
label_206d7c:
    // 0x206d7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x206D7Cu;
    {
        const bool branch_taken_0x206d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x206d7c) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206D84u;
label_206d84:
    // 0x206d84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x206d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_206d88:
    // 0x206d88: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x206d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206d8c: 0xc08e87c  jal         func_23A1F0
    ctx->pc = 0x206D8Cu;
    SET_GPR_U32(ctx, 31, 0x206D94u);
    ctx->pc = 0x206D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206D8Cu;
            // 0x206d90: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A1F0u;
    if (runtime->hasFunction(0x23A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x23A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206D94u; }
        if (ctx->pc != 0x206D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm_0x23a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206D94u; }
        if (ctx->pc != 0x206D94u) { return; }
    }
    ctx->pc = 0x206D94u;
label_206d94:
    // 0x206d94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x206D94u;
    {
        const bool branch_taken_0x206d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206D94u;
            // 0x206d98: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206d94) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206D9Cu;
label_206d9c:
    // 0x206d9c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x206D9Cu;
    {
        const bool branch_taken_0x206d9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x206DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206D9Cu;
            // 0x206da0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206d9c) {
            ctx->pc = 0x206DB0u;
            goto label_206db0;
        }
    }
    ctx->pc = 0x206DA4u;
    // 0x206da4: 0xc08e87c  jal         func_23A1F0
    ctx->pc = 0x206DA4u;
    SET_GPR_U32(ctx, 31, 0x206DACu);
    ctx->pc = 0x23A1F0u;
    if (runtime->hasFunction(0x23A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x23A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206DACu; }
        if (ctx->pc != 0x206DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm_0x23a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206DACu; }
        if (ctx->pc != 0x206DACu) { return; }
    }
    ctx->pc = 0x206DACu;
label_206dac:
    // 0x206dac: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x206dacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
label_206db0:
    // 0x206db0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x206db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_206db4:
    // 0x206db4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x206db4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206db8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x206db8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x206dbc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x206dbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x206dc0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x206dc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x206dc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x206dc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206dc8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x206dc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206dcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x206dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206dd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x206dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206dd4: 0x3e00008  jr          $ra
    ctx->pc = 0x206DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206DD4u;
            // 0x206dd8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206DDCu;
}
