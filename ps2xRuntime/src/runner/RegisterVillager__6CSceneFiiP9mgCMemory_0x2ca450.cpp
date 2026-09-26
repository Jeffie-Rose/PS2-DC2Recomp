#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RegisterVillager__6CSceneFiiP9mgCMemory
// Address: 0x2ca450 - 0x2ca540
void RegisterVillager__6CSceneFiiP9mgCMemory_0x2ca450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RegisterVillager__6CSceneFiiP9mgCMemory_0x2ca450");
#endif

    switch (ctx->pc) {
        case 0x2ca450u: goto label_2ca450;
        case 0x2ca454u: goto label_2ca454;
        case 0x2ca458u: goto label_2ca458;
        case 0x2ca45cu: goto label_2ca45c;
        case 0x2ca460u: goto label_2ca460;
        case 0x2ca464u: goto label_2ca464;
        case 0x2ca468u: goto label_2ca468;
        case 0x2ca46cu: goto label_2ca46c;
        case 0x2ca470u: goto label_2ca470;
        case 0x2ca474u: goto label_2ca474;
        case 0x2ca478u: goto label_2ca478;
        case 0x2ca47cu: goto label_2ca47c;
        case 0x2ca480u: goto label_2ca480;
        case 0x2ca484u: goto label_2ca484;
        case 0x2ca488u: goto label_2ca488;
        case 0x2ca48cu: goto label_2ca48c;
        case 0x2ca490u: goto label_2ca490;
        case 0x2ca494u: goto label_2ca494;
        case 0x2ca498u: goto label_2ca498;
        case 0x2ca49cu: goto label_2ca49c;
        case 0x2ca4a0u: goto label_2ca4a0;
        case 0x2ca4a4u: goto label_2ca4a4;
        case 0x2ca4a8u: goto label_2ca4a8;
        case 0x2ca4acu: goto label_2ca4ac;
        case 0x2ca4b0u: goto label_2ca4b0;
        case 0x2ca4b4u: goto label_2ca4b4;
        case 0x2ca4b8u: goto label_2ca4b8;
        case 0x2ca4bcu: goto label_2ca4bc;
        case 0x2ca4c0u: goto label_2ca4c0;
        case 0x2ca4c4u: goto label_2ca4c4;
        case 0x2ca4c8u: goto label_2ca4c8;
        case 0x2ca4ccu: goto label_2ca4cc;
        case 0x2ca4d0u: goto label_2ca4d0;
        case 0x2ca4d4u: goto label_2ca4d4;
        case 0x2ca4d8u: goto label_2ca4d8;
        case 0x2ca4dcu: goto label_2ca4dc;
        case 0x2ca4e0u: goto label_2ca4e0;
        case 0x2ca4e4u: goto label_2ca4e4;
        case 0x2ca4e8u: goto label_2ca4e8;
        case 0x2ca4ecu: goto label_2ca4ec;
        case 0x2ca4f0u: goto label_2ca4f0;
        case 0x2ca4f4u: goto label_2ca4f4;
        case 0x2ca4f8u: goto label_2ca4f8;
        case 0x2ca4fcu: goto label_2ca4fc;
        case 0x2ca500u: goto label_2ca500;
        case 0x2ca504u: goto label_2ca504;
        case 0x2ca508u: goto label_2ca508;
        case 0x2ca50cu: goto label_2ca50c;
        case 0x2ca510u: goto label_2ca510;
        case 0x2ca514u: goto label_2ca514;
        case 0x2ca518u: goto label_2ca518;
        case 0x2ca51cu: goto label_2ca51c;
        case 0x2ca520u: goto label_2ca520;
        case 0x2ca524u: goto label_2ca524;
        case 0x2ca528u: goto label_2ca528;
        case 0x2ca52cu: goto label_2ca52c;
        case 0x2ca530u: goto label_2ca530;
        case 0x2ca534u: goto label_2ca534;
        case 0x2ca538u: goto label_2ca538;
        case 0x2ca53cu: goto label_2ca53c;
        default: break;
    }

    ctx->pc = 0x2ca450u;

label_2ca450:
    // 0x2ca450: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ca450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2ca454:
    // 0x2ca454: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ca454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2ca458:
    // 0x2ca458: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ca458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2ca45c:
    // 0x2ca45c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ca45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ca460:
    // 0x2ca460: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ca460u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ca464:
    // 0x2ca464: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ca464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ca468:
    // 0x2ca468: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ca468u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ca46c:
    // 0x2ca46c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ca46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ca470:
    // 0x2ca470: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2ca470u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ca474:
    // 0x2ca474: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2ca474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2ca478:
    // 0x2ca478: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2ca478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2ca47c:
    // 0x2ca47c: 0xc04e748  jal         func_139D20
