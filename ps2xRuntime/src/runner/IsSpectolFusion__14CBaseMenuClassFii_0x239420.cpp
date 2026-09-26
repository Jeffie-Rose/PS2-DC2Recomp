#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsSpectolFusion__14CBaseMenuClassFii
// Address: 0x239420 - 0x2396e0
void IsSpectolFusion__14CBaseMenuClassFii_0x239420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsSpectolFusion__14CBaseMenuClassFii_0x239420");
#endif

    switch (ctx->pc) {
        case 0x2394bcu: goto label_2394bc;
        case 0x2394fcu: goto label_2394fc;
        case 0x239520u: goto label_239520;
        case 0x239528u: goto label_239528;
        case 0x239530u: goto label_239530;
        case 0x23956cu: goto label_23956c;
        case 0x239588u: goto label_239588;
        case 0x23959cu: goto label_23959c;
        case 0x2395b8u: goto label_2395b8;
        case 0x2395e8u: goto label_2395e8;
        case 0x2395f8u: goto label_2395f8;
        case 0x239618u: goto label_239618;
        case 0x23962cu: goto label_23962c;
        case 0x239644u: goto label_239644;
        case 0x239654u: goto label_239654;
        case 0x23966cu: goto label_23966c;
        case 0x239698u: goto label_239698;
        case 0x2396b4u: goto label_2396b4;
        default: break;
    }

    ctx->pc = 0x239420u;

    // 0x239420: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x239420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x239424: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x239424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x239428: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x239428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x23942c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23942cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x239430: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x239430u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239434: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x239434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x239438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x239438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23943c: 0x83829634  lb          $v0, -0x69CC($gp)
    ctx->pc = 0x23943cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940212)));
    // 0x239440: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x239440u;
    {
        const bool branch_taken_0x239440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239440u;
            // 0x239444: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239440) {
            ctx->pc = 0x239454u;
            goto label_239454;
        }
    }
    ctx->pc = 0x239448u;
    // 0x239448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23944c: 0xa3809630  sb          $zero, -0x69D0($gp)
    ctx->pc = 0x23944cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940208), (uint8_t)GPR_U32(ctx, 0));
    // 0x239450: 0xa3829634  sb          $v0, -0x69CC($gp)
    ctx->pc = 0x239450u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940212), (uint8_t)GPR_U32(ctx, 2));
label_239454:
    // 0x239454: 0x8666005a  lh          $a2, 0x5A($s3)
    ctx->pc = 0x239454u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 90)));
    // 0x239458: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x239458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x23945c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x23945cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x239460: 0x24a5ca40  addiu       $a1, $a1, -0x35C0
    ctx->pc = 0x239460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953536));
    // 0x239464: 0x2484cb30  addiu       $a0, $a0, -0x34D0
    ctx->pc = 0x239464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953776));
    // 0x239468: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x239468u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x23946c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23946cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x239470: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x239470u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x239474: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x239474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x239478: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x239478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x23947c: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x23947cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x239480: 0x1062008f  beq         $v1, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x239480u;
    {
        const bool branch_taken_0x239480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x239484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239480u;
            // 0x239484: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239480) {
            ctx->pc = 0x2396C0u;
            goto label_2396c0;
        }
    }
    ctx->pc = 0x239488u;
    // 0x239488: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x239488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23948c: 0x10620084  beq         $v1, $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x23948Cu;
    {
        const bool branch_taken_0x23948c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x239490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23948Cu;
            // 0x239490: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23948c) {
            ctx->pc = 0x2396A0u;
            goto label_2396a0;
        }
    }
    ctx->pc = 0x239494u;
    // 0x239494: 0x10620082  beq         $v1, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x239494u;
    {
        const bool branch_taken_0x239494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x239498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239494u;
            // 0x239498: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239494) {
            ctx->pc = 0x2396A0u;
            goto label_2396a0;
        }
    }
    ctx->pc = 0x23949Cu;
    // 0x23949c: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x23949Cu;
    {
        const bool branch_taken_0x23949c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23949c) {
            ctx->pc = 0x239574u;
            goto label_239574;
        }
    }
    ctx->pc = 0x2394A4u;
    // 0x2394a4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2394A4u;
    {
        const bool branch_taken_0x2394a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2394A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2394A4u;
            // 0x2394a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394a4) {
            ctx->pc = 0x2394B4u;
            goto label_2394b4;
        }
    }
    ctx->pc = 0x2394ACu;
    // 0x2394ac: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x2394ACu;
    {
        const bool branch_taken_0x2394ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2394B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2394ACu;
            // 0x2394b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394ac) {
            ctx->pc = 0x2396C4u;
            goto label_2396c4;
        }
    }
    ctx->pc = 0x2394B4u;