label_2ca480:
    if (ctx->pc == 0x2CA480u) {
        ctx->pc = 0x2CA480u;
            // 0x2ca480: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2CA484u;
        goto label_2ca484;
    }
    ctx->pc = 0x2CA47Cu;
    SET_GPR_U32(ctx, 31, 0x2CA484u);
    ctx->pc = 0x2CA480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA47Cu;
            // 0x2ca480: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA484u; }
        if (ctx->pc != 0x2CA484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA484u; }
        if (ctx->pc != 0x2CA484u) { return; }
    }
    ctx->pc = 0x2CA484u;
label_2ca484:
    // 0x2ca484: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x2ca484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2ca488:
    // 0x2ca488: 0xc04e638  jal         func_1398E0
label_2ca48c:
    if (ctx->pc == 0x2CA48Cu) {
        ctx->pc = 0x2CA48Cu;
            // 0x2ca48c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA490u;
        goto label_2ca490;
    }
    ctx->pc = 0x2CA488u;
    SET_GPR_U32(ctx, 31, 0x2CA490u);
    ctx->pc = 0x2CA48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA488u;
            // 0x2ca48c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA490u; }
        if (ctx->pc != 0x2CA490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA490u; }
        if (ctx->pc != 0x2CA490u) { return; }
    }
    ctx->pc = 0x2CA490u;
label_2ca490:
    // 0x2ca490: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2ca494:
    if (ctx->pc == 0x2CA494u) {
        ctx->pc = 0x2CA494u;
            // 0x2ca494: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA498u;
        goto label_2ca498;
    }
    ctx->pc = 0x2CA490u;
    {
        const bool branch_taken_0x2ca490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA490u;
            // 0x2ca494: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca490) {
            ctx->pc = 0x2CA4B0u;
            goto label_2ca4b0;
        }
    }
    ctx->pc = 0x2CA498u;
label_2ca498:
    // 0x2ca498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ca498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ca49c:
    // 0x2ca49c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ca49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ca4a0:
    // 0x2ca4a0: 0xc049c86  jal         func_127218
label_2ca4a4:
    if (ctx->pc == 0x2CA4A4u) {
        ctx->pc = 0x2CA4A4u;
            // 0x2ca4a4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x2CA4A8u;
        goto label_2ca4a8;
    }
    ctx->pc = 0x2CA4A0u;
    SET_GPR_U32(ctx, 31, 0x2CA4A8u);
    ctx->pc = 0x2CA4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA4A0u;
            // 0x2ca4a4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA4A8u; }
        if (ctx->pc != 0x2CA4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA4A8u; }
        if (ctx->pc != 0x2CA4A8u) { return; }
    }
    ctx->pc = 0x2CA4A8u;
label_2ca4a8:
    // 0x2ca4a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2ca4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2ca4ac:
    // 0x2ca4ac: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2ca4acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2ca4b0:
    // 0x2ca4b0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_2ca4b4:
    if (ctx->pc == 0x2CA4B4u) {
        ctx->pc = 0x2CA4B4u;
            // 0x2ca4b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA4B8u;
        goto label_2ca4b8;
    }
    ctx->pc = 0x2CA4B0u;
    {
        const bool branch_taken_0x2ca4b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA4B0u;
            // 0x2ca4b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca4b0) {
            ctx->pc = 0x2CA4C0u;
            goto label_2ca4c0;
        }
    }
    ctx->pc = 0x2CA4B8u;
label_2ca4b8:
    // 0x2ca4b8: 0x10000019  b           . + 4 + (0x19 << 2)
label_2ca4bc:
    if (ctx->pc == 0x2CA4BCu) {
        ctx->pc = 0x2CA4BCu;
            // 0x2ca4bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA4C0u;
        goto label_2ca4c0;
    }
    ctx->pc = 0x2CA4B8u;
    {
        const bool branch_taken_0x2ca4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA4B8u;
            // 0x2ca4bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca4b8) {
            ctx->pc = 0x2CA520u;
            goto label_2ca520;
        }
    }
    ctx->pc = 0x2CA4C0u;
label_2ca4c0:
    // 0x2ca4c0: 0xc0a0ed8  jal         func_283B60
label_2ca4c4:
    if (ctx->pc == 0x2CA4C4u) {
        ctx->pc = 0x2CA4C4u;
            // 0x2ca4c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA4C8u;
        goto label_2ca4c8;
    }
    ctx->pc = 0x2CA4C0u;
    SET_GPR_U32(ctx, 31, 0x2CA4C8u);
    ctx->pc = 0x2CA4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA4C0u;
            // 0x2ca4c4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA4C8u; }
        if (ctx->pc != 0x2CA4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA4C8u; }
        if (ctx->pc != 0x2CA4C8u) { return; }
    }
    ctx->pc = 0x2CA4C8u;
label_2ca4c8:
    // 0x2ca4c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ca4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ca4cc:
    // 0x2ca4cc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_2ca4d0:
    if (ctx->pc == 0x2CA4D0u) {
        ctx->pc = 0x2CA4D0u;
            // 0x2ca4d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA4D4u;
        goto label_2ca4d4;
    }
    ctx->pc = 0x2CA4CCu;
    {
        const bool branch_taken_0x2ca4cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA4CCu;
            // 0x2ca4d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca4cc) {
            ctx->pc = 0x2CA4DCu;
            goto label_2ca4dc;
        }
    }
    ctx->pc = 0x2CA4D4u;
label_2ca4d4:
    // 0x2ca4d4: 0x10000013  b           . + 4 + (0x13 << 2)
label_2ca4d8:
    if (ctx->pc == 0x2CA4D8u) {
        ctx->pc = 0x2CA4D8u;
            // 0x2ca4d8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x2CA4DCu;
        goto label_2ca4dc;
    }
    ctx->pc = 0x2CA4D4u;
    {
        const bool branch_taken_0x2ca4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA4D4u;
            // 0x2ca4d8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca4d4) {
            ctx->pc = 0x2CA524u;
            goto label_2ca524;
        }
    }
    ctx->pc = 0x2CA4DCu;
label_2ca4dc:
    // 0x2ca4dc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2ca4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ca4e0:
    // 0x2ca4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca4e4:
    // 0x2ca4e4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ca4e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ca4e8:
    // 0x2ca4e8: 0x320f809  jalr        $t9
label_2ca4ec:
    if (ctx->pc == 0x2CA4ECu) {
        ctx->pc = 0x2CA4ECu;
            // 0x2ca4ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2CA4F0u;
        goto label_2ca4f0;
    }
    ctx->pc = 0x2CA4E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CA4F0u);
        ctx->pc = 0x2CA4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA4E8u;
            // 0x2ca4ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CA4F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CA4F0u; }
            if (ctx->pc != 0x2CA4F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2CA4F0u;
label_2ca4f0:
    // 0x2ca4f0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2ca4f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ca4f4:
    // 0x2ca4f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ca4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ca4f8:
    // 0x2ca4f8: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2ca4f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2ca4fc:
    // 0x2ca4fc: 0x320f809  jalr        $t9
label_2ca500:
    if (ctx->pc == 0x2CA500u) {
        ctx->pc = 0x2CA500u;
            // 0x2ca500: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2CA504u;
        goto label_2ca504;
    }
    ctx->pc = 0x2CA4FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2CA504u);
        ctx->pc = 0x2CA500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA4FCu;
            // 0x2ca500: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2CA504u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2CA504u; }
            if (ctx->pc != 0x2CA504u) { return; }
        }
        }
    }
    ctx->pc = 0x2CA504u;
label_2ca504:
    // 0x2ca504: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x2ca504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ca508:
    // 0x2ca508: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ca508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ca50c:
    // 0x2ca50c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ca50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ca510:
    // 0x2ca510: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ca510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ca514:
    // 0x2ca514: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2ca514u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ca518:
    // 0x2ca518: 0xc0b290c  jal         func_2CA430
label_2ca51c:
    if (ctx->pc == 0x2CA51Cu) {
        ctx->pc = 0x2CA51Cu;
            // 0x2ca51c: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->pc = 0x2CA520u;
        goto label_2ca520;
    }
    ctx->pc = 0x2CA518u;
    SET_GPR_U32(ctx, 31, 0x2CA520u);
    ctx->pc = 0x2CA51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA518u;
            // 0x2ca51c: 0xe620000c  swc1        $f0, 0xC($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CA430u;
    if (runtime->hasFunction(0x2CA430u)) {
        auto targetFn = runtime->lookupFunction(0x2CA430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA520u; }
        if (ctx->pc != 0x2CA520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RegisterVillager__6CSceneFiiP18CVillagerPlaceInfo_0x2ca430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA520u; }
        if (ctx->pc != 0x2CA520u) { return; }
    }
    ctx->pc = 0x2CA520u;
label_2ca520:
    // 0x2ca520: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2ca520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2ca524:
    // 0x2ca524: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2ca524u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ca528:
    // 0x2ca528: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ca528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ca52c:
    // 0x2ca52c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ca52cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ca530:
    // 0x2ca530: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ca530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ca534:
    // 0x2ca534: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ca538:
    // 0x2ca538: 0x3e00008  jr          $ra
label_2ca53c:
    if (ctx->pc == 0x2CA53Cu) {
        ctx->pc = 0x2CA53Cu;
            // 0x2ca53c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2CA540u;
        goto label_fallthrough_0x2ca538;
    }
    ctx->pc = 0x2CA538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA538u;
            // 0x2ca53c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ca538:
    ctx->pc = 0x2CA540u;
}