label_2394b4:
    // 0x2394b4: 0xc087630  jal         func_21D8C0
    ctx->pc = 0x2394B4u;
    SET_GPR_U32(ctx, 31, 0x2394BCu);
    ctx->pc = 0x21D8C0u;
    if (runtime->hasFunction(0x21D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2394BCu; }
        if (ctx->pc != 0x2394BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor__7CDC2MesFv_0x21d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2394BCu; }
        if (ctx->pc != 0x2394BCu) { return; }
    }
    ctx->pc = 0x2394BCu;
label_2394bc:
    // 0x2394bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2394bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2394c0: 0x1243001e  beq         $s2, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2394C0u;
    {
        const bool branch_taken_0x2394c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2394C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2394C0u;
            // 0x2394c4: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394c0) {
            ctx->pc = 0x23953Cu;
            goto label_23953c;
        }
    }
    ctx->pc = 0x2394C8u;
    // 0x2394c8: 0x12430007  beq         $s2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2394C8u;
    {
        const bool branch_taken_0x2394c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2394CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2394C8u;
            // 0x2394cc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394c8) {
            ctx->pc = 0x2394E8u;
            goto label_2394e8;
        }
    }
    ctx->pc = 0x2394D0u;
    // 0x2394d0: 0x12430005  beq         $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2394D0u;
    {
        const bool branch_taken_0x2394d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x2394D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2394D0u;
            // 0x2394d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394d0) {
            ctx->pc = 0x2394E8u;
            goto label_2394e8;
        }
    }
    ctx->pc = 0x2394D8u;
    // 0x2394d8: 0x12430003  beq         $s2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2394D8u;
    {
        const bool branch_taken_0x2394d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x2394d8) {
            ctx->pc = 0x2394E8u;
            goto label_2394e8;
        }
    }
    ctx->pc = 0x2394E0u;
    // 0x2394e0: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2394E0u;
    {
        const bool branch_taken_0x2394e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2394e0) {
            ctx->pc = 0x2396C0u;
            goto label_2396c0;
        }
    }
    ctx->pc = 0x2394E8u;
label_2394e8:
    // 0x2394e8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2394E8u;
    {
        const bool branch_taken_0x2394e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2394ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2394E8u;
            // 0x2394ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394e8) {
            ctx->pc = 0x23953Cu;
            goto label_23953c;
        }
    }
    ctx->pc = 0x2394F0u;
    // 0x2394f0: 0xa6640002  sh          $a0, 0x2($s3)
    ctx->pc = 0x2394f0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x2394f4: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2394F4u;
    SET_GPR_U32(ctx, 31, 0x2394FCu);
    ctx->pc = 0x2394F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2394F4u;
            // 0x2394f8: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2394FCu; }
        if (ctx->pc != 0x2394FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2394FCu; }
        if (ctx->pc != 0x2394FCu) { return; }
    }
    ctx->pc = 0x2394FCu;
label_2394fc:
    // 0x2394fc: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2394fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x239500: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x239500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x239504: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x239504u;
    {
        const bool branch_taken_0x239504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239504) {
            ctx->pc = 0x239510u;
            goto label_239510;
        }
    }
    ctx->pc = 0x23950Cu;
    // 0x23950c: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x23950cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_239510:
    // 0x239510: 0x8f8595dc  lw          $a1, -0x6A24($gp)
    ctx->pc = 0x239510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940124)));
    // 0x239514: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x239514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x239518: 0xc06666c  jal         func_1999B0
    ctx->pc = 0x239518u;
    SET_GPR_U32(ctx, 31, 0x239520u);
    ctx->pc = 0x23951Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239518u;
            // 0x23951c: 0x2484dc70  addiu       $a0, $a0, -0x2390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239520u; }
        if (ctx->pc != 0x239520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239520u; }
        if (ctx->pc != 0x239520u) { return; }
    }
    ctx->pc = 0x239520u;
label_239520:
    // 0x239520: 0xc08fa80  jal         func_23EA00
    ctx->pc = 0x239520u;
    SET_GPR_U32(ctx, 31, 0x239528u);
    ctx->pc = 0x239524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239520u;
            // 0x239524: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EA00u;
    if (runtime->hasFunction(0x23EA00u)) {
        auto targetFn = runtime->lookupFunction(0x23EA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239528u; }
        if (ctx->pc != 0x239528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitHaveData__12CMenuKeyFuncFv_0x23ea00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239528u; }
        if (ctx->pc != 0x239528u) { return; }
    }
    ctx->pc = 0x239528u;
label_239528:
    // 0x239528: 0xc08e9f4  jal         func_23A7D0
    ctx->pc = 0x239528u;
    SET_GPR_U32(ctx, 31, 0x239530u);
    ctx->pc = 0x23A7D0u;
    if (runtime->hasFunction(0x23A7D0u)) {
        auto targetFn = runtime->lookupFunction(0x23A7D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239530u; }
        if (ctx->pc != 0x239530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSpectol__Fv_0x23a7d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239530u; }
        if (ctx->pc != 0x239530u) { return; }
    }
    ctx->pc = 0x239530u;
label_239530:
    // 0x239530: 0xa3809630  sb          $zero, -0x69D0($gp)
    ctx->pc = 0x239530u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940208), (uint8_t)GPR_U32(ctx, 0));
    // 0x239534: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x239534u;
    {
        const bool branch_taken_0x239534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239534u;
            // 0x239538: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239534) {
            ctx->pc = 0x2396C4u;
            goto label_2396c4;
        }
    }
    ctx->pc = 0x23953Cu;
label_23953c:
    // 0x23953c: 0xa2200001  sb          $zero, 0x1($s1)
    ctx->pc = 0x23953cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x239540: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x239540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x239544: 0x8c430138  lw          $v1, 0x138($v0)
    ctx->pc = 0x239544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x239548: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x239548u;
    {
        const bool branch_taken_0x239548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23954Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239548u;
            // 0x23954c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239548) {
            ctx->pc = 0x239554u;
            goto label_239554;
        }
    }
    ctx->pc = 0x239550u;
    // 0x239550: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x239550u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_239554:
    // 0x239554: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x239554u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x239558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23955c: 0xa6600002  sh          $zero, 0x2($s3)
    ctx->pc = 0x23955cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x239560: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x239560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x239564: 0xc094274  jal         func_2509D0
    ctx->pc = 0x239564u;
    SET_GPR_U32(ctx, 31, 0x23956Cu);
    ctx->pc = 0x239568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239564u;
            // 0x239568: 0xa382962c  sb          $v0, -0x69D4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294940204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23956Cu; }
        if (ctx->pc != 0x23956Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23956Cu; }
        if (ctx->pc != 0x23956Cu) { return; }
    }
    ctx->pc = 0x23956Cu;
label_23956c:
    // 0x23956c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x23956Cu;
    {
        const bool branch_taken_0x23956c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23956Cu;
            // 0x239570: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23956c) {
            ctx->pc = 0x2396C4u;
            goto label_2396c4;
        }
    }
    ctx->pc = 0x239574u;
label_239574:
    // 0x239574: 0x83829630  lb          $v0, -0x69D0($gp)
    ctx->pc = 0x239574u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940208)));
    // 0x239578: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x239578u;
    {
        const bool branch_taken_0x239578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239578) {
            ctx->pc = 0x2395B8u;
            goto label_2395b8;
        }
    }
    ctx->pc = 0x239580u;
    // 0x239580: 0xc05239c  jal         func_148E70
    ctx->pc = 0x239580u;
    SET_GPR_U32(ctx, 31, 0x239588u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239588u; }
        if (ctx->pc != 0x239588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239588u; }
        if (ctx->pc != 0x239588u) { return; }
    }
    ctx->pc = 0x239588u;
label_239588:
    // 0x239588: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x239588u;
    {
        const bool branch_taken_0x239588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23958Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239588u;
            // 0x23958c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239588) {
            ctx->pc = 0x2395B8u;
            goto label_2395b8;
        }
    }
    ctx->pc = 0x239590u;
    // 0x239590: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x239590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239594: 0xc05231c  jal         func_148C70
    ctx->pc = 0x239594u;
    SET_GPR_U32(ctx, 31, 0x23959Cu);
    ctx->pc = 0x239598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239594u;
            // 0x239598: 0xa3829630  sb          $v0, -0x69D0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294940208), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23959Cu; }
        if (ctx->pc != 0x23959Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23959Cu; }
        if (ctx->pc != 0x23959Cu) { return; }
    }
    ctx->pc = 0x23959Cu;
label_23959c:
    // 0x23959c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23959Cu;
    {
        const bool branch_taken_0x23959c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23959c) {
            ctx->pc = 0x2395B8u;
            goto label_2395b8;
        }
    }
    ctx->pc = 0x2395A4u;
    // 0x2395a4: 0x8c450110  lw          $a1, 0x110($v0)
    ctx->pc = 0x2395a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x2395a8: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x2395a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x2395ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2395acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2395b0: 0xc094288  jal         func_250A20
    ctx->pc = 0x2395B0u;
    SET_GPR_U32(ctx, 31, 0x2395B8u);
    ctx->pc = 0x2395B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2395B0u;
            // 0x2395b4: 0x24c6d5c0  addiu       $a2, $a2, -0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250A20u;
    if (runtime->hasFunction(0x250A20u)) {
        auto targetFn = runtime->lookupFunction(0x250A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2395B8u; }
        if (ctx->pc != 0x2395B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__FiPUiP9mgCMemory_0x250a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2395B8u; }
        if (ctx->pc != 0x2395B8u) { return; }
    }
    ctx->pc = 0x2395B8u;
label_2395b8:
    // 0x2395b8: 0x8f8295c8  lw          $v0, -0x6A38($gp)
    ctx->pc = 0x2395b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940104)));
    // 0x2395bc: 0x2443000a  addiu       $v1, $v0, 0xA
    ctx->pc = 0x2395bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x2395c0: 0x9042000a  lbu         $v0, 0xA($v0)
    ctx->pc = 0x2395c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x2395c4: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2395C4u;
    {
        const bool branch_taken_0x2395c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2395c4) {
            ctx->pc = 0x2396C0u;
            goto label_2396c0;
        }
    }
    ctx->pc = 0x2395CCu;
    // 0x2395cc: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x2395ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2395d0: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x2395d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x2395d4: 0x8f8295cc  lw          $v0, -0x6A34($gp)
    ctx->pc = 0x2395d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940108)));
    // 0x2395d8: 0xa040000a  sb          $zero, 0xA($v0)
    ctx->pc = 0x2395d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 0));
    // 0x2395dc: 0x8f8495d8  lw          $a0, -0x6A28($gp)
    ctx->pc = 0x2395dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940120)));
    // 0x2395e0: 0xc08ea00  jal         func_23A800
    ctx->pc = 0x2395E0u;
    SET_GPR_U32(ctx, 31, 0x2395E8u);
    ctx->pc = 0x2395E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2395E0u;
            // 0x2395e4: 0x24a5dc70  addiu       $a1, $a1, -0x2390 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A800u;
    if (runtime->hasFunction(0x23A800u)) {
        auto targetFn = runtime->lookupFunction(0x23A800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2395E8u; }
        if (ctx->pc != 0x2395E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AfterSpectolFusion__FP13CGameDataUsedP13CGameDataUsed_0x23a800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2395E8u; }
        if (ctx->pc != 0x2395E8u) { return; }
    }
    ctx->pc = 0x2395E8u;
label_2395e8:
    // 0x2395e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2395e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2395ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2395ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2395f0: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x2395F0u;
    SET_GPR_U32(ctx, 31, 0x2395F8u);
    ctx->pc = 0x2395F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2395F0u;
            // 0x2395f4: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2395F8u; }
        if (ctx->pc != 0x2395F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2395F8u; }
        if (ctx->pc != 0x2395F8u) { return; }
    }
    ctx->pc = 0x2395F8u;
label_2395f8:
    // 0x2395f8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2395f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2395fc: 0x27a30058  addiu       $v1, $sp, 0x58
    ctx->pc = 0x2395fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x239600: 0xae02014c  sw          $v0, 0x14C($s0)
    ctx->pc = 0x239600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 2));
    // 0x239604: 0xdf829638  ld          $v0, -0x69C8($gp)
    ctx->pc = 0x239604u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940216)));
    // 0x239608: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x239608u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x23960c: 0x8f8495d8  lw          $a0, -0x6A28($gp)
    ctx->pc = 0x23960cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940120)));
    // 0x239610: 0xc065dc0  jal         func_197700
    ctx->pc = 0x239610u;
    SET_GPR_U32(ctx, 31, 0x239618u);
    ctx->pc = 0x239614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239610u;
            // 0x239614: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239618u; }
        if (ctx->pc != 0x239618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239618u; }
        if (ctx->pc != 0x239618u) { return; }
    }
    ctx->pc = 0x239618u;
label_239618:
    // 0x239618: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x239618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x23961c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23961cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239620: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x239620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x239624: 0xc087720  jal         func_21DC80
    ctx->pc = 0x239624u;
    SET_GPR_U32(ctx, 31, 0x23962Cu);
    ctx->pc = 0x239628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239624u;
            // 0x239628: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23962Cu; }
        if (ctx->pc != 0x23962Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23962Cu; }
        if (ctx->pc != 0x23962Cu) { return; }
    }
    ctx->pc = 0x23962Cu;
label_23962c:
    // 0x23962c: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x23962cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x239630: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x239630u;
    {
        const bool branch_taken_0x239630 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x239634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239630u;
            // 0x239634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239630) {
            ctx->pc = 0x23964Cu;
            goto label_23964c;
        }
    }
    ctx->pc = 0x239638u;
    // 0x239638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x239638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23963c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x23963Cu;
    SET_GPR_U32(ctx, 31, 0x239644u);
    ctx->pc = 0x239640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23963Cu;
            // 0x239640: 0x240500ad  addiu       $a1, $zero, 0xAD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239644u; }
        if (ctx->pc != 0x239644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239644u; }
        if (ctx->pc != 0x239644u) { return; }
    }
    ctx->pc = 0x239644u;
label_239644:
    // 0x239644: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x239644u;
    {
        const bool branch_taken_0x239644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239644u;
            // 0x239648: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239644) {
            ctx->pc = 0x239670u;
            goto label_239670;
        }
    }
    ctx->pc = 0x23964Cu;
label_23964c:
    // 0x23964c: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x23964Cu;
    SET_GPR_U32(ctx, 31, 0x239654u);
    ctx->pc = 0x239650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23964Cu;
            // 0x239650: 0x240500ca  addiu       $a1, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239654u; }
        if (ctx->pc != 0x239654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239654u; }
        if (ctx->pc != 0x239654u) { return; }
    }
    ctx->pc = 0x239654u;
label_239654:
    // 0x239654: 0x8f8395e8  lw          $v1, -0x6A18($gp)
    ctx->pc = 0x239654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940136)));
    // 0x239658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23965c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23965Cu;
    {
        const bool branch_taken_0x23965c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x239660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23965Cu;
            // 0x239660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23965c) {
            ctx->pc = 0x23966Cu;
            goto label_23966c;
        }
    }
    ctx->pc = 0x239664u;
    // 0x239664: 0xc0877e0  jal         func_21DF80
    ctx->pc = 0x239664u;
    SET_GPR_U32(ctx, 31, 0x23966Cu);
    ctx->pc = 0x239668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239664u;
            // 0x239668: 0x240500cb  addiu       $a1, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23966Cu; }
        if (ctx->pc != 0x23966Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23966Cu; }
        if (ctx->pc != 0x23966Cu) { return; }
    }
    ctx->pc = 0x23966Cu;
label_23966c:
    // 0x23966c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23966cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_239670:
    // 0x239670: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x239670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x239674: 0xa2240001  sb          $a0, 0x1($s1)
    ctx->pc = 0x239674u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x239678: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x239678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x23967c: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x23967cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x239680: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x239680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x239684: 0xa6630002  sh          $v1, 0x2($s3)
    ctx->pc = 0x239684u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x239688: 0xa384962c  sb          $a0, -0x69D4($gp)
    ctx->pc = 0x239688u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940204), (uint8_t)GPR_U32(ctx, 4));
    // 0x23968c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x23968cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x239690: 0xc08fbd0  jal         func_23EF40
    ctx->pc = 0x239690u;
    SET_GPR_U32(ctx, 31, 0x239698u);
    ctx->pc = 0x239694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239690u;
            // 0x239694: 0xaf828374  sw          $v0, -0x7C8C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EF40u;
    if (runtime->hasFunction(0x23EF40u)) {
        auto targetFn = runtime->lookupFunction(0x23EF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239698u; }
        if (ctx->pc != 0x239698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInMenuBGMVol__12CMenuKeyFuncFi_0x23ef40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239698u; }
        if (ctx->pc != 0x239698u) { return; }
    }
    ctx->pc = 0x239698u;
label_239698:
    // 0x239698: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x239698u;
    {
        const bool branch_taken_0x239698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23969Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239698u;
            // 0x23969c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239698) {
            ctx->pc = 0x2396C4u;
            goto label_2396c4;
        }
    }
    ctx->pc = 0x2396A0u;
label_2396a0:
    // 0x2396a0: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2396A0u;
    {
        const bool branch_taken_0x2396a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2396A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2396A0u;
            // 0x2396a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2396a0) {
            ctx->pc = 0x2396C0u;
            goto label_2396c0;
        }
    }
    ctx->pc = 0x2396A8u;
    // 0x2396a8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2396a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2396ac: 0xc08e87c  jal         func_23A1F0
    ctx->pc = 0x2396ACu;
    SET_GPR_U32(ctx, 31, 0x2396B4u);
    ctx->pc = 0x2396B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2396ACu;
            // 0x2396b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A1F0u;
    if (runtime->hasFunction(0x23A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x23A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2396B4u; }
        if (ctx->pc != 0x2396B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm_0x23a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2396B4u; }
        if (ctx->pc != 0x2396B4u) { return; }
    }
    ctx->pc = 0x2396B4u;
label_2396b4:
    // 0x2396b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2396b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2396b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2396B8u;
    {
        const bool branch_taken_0x2396b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2396BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2396B8u;
            // 0x2396bc: 0xa382962c  sb          $v0, -0x69D4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294940204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2396b8) {
            ctx->pc = 0x2396C4u;
            goto label_2396c4;
        }
    }
    ctx->pc = 0x2396C0u;
label_2396c0:
    // 0x2396c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2396c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2396c4:
    // 0x2396c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2396c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2396c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2396c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2396cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2396ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2396d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2396d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2396d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2396d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2396d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2396D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2396DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2396D8u;
            // 0x2396dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2396E0u;
}
