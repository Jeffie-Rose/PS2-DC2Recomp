#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuUseItemCheckFunc__FP13CGameDataUsedP14CItemUseTargeti
// Address: 0x21e8c0 - 0x21f444
void MenuUseItemCheckFunc__FP13CGameDataUsedP14CItemUseTargeti_0x21e8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuUseItemCheckFunc__FP13CGameDataUsedP14CItemUseTargeti_0x21e8c0");
#endif

    switch (ctx->pc) {
        case 0x21e918u: goto label_21e918;
        case 0x21e938u: goto label_21e938;
        case 0x21e948u: goto label_21e948;
        case 0x21e9a4u: goto label_21e9a4;
        case 0x21ea00u: goto label_21ea00;
        case 0x21eba4u: goto label_21eba4;
        case 0x21ec00u: goto label_21ec00;
        case 0x21ec10u: goto label_21ec10;
        case 0x21ec28u: goto label_21ec28;
        case 0x21ec40u: goto label_21ec40;
        case 0x21ec50u: goto label_21ec50;
        case 0x21ec80u: goto label_21ec80;
        case 0x21ec90u: goto label_21ec90;
        case 0x21ecccu: goto label_21eccc;
        case 0x21ecf4u: goto label_21ecf4;
        case 0x21ed00u: goto label_21ed00;
        case 0x21ed24u: goto label_21ed24;
        case 0x21ed50u: goto label_21ed50;
        case 0x21ed9cu: goto label_21ed9c;
        case 0x21ee34u: goto label_21ee34;
        case 0x21ee60u: goto label_21ee60;
        case 0x21ee80u: goto label_21ee80;
        case 0x21eeb0u: goto label_21eeb0;
        case 0x21ef74u: goto label_21ef74;
        case 0x21f030u: goto label_21f030;
        case 0x21f094u: goto label_21f094;
        case 0x21f0a4u: goto label_21f0a4;
        case 0x21f0d4u: goto label_21f0d4;
        case 0x21f0fcu: goto label_21f0fc;
        case 0x21f120u: goto label_21f120;
        case 0x21f164u: goto label_21f164;
        case 0x21f190u: goto label_21f190;
        case 0x21f1a4u: goto label_21f1a4;
        case 0x21f1f0u: goto label_21f1f0;
        case 0x21f1fcu: goto label_21f1fc;
        case 0x21f28cu: goto label_21f28c;
        case 0x21f2d0u: goto label_21f2d0;
        case 0x21f360u: goto label_21f360;
        case 0x21f36cu: goto label_21f36c;
        case 0x21f3c8u: goto label_21f3c8;
        case 0x21f3ecu: goto label_21f3ec;
        case 0x21f3f4u: goto label_21f3f4;
        default: break;
    }

    ctx->pc = 0x21e8c0u;

    // 0x21e8c0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x21e8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x21e8c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x21e8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x21e8c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x21e8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x21e8cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x21e8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x21e8d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x21e8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x21e8d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21e8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x21e8d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21e8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x21e8dc: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x21e8dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e8e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21e8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x21e8e4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x21e8e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e8e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x21e8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21e8ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21e8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21e8f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x21e8f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e8f4: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E8F4u;
    {
        const bool branch_taken_0x21e8f4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E8F4u;
            // 0x21e8f8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e8f4) {
            ctx->pc = 0x21E904u;
            goto label_21e904;
        }
    }
    ctx->pc = 0x21E8FCu;
    // 0x21e8fc: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E8FCu;
    {
        const bool branch_taken_0x21e8fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e8fc) {
            ctx->pc = 0x21E90Cu;
            goto label_21e90c;
        }
    }
    ctx->pc = 0x21E904u;
label_21e904:
    // 0x21e904: 0x100002c3  b           . + 4 + (0x2C3 << 2)
    ctx->pc = 0x21E904u;
    {
        const bool branch_taken_0x21e904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E904u;
            // 0x21e908: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e904) {
            ctx->pc = 0x21F414u;
            goto label_21f414;
        }
    }
    ctx->pc = 0x21E90Cu;
label_21e90c:
    // 0x21e90c: 0x86a40002  lh          $a0, 0x2($s5)
    ctx->pc = 0x21e90cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x21e910: 0xc0659a4  jal         func_196690
    ctx->pc = 0x21E910u;
    SET_GPR_U32(ctx, 31, 0x21E918u);
    ctx->pc = 0x21E914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E910u;
            // 0x21e914: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196690u;
    if (runtime->hasFunction(0x196690u)) {
        auto targetFn = runtime->lookupFunction(0x196690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E918u; }
        if (ctx->pc != 0x21E918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUsedItemAfterEffect__FiP14USEITEM_EFFECT_0x196690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E918u; }
        if (ctx->pc != 0x21E918u) { return; }
    }
    ctx->pc = 0x21E918u;
label_21e918:
    // 0x21e918: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E918u;
    {
        const bool branch_taken_0x21e918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E918u;
            // 0x21e91c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e918) {
            ctx->pc = 0x21E928u;
            goto label_21e928;
        }
    }
    ctx->pc = 0x21E920u;
    // 0x21e920: 0x100002bd  b           . + 4 + (0x2BD << 2)
    ctx->pc = 0x21E920u;
    {
        const bool branch_taken_0x21e920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E920u;
            // 0x21e924: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e920) {
            ctx->pc = 0x21F418u;
            goto label_21f418;
        }
    }
    ctx->pc = 0x21E928u;
label_21e928:
    // 0x21e928: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x21e928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x21e92c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x21e92cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21e930: 0xc06421c  jal         func_190870
    ctx->pc = 0x21E930u;
    SET_GPR_U32(ctx, 31, 0x21E938u);
    ctx->pc = 0x21E934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E930u;
            // 0x21e934: 0xafa000d4  sw          $zero, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E938u; }
        if (ctx->pc != 0x21E938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E938u; }
        if (ctx->pc != 0x21E938u) { return; }
    }
    ctx->pc = 0x21E938u;
label_21e938:
    // 0x21e938: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x21e938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x21e93c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x21e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21e940: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x21E940u;
    SET_GPR_U32(ctx, 31, 0x21E948u);
    ctx->pc = 0x21E944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E940u;
            // 0x21e944: 0x24532f90  addiu       $s3, $v0, 0x2F90 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E948u; }
        if (ctx->pc != 0x21E948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E948u; }
        if (ctx->pc != 0x21E948u) { return; }
    }
    ctx->pc = 0x21E948u;
label_21e948:
    // 0x21e948: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21e948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e94c: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x21e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21e950: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E950u;
    {
        const bool branch_taken_0x21e950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E950u;
            // 0x21e954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e950) {
            ctx->pc = 0x21E96Cu;
            goto label_21e96c;
        }
    }
    ctx->pc = 0x21E958u;
    // 0x21e958: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E958u;
    {
        const bool branch_taken_0x21e958 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e958) {
            ctx->pc = 0x21E968u;
            goto label_21e968;
        }
    }
    ctx->pc = 0x21E960u;
    // 0x21e960: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21E960u;
    {
        const bool branch_taken_0x21e960 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e960) {
            ctx->pc = 0x21E974u;
            goto label_21e974;
        }
    }
    ctx->pc = 0x21E968u;
label_21e968:
    // 0x21e968: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21e968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21e96c:
    // 0x21e96c: 0x100002a9  b           . + 4 + (0x2A9 << 2)
    ctx->pc = 0x21E96Cu;
    {
        const bool branch_taken_0x21e96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e96c) {
            ctx->pc = 0x21F414u;
            goto label_21f414;
        }
    }
    ctx->pc = 0x21E974u;
label_21e974:
    // 0x21e974: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x21e974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21e978: 0xaf829330  sw          $v0, -0x6CD0($gp)
    ctx->pc = 0x21e978u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939440), GPR_U32(ctx, 2));
    // 0x21e97c: 0x86a20002  lh          $v0, 0x2($s5)
    ctx->pc = 0x21e97cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x21e980: 0xaf82932c  sw          $v0, -0x6CD4($gp)
    ctx->pc = 0x21e980u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939436), GPR_U32(ctx, 2));
    // 0x21e984: 0xaf809334  sw          $zero, -0x6CCC($gp)
    ctx->pc = 0x21e984u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939444), GPR_U32(ctx, 0));
    // 0x21e988: 0x9662000c  lhu         $v0, 0xC($s3)
    ctx->pc = 0x21e988u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x21e98c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x21e98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x21e990: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21E990u;
    {
        const bool branch_taken_0x21e990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E990u;
            // 0x21e994: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e990) {
            ctx->pc = 0x21E99Cu;
            goto label_21e99c;
        }
    }
    ctx->pc = 0x21E998u;
    // 0x21e998: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x21e998u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e99c:
    // 0x21e99c: 0xc066e94  jal         func_19BA50
    ctx->pc = 0x21E99Cu;
    SET_GPR_U32(ctx, 31, 0x21E9A4u);
    ctx->pc = 0x21E9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E99Cu;
            // 0x21e9a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BA50u;
    if (runtime->hasFunction(0x19BA50u)) {
        auto targetFn = runtime->lookupFunction(0x19BA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E9A4u; }
        if (ctx->pc != 0x21E9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowPartyMember__16CUserDataManagerFv_0x19ba50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21E9A4u; }
        if (ctx->pc != 0x21E9A4u) { return; }
    }
    ctx->pc = 0x21E9A4u;
label_21e9a4:
    // 0x21e9a4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x21e9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x21e9a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x21e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21e9ac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x21e9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21e9b0: 0x10830263  beq         $a0, $v1, . + 4 + (0x263 << 2)
    ctx->pc = 0x21E9B0u;
    {
        const bool branch_taken_0x21e9b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x21E9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E9B0u;
            // 0x21e9b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e9b0) {
            ctx->pc = 0x21F340u;
            goto label_21f340;
        }
    }
    ctx->pc = 0x21E9B8u;
    // 0x21e9b8: 0x10820229  beq         $a0, $v0, . + 4 + (0x229 << 2)
    ctx->pc = 0x21E9B8u;
    {
        const bool branch_taken_0x21e9b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x21E9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E9B8u;
            // 0x21e9bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e9b8) {
            ctx->pc = 0x21F260u;
            goto label_21f260;
        }
    }
    ctx->pc = 0x21E9C0u;
    // 0x21e9c0: 0x1082019f  beq         $a0, $v0, . + 4 + (0x19F << 2)
    ctx->pc = 0x21E9C0u;
    {
        const bool branch_taken_0x21e9c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x21e9c0) {
            ctx->pc = 0x21F040u;
            goto label_21f040;
        }
    }
    ctx->pc = 0x21E9C8u;
    // 0x21e9c8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E9C8u;
    {
        const bool branch_taken_0x21e9c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e9c8) {
            ctx->pc = 0x21E9D8u;
            goto label_21e9d8;
        }
    }
    ctx->pc = 0x21E9D0u;
    // 0x21e9d0: 0x10000282  b           . + 4 + (0x282 << 2)
    ctx->pc = 0x21E9D0u;
    {
        const bool branch_taken_0x21e9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E9D0u;
            // 0x21e9d4: 0x8fa200d4  lw          $v0, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e9d0) {
            ctx->pc = 0x21F3DCu;
            goto label_21f3dc;
        }
    }
    ctx->pc = 0x21E9D8u;
label_21e9d8:
    // 0x21e9d8: 0x97a300b8  lhu         $v1, 0xB8($sp)
    ctx->pc = 0x21e9d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x21e9dc: 0x30620006  andi        $v0, $v1, 0x6
    ctx->pc = 0x21e9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x21e9e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E9E0u;
    {
        const bool branch_taken_0x21e9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21E9E0u;
            // 0x21e9e4: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e9e0) {
            ctx->pc = 0x21E9F0u;
            goto label_21e9f0;
        }
    }
    ctx->pc = 0x21E9E8u;
    // 0x21e9e8: 0x1040027b  beqz        $v0, . + 4 + (0x27B << 2)
    ctx->pc = 0x21E9E8u;
    {
        const bool branch_taken_0x21e9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e9e8) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21E9F0u;
label_21e9f0:
    // 0x21e9f0: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x21e9f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x21e9f4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x21e9f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e9f8: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x21E9F8u;
    SET_GPR_U32(ctx, 31, 0x21EA00u);
    ctx->pc = 0x21E9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21E9F8u;
            // 0x21e9fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA00u; }
        if (ctx->pc != 0x21EA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EA00u; }
        if (ctx->pc != 0x21EA00u) { return; }
    }
    ctx->pc = 0x21EA00u;
label_21ea00:
    // 0x21ea00: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21ea00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ea04: 0x0  nop
    ctx->pc = 0x21ea04u;
    // NOP
    // 0x21ea08: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x21ea08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ea0c: 0x0  nop
    ctx->pc = 0x21ea0cu;
    // NOP
    // 0x21ea10: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x21EA10u;
    {
        const bool branch_taken_0x21ea10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ea10) {
            ctx->pc = 0x21EA1Cu;
            goto label_21ea1c;
        }
    }
    ctx->pc = 0x21EA18u;
    // 0x21ea18: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x21ea18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21ea1c:
    // 0x21ea1c: 0x16b43c  dsll32      $s6, $s6, 16
    ctx->pc = 0x21ea1cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 16));
    // 0x21ea20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ea24: 0x16b43f  dsra32      $s6, $s6, 16
    ctx->pc = 0x21ea24u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
    // 0x21ea28: 0x16c20005  bne         $s6, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EA28u;
    {
        const bool branch_taken_0x21ea28 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x21ea28) {
            ctx->pc = 0x21EA40u;
            goto label_21ea40;
        }
    }
    ctx->pc = 0x21EA30u;
    // 0x21ea30: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x21ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x21ea34: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x21ea34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x21ea38: 0x14400267  bnez        $v0, . + 4 + (0x267 << 2)
    ctx->pc = 0x21EA38u;
    {
        const bool branch_taken_0x21ea38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ea38) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21EA40u;
label_21ea40:
    // 0x21ea40: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x21ea40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x21ea44: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x21ea44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x21ea48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EA48u;
    {
        const bool branch_taken_0x21ea48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EA48u;
            // 0x21ea4c: 0x82430174  lb          $v1, 0x174($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 372)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ea48) {
            ctx->pc = 0x21EA60u;
            goto label_21ea60;
        }
    }
    ctx->pc = 0x21EA50u;
    // 0x21ea50: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x21ea50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x21ea54: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x21ea54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x21ea58: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x21EA58u;
    {
        const bool branch_taken_0x21ea58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ea58) {
            ctx->pc = 0x21EB58u;
            goto label_21eb58;
        }
    }
    ctx->pc = 0x21EA60u;
label_21ea60:
    // 0x21ea60: 0x8f84932c  lw          $a0, -0x6CD4($gp)
    ctx->pc = 0x21ea60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939436)));
    // 0x21ea64: 0x24020184  addiu       $v0, $zero, 0x184
    ctx->pc = 0x21ea64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x21ea68: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EA68u;
    {
        const bool branch_taken_0x21ea68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21EA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EA68u;
            // 0x21ea6c: 0x24020185  addiu       $v0, $zero, 0x185 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ea68) {
            ctx->pc = 0x21EA80u;
            goto label_21ea80;
        }
    }
    ctx->pc = 0x21EA70u;
    // 0x21ea70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ea74: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21EA74u;
    {
        const bool branch_taken_0x21ea74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x21ea74) {
            ctx->pc = 0x21EA90u;
            goto label_21ea90;
        }
    }
    ctx->pc = 0x21EA7Cu;
    // 0x21ea7c: 0x24020185  addiu       $v0, $zero, 0x185
    ctx->pc = 0x21ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
label_21ea80:
    // 0x21ea80: 0x14820017  bne         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x21EA80u;
    {
        const bool branch_taken_0x21ea80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21EA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EA80u;
            // 0x21ea84: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ea80) {
            ctx->pc = 0x21EAE0u;
            goto label_21eae0;
        }
    }
    ctx->pc = 0x21EA88u;
    // 0x21ea88: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x21EA88u;
    {
        const bool branch_taken_0x21ea88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21ea88) {
            ctx->pc = 0x21EAE0u;
            goto label_21eae0;
        }
    }
    ctx->pc = 0x21EA90u;
label_21ea90:
    // 0x21ea90: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x21ea90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x21ea94: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x21ea94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x21ea98: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x21EA98u;
    {
        const bool branch_taken_0x21ea98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ea98) {
            ctx->pc = 0x21EAE0u;
            goto label_21eae0;
        }
    }
    ctx->pc = 0x21EAA0u;
    // 0x21eaa0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x21eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21eaa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21eaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21eaa8: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x21EAA8u;
    {
        const bool branch_taken_0x21eaa8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EAA8u;
            // 0x21eaac: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eaa8) {
            ctx->pc = 0x21EAE0u;
            goto label_21eae0;
        }
    }
    ctx->pc = 0x21EAB0u;
    // 0x21eab0: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x21eab0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x21eab4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x21eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x21eab8: 0xa642000a  sh          $v0, 0xA($s2)
    ctx->pc = 0x21eab8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x21eabc: 0x9642000a  lhu         $v0, 0xA($s2)
    ctx->pc = 0x21eabcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    // 0x21eac0: 0x28410081  slti        $at, $v0, 0x81
    ctx->pc = 0x21eac0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x21eac4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x21EAC4u;
    {
        const bool branch_taken_0x21eac4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EAC4u;
            // 0x21eac8: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eac4) {
            ctx->pc = 0x21EAD0u;
            goto label_21ead0;
        }
    }
    ctx->pc = 0x21EACCu;
    // 0x21eacc: 0xa642000a  sh          $v0, 0xA($s2)
    ctx->pc = 0x21eaccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 2));
label_21ead0:
    // 0x21ead0: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x21ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x21ead4: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x21ead4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21ead8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21eadc: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x21eadcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_21eae0:
    // 0x21eae0: 0x8f83932c  lw          $v1, -0x6CD4($gp)
    ctx->pc = 0x21eae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939436)));
    // 0x21eae4: 0x24020128  addiu       $v0, $zero, 0x128
    ctx->pc = 0x21eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
    // 0x21eae8: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21EAE8u;
    {
        const bool branch_taken_0x21eae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21eae8) {
            ctx->pc = 0x21EB58u;
            goto label_21eb58;
        }
    }
    ctx->pc = 0x21EAF0u;
    // 0x21eaf0: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x21eaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21eaf4: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x21eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x21eaf8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21eaf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21eafc: 0x0  nop
    ctx->pc = 0x21eafcu;
    // NOP
    // 0x21eb00: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x21eb00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21eb04: 0x0  nop
    ctx->pc = 0x21eb04u;
    // NOP
    // 0x21eb08: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x21EB08u;
    {
        const bool branch_taken_0x21eb08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21eb08) {
            ctx->pc = 0x21EB58u;
            goto label_21eb58;
        }
    }
    ctx->pc = 0x21EB10u;
    // 0x21eb10: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x21eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21eb14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21eb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21eb18: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x21EB18u;
    {
        const bool branch_taken_0x21eb18 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB18u;
            // 0x21eb1c: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb18) {
            ctx->pc = 0x21EB58u;
            goto label_21eb58;
        }
    }
    ctx->pc = 0x21EB20u;
    // 0x21eb20: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x21eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x21eb24: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x21eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x21eb28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21eb28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21eb2c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x21eb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21eb30: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x21eb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x21eb34: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x21eb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21eb38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x21eb38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21eb3c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x21eb3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x21eb40: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x21eb40u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x21eb44: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x21eb44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21eb48: 0x0  nop
    ctx->pc = 0x21eb48u;
    // NOP
    // 0x21eb4c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x21EB4Cu;
    {
        const bool branch_taken_0x21eb4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21EB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB4Cu;
            // 0x21eb50: 0x2410000a  addiu       $s0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb4c) {
            ctx->pc = 0x21EB58u;
            goto label_21eb58;
        }
    }
    ctx->pc = 0x21EB54u;
    // 0x21eb54: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x21eb54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_21eb58:
    // 0x21eb58: 0x16e0021f  bnez        $s7, . + 4 + (0x21F << 2)
    ctx->pc = 0x21EB58u;
    {
        const bool branch_taken_0x21eb58 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x21eb58) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21EB60u;
    // 0x21eb60: 0x8f83932c  lw          $v1, -0x6CD4($gp)
    ctx->pc = 0x21eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939436)));
    // 0x21eb64: 0x24020111  addiu       $v0, $zero, 0x111
    ctx->pc = 0x21eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
    // 0x21eb68: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x21EB68u;
    {
        const bool branch_taken_0x21eb68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21EB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB68u;
            // 0x21eb6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb68) {
            ctx->pc = 0x21EBBCu;
            goto label_21ebbc;
        }
    }
    ctx->pc = 0x21EB70u;
    // 0x21eb70: 0x16c20219  bne         $s6, $v0, . + 4 + (0x219 << 2)
    ctx->pc = 0x21EB70u;
    {
        const bool branch_taken_0x21eb70 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x21eb70) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21EB78u;
    // 0x21eb78: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x21eb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21eb7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21eb80: 0x12800215  beqz        $s4, . + 4 + (0x215 << 2)
    ctx->pc = 0x21EB80u;
    {
        const bool branch_taken_0x21eb80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB80u;
            // 0x21eb84: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eb80) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21EB88u;
    // 0x21eb88: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x21eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x21eb8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21eb90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21eb90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21eb94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21eb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eb98: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x21eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21eb9c: 0xc065b40  jal         func_196D00
    ctx->pc = 0x21EB9Cu;
    SET_GPR_U32(ctx, 31, 0x21EBA4u);
    ctx->pc = 0x21EBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EB9Cu;
            // 0x21eba0: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D00u;
    if (runtime->hasFunction(0x196D00u)) {
        auto targetFn = runtime->lookupFunction(0x196D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EBA4u; }
        if (ctx->pc != 0x21EBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFillRate__11COMMON_GAGEFf_0x196d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EBA4u; }
        if (ctx->pc != 0x21EBA4u) { return; }
    }
    ctx->pc = 0x21EBA4u;
label_21eba4:
    // 0x21eba4: 0xa6400008  sh          $zero, 0x8($s2)
    ctx->pc = 0x21eba4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x21eba8: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x21eba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21ebac: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x21ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x21ebb0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x21ebb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x21ebb4: 0x10000208  b           . + 4 + (0x208 << 2)
    ctx->pc = 0x21EBB4u;
    {
        const bool branch_taken_0x21ebb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EBB4u;
            // 0x21ebb8: 0xae620098  sw          $v0, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebb4) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21EBBCu;
label_21ebbc:
    // 0x21ebbc: 0x96420008  lhu         $v0, 0x8($s2)
    ctx->pc = 0x21ebbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x21ebc0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x21ebc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x21ebc4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21EBC4u;
    {
        const bool branch_taken_0x21ebc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EBC4u;
            // 0x21ebc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebc4) {
            ctx->pc = 0x21EBF8u;
            goto label_21ebf8;
        }
    }
    ctx->pc = 0x21EBCCu;
    // 0x21ebcc: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x21ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x21ebd0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x21ebd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x21ebd4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21EBD4u;
    {
        const bool branch_taken_0x21ebd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ebd4) {
            ctx->pc = 0x21EBF4u;
            goto label_21ebf4;
        }
    }
    ctx->pc = 0x21EBDCu;
    // 0x21ebdc: 0x86a30002  lh          $v1, 0x2($s5)
    ctx->pc = 0x21ebdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x21ebe0: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x21ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x21ebe4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21EBE4u;
    {
        const bool branch_taken_0x21ebe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21EBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EBE4u;
            // 0x21ebe8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebe4) {
            ctx->pc = 0x21EBF4u;
            goto label_21ebf4;
        }
    }
    ctx->pc = 0x21EBECu;
    // 0x21ebec: 0x100001fa  b           . + 4 + (0x1FA << 2)
    ctx->pc = 0x21EBECu;
    {
        const bool branch_taken_0x21ebec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EBECu;
            // 0x21ebf0: 0xaf829334  sw          $v0, -0x6CCC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebec) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21EBF4u;
label_21ebf4:
    // 0x21ebf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21ebf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21ebf8:
    // 0x21ebf8: 0xc066d24  jal         func_19B490
    ctx->pc = 0x21EBF8u;
    SET_GPR_U32(ctx, 31, 0x21EC00u);
    ctx->pc = 0x21EBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EBF8u;
            // 0x21ebfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC00u; }
        if (ctx->pc != 0x21EC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC00u; }
        if (ctx->pc != 0x21EC00u) { return; }
    }
    ctx->pc = 0x21EC00u;
label_21ec00:
    // 0x21ec00: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x21ec00u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21ec04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec08: 0xc066d24  jal         func_19B490
    ctx->pc = 0x21EC08u;
    SET_GPR_U32(ctx, 31, 0x21EC10u);
    ctx->pc = 0x21EC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC08u;
            // 0x21ec0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC10u; }
        if (ctx->pc != 0x21EC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC10u; }
        if (ctx->pc != 0x21EC10u) { return; }
    }
    ctx->pc = 0x21EC10u;
label_21ec10:
    // 0x21ec10: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x21ec10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
    // 0x21ec14: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x21ec14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec18: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x21ec18u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x21ec1c: 0x84254d98  lh          $a1, 0x4D98($at)
    ctx->pc = 0x21ec1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19864)));
    // 0x21ec20: 0xc0670c0  jal         func_19C300
    ctx->pc = 0x21EC20u;
    SET_GPR_U32(ctx, 31, 0x21EC28u);
    ctx->pc = 0x21EC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC20u;
            // 0x21ec24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C300u;
    if (runtime->hasFunction(0x19C300u)) {
        auto targetFn = runtime->lookupFunction(0x19C300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC28u; }
        if (ctx->pc != 0x21EC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBajjiDataPtrMosId__16CUserDataManagerFi_0x19c300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC28u; }
        if (ctx->pc != 0x21EC28u) { return; }
    }
    ctx->pc = 0x21EC28u;
label_21ec28:
    // 0x21ec28: 0x8f83932c  lw          $v1, -0x6CD4($gp)
    ctx->pc = 0x21ec28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939436)));
    // 0x21ec2c: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x21ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x21ec30: 0x14620041  bne         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x21EC30u;
    {
        const bool branch_taken_0x21ec30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21EC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC30u;
            // 0x21ec34: 0x240201aa  addiu       $v0, $zero, 0x1AA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 426));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec30) {
            ctx->pc = 0x21ED38u;
            goto label_21ed38;
        }
    }
    ctx->pc = 0x21EC38u;
    // 0x21ec38: 0xc065b24  jal         func_196C90
    ctx->pc = 0x21EC38u;
    SET_GPR_U32(ctx, 31, 0x21EC40u);
    ctx->pc = 0x21EC3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC38u;
            // 0x21ec3c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196C90u;
    if (runtime->hasFunction(0x196C90u)) {
        auto targetFn = runtime->lookupFunction(0x196C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC40u; }
        if (ctx->pc != 0x21EC40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFill__11COMMON_GAGEFv_0x196c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC40u; }
        if (ctx->pc != 0x21EC40u) { return; }
    }
    ctx->pc = 0x21EC40u;
label_21ec40:
    // 0x21ec40: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21EC40u;
    {
        const bool branch_taken_0x21ec40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC40u;
            // 0x21ec44: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec40) {
            ctx->pc = 0x21EC68u;
            goto label_21ec68;
        }
    }
    ctx->pc = 0x21EC48u;
    // 0x21ec48: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x21EC48u;
    SET_GPR_U32(ctx, 31, 0x21EC50u);
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC50u; }
        if (ctx->pc != 0x21EC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC50u; }
        if (ctx->pc != 0x21EC50u) { return; }
    }
    ctx->pc = 0x21EC50u;
label_21ec50:
    // 0x21ec50: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21ec50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ec54: 0x0  nop
    ctx->pc = 0x21ec54u;
    // NOP
    // 0x21ec58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21ec58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ec5c: 0x0  nop
    ctx->pc = 0x21ec5cu;
    // NOP
    // 0x21ec60: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x21EC60u;
    {
        const bool branch_taken_0x21ec60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ec60) {
            ctx->pc = 0x21ECA8u;
            goto label_21eca8;
        }
    }
    ctx->pc = 0x21EC68u;
label_21ec68:
    // 0x21ec68: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x21ec68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x21ec6c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x21ec6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x21ec70: 0x104001d9  beqz        $v0, . + 4 + (0x1D9 << 2)
    ctx->pc = 0x21EC70u;
    {
        const bool branch_taken_0x21ec70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC70u;
            // 0x21ec74: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec70) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21EC78u;
    // 0x21ec78: 0xc065b24  jal         func_196C90
    ctx->pc = 0x21EC78u;
    SET_GPR_U32(ctx, 31, 0x21EC80u);
    ctx->pc = 0x196C90u;
    if (runtime->hasFunction(0x196C90u)) {
        auto targetFn = runtime->lookupFunction(0x196C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC80u; }
        if (ctx->pc != 0x21EC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckFill__11COMMON_GAGEFv_0x196c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC80u; }
        if (ctx->pc != 0x21EC80u) { return; }
    }
    ctx->pc = 0x21EC80u;
label_21ec80:
    // 0x21ec80: 0x144001d5  bnez        $v0, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x21EC80u;
    {
        const bool branch_taken_0x21ec80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EC80u;
            // 0x21ec84: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec80) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21EC88u;
    // 0x21ec88: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x21EC88u;
    SET_GPR_U32(ctx, 31, 0x21EC90u);
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC90u; }
        if (ctx->pc != 0x21EC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EC90u; }
        if (ctx->pc != 0x21EC90u) { return; }
    }
    ctx->pc = 0x21EC90u;
label_21ec90:
    // 0x21ec90: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21ec90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ec94: 0x0  nop
    ctx->pc = 0x21ec94u;
    // NOP
    // 0x21ec98: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21ec98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ec9c: 0x0  nop
    ctx->pc = 0x21ec9cu;
    // NOP
    // 0x21eca0: 0x450001cd  bc1f        . + 4 + (0x1CD << 2)
    ctx->pc = 0x21ECA0u;
    {
        const bool branch_taken_0x21eca0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21eca0) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21ECA8u;
label_21eca8:
    // 0x21eca8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x21eca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21ecac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21ecb0: 0x128001c9  beqz        $s4, . + 4 + (0x1C9 << 2)
    ctx->pc = 0x21ECB0u;
    {
        const bool branch_taken_0x21ecb0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ECB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ECB0u;
            // 0x21ecb4: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ecb0) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21ECB8u;
    // 0x21ecb8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x21ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x21ecbc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x21ecbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ecc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21ecc4: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x21ECC4u;
    SET_GPR_U32(ctx, 31, 0x21ECCCu);
    ctx->pc = 0x21ECC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ECC4u;
            // 0x21ecc8: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ECCCu; }
        if (ctx->pc != 0x21ECCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ECCCu; }
        if (ctx->pc != 0x21ECCCu) { return; }
    }
    ctx->pc = 0x21ECCCu;
label_21eccc:
    // 0x21eccc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21ecccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ecd0: 0x0  nop
    ctx->pc = 0x21ecd0u;
    // NOP
    // 0x21ecd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21ecd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ecd8: 0x0  nop
    ctx->pc = 0x21ecd8u;
    // NOP
    // 0x21ecdc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x21ECDCu;
    {
        const bool branch_taken_0x21ecdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21ECE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ECDCu;
            // 0x21ece0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ecdc) {
            ctx->pc = 0x21ECF8u;
            goto label_21ecf8;
        }
    }
    ctx->pc = 0x21ECE4u;
    // 0x21ece4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21ece8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21ece8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21ecec: 0xc065b40  jal         func_196D00
    ctx->pc = 0x21ECECu;
    SET_GPR_U32(ctx, 31, 0x21ECF4u);
    ctx->pc = 0x21ECF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ECECu;
            // 0x21ecf0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D00u;
    if (runtime->hasFunction(0x196D00u)) {
        auto targetFn = runtime->lookupFunction(0x196D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ECF4u; }
        if (ctx->pc != 0x21ECF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFillRate__11COMMON_GAGEFf_0x196d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ECF4u; }
        if (ctx->pc != 0x21ECF4u) { return; }
    }
    ctx->pc = 0x21ECF4u;
label_21ecf4:
    // 0x21ecf4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x21ecf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_21ecf8:
    // 0x21ecf8: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x21ECF8u;
    SET_GPR_U32(ctx, 31, 0x21ED00u);
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED00u; }
        if (ctx->pc != 0x21ED00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED00u; }
        if (ctx->pc != 0x21ED00u) { return; }
    }
    ctx->pc = 0x21ED00u;
label_21ed00:
    // 0x21ed00: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21ed00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ed04: 0x0  nop
    ctx->pc = 0x21ed04u;
    // NOP
    // 0x21ed08: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21ed08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ed0c: 0x0  nop
    ctx->pc = 0x21ed0cu;
    // NOP
    // 0x21ed10: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x21ED10u;
    {
        const bool branch_taken_0x21ed10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21ED14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED10u;
            // 0x21ed14: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed10) {
            ctx->pc = 0x21ED24u;
            goto label_21ed24;
        }
    }
    ctx->pc = 0x21ED18u;
    // 0x21ed18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21ed18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21ed1c: 0xc065b40  jal         func_196D00
    ctx->pc = 0x21ED1Cu;
    SET_GPR_U32(ctx, 31, 0x21ED24u);
    ctx->pc = 0x21ED20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED1Cu;
            // 0x21ed20: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D00u;
    if (runtime->hasFunction(0x196D00u)) {
        auto targetFn = runtime->lookupFunction(0x196D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED24u; }
        if (ctx->pc != 0x21ED24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFillRate__11COMMON_GAGEFf_0x196d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED24u; }
        if (ctx->pc != 0x21ED24u) { return; }
    }
    ctx->pc = 0x21ED24u;
label_21ed24:
    // 0x21ed24: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x21ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x21ed28: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x21ed28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21ed2c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x21ed2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x21ed30: 0x100001a9  b           . + 4 + (0x1A9 << 2)
    ctx->pc = 0x21ED30u;
    {
        const bool branch_taken_0x21ed30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ED34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED30u;
            // 0x21ed34: 0xae620098  sw          $v0, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed30) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21ED38u;
label_21ed38:
    // 0x21ed38: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x21ED38u;
    {
        const bool branch_taken_0x21ed38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21ED3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED38u;
            // 0x21ed3c: 0x24020124  addiu       $v0, $zero, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed38) {
            ctx->pc = 0x21EDB0u;
            goto label_21edb0;
        }
    }
    ctx->pc = 0x21ED40u;
    // 0x21ed40: 0x16c001a5  bnez        $s6, . + 4 + (0x1A5 << 2)
    ctx->pc = 0x21ED40u;
    {
        const bool branch_taken_0x21ed40 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x21ED44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED40u;
            // 0x21ed44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed40) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21ED48u;
    // 0x21ed48: 0xc065b30  jal         func_196CC0
    ctx->pc = 0x21ED48u;
    SET_GPR_U32(ctx, 31, 0x21ED50u);
    ctx->pc = 0x196CC0u;
    if (runtime->hasFunction(0x196CC0u)) {
        auto targetFn = runtime->lookupFunction(0x196CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED50u; }
        if (ctx->pc != 0x21ED50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRate__11COMMON_GAGEFv_0x196cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED50u; }
        if (ctx->pc != 0x21ED50u) { return; }
    }
    ctx->pc = 0x21ED50u;
label_21ed50:
    // 0x21ed50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21ed54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21ed54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21ed58: 0x0  nop
    ctx->pc = 0x21ed58u;
    // NOP
    // 0x21ed5c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21ed5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ed60: 0x0  nop
    ctx->pc = 0x21ed60u;
    // NOP
    // 0x21ed64: 0x4500019c  bc1f        . + 4 + (0x19C << 2)
    ctx->pc = 0x21ED64u;
    {
        const bool branch_taken_0x21ed64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ed64) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21ED6Cu;
    // 0x21ed6c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x21ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21ed70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21ed70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21ed74: 0x12800198  beqz        $s4, . + 4 + (0x198 << 2)
    ctx->pc = 0x21ED74u;
    {
        const bool branch_taken_0x21ed74 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ED78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED74u;
            // 0x21ed78: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed74) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21ED7Cu;
    // 0x21ed7c: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x21ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x21ed80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ed80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21ed88: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x21ed88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x21ed8c: 0x86a20028  lh          $v0, 0x28($s5)
    ctx->pc = 0x21ed8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x21ed90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21ed90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21ed94: 0xc065b44  jal         func_196D10
    ctx->pc = 0x21ED94u;
    SET_GPR_U32(ctx, 31, 0x21ED9Cu);
    ctx->pc = 0x21ED98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21ED94u;
            // 0x21ed98: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D10u;
    if (runtime->hasFunction(0x196D10u)) {
        auto targetFn = runtime->lookupFunction(0x196D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED9Cu; }
        if (ctx->pc != 0x21ED9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__11COMMON_GAGEFf_0x196d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21ED9Cu; }
        if (ctx->pc != 0x21ED9Cu) { return; }
    }
    ctx->pc = 0x21ED9Cu;
label_21ed9c:
    // 0x21ed9c: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x21ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x21eda0: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x21eda0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21eda4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x21eda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x21eda8: 0x1000018b  b           . + 4 + (0x18B << 2)
    ctx->pc = 0x21EDA8u;
    {
        const bool branch_taken_0x21eda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EDA8u;
            // 0x21edac: 0xae620098  sw          $v0, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eda8) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21EDB0u;
label_21edb0:
    // 0x21edb0: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21EDB0u;
    {
        const bool branch_taken_0x21edb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21EDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EDB0u;
            // 0x21edb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21edb0) {
            ctx->pc = 0x21EDD8u;
            goto label_21edd8;
        }
    }
    ctx->pc = 0x21EDB8u;
    // 0x21edb8: 0x12c20187  beq         $s6, $v0, . + 4 + (0x187 << 2)
    ctx->pc = 0x21EDB8u;
    {
        const bool branch_taken_0x21edb8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x21edb8) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21EDC0u;
    // 0x21edc0: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x21edc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21edc4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x21edc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21edc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x21edc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21edcc: 0x0  nop
    ctx->pc = 0x21edccu;
    // NOP
    // 0x21edd0: 0x45010181  bc1t        . + 4 + (0x181 << 2)
    ctx->pc = 0x21EDD0u;
    {
        const bool branch_taken_0x21edd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21edd0) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21EDD8u;
label_21edd8:
    // 0x21edd8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x21edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21eddc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x21eddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x21ede0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x21EDE0u;
    {
        const bool branch_taken_0x21ede0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ede0) {
            ctx->pc = 0x21EE50u;
            goto label_21ee50;
        }
    }
    ctx->pc = 0x21EDE8u;
    // 0x21ede8: 0x16c00019  bnez        $s6, . + 4 + (0x19 << 2)
    ctx->pc = 0x21EDE8u;
    {
        const bool branch_taken_0x21ede8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ede8) {
            ctx->pc = 0x21EE50u;
            goto label_21ee50;
        }
    }
    ctx->pc = 0x21EDF0u;
    // 0x21edf0: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x21edf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21edf4: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x21edf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21edf8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21edf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21edfc: 0x0  nop
    ctx->pc = 0x21edfcu;
    // NOP
    // 0x21ee00: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x21EE00u;
    {
        const bool branch_taken_0x21ee00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ee00) {
            ctx->pc = 0x21EE50u;
            goto label_21ee50;
        }
    }
    ctx->pc = 0x21EE08u;
    // 0x21ee08: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x21ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21ee0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21ee10: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x21EE10u;
    {
        const bool branch_taken_0x21ee10 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EE10u;
            // 0x21ee14: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee10) {
            ctx->pc = 0x21EE50u;
            goto label_21ee50;
        }
    }
    ctx->pc = 0x21EE18u;
    // 0x21ee18: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x21ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x21ee1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21ee1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ee20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21ee20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21ee24: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x21ee24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x21ee28: 0xc44000bc  lwc1        $f0, 0xBC($v0)
    ctx->pc = 0x21ee28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ee2c: 0xc065b44  jal         func_196D10
    ctx->pc = 0x21EE2Cu;
    SET_GPR_U32(ctx, 31, 0x21EE34u);
    ctx->pc = 0x21EE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EE2Cu;
            // 0x21ee30: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D10u;
    if (runtime->hasFunction(0x196D10u)) {
        auto targetFn = runtime->lookupFunction(0x196D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE34u; }
        if (ctx->pc != 0x21EE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__11COMMON_GAGEFf_0x196d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE34u; }
        if (ctx->pc != 0x21EE34u) { return; }
    }
    ctx->pc = 0x21EE34u;
label_21ee34:
    // 0x21ee34: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x21ee34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x21ee38: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x21ee38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21ee3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21ee40: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x21ee40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x21ee44: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x21ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x21ee48: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x21ee48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x21ee4c: 0xae620098  sw          $v0, 0x98($s3)
    ctx->pc = 0x21ee4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 2));
label_21ee50:
    // 0x21ee50: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x21ee50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21ee54: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x21ee54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x21ee58: 0xc0683ac  jal         func_1A0EB0
    ctx->pc = 0x21EE58u;
    SET_GPR_U32(ctx, 31, 0x21EE60u);
    ctx->pc = 0x21EE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21EE58u;
            // 0x21ee5c: 0x27a600dc  addiu       $a2, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EB0u;
    if (runtime->hasFunction(0x1A0EB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE60u; }
        if (ctx->pc != 0x21EE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertItemAttrToCharaAttr__FiPiPi_0x1a0eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE60u; }
        if (ctx->pc != 0x21EE60u) { return; }
    }
    ctx->pc = 0x21EE60u;
label_21ee60:
    // 0x21ee60: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x21ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x21ee64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21EE64u;
    {
        const bool branch_taken_0x21ee64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ee64) {
            ctx->pc = 0x21EE78u;
            goto label_21ee78;
        }
    }
    ctx->pc = 0x21EE6Cu;
    // 0x21ee6c: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x21ee6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x21ee70: 0x10400159  beqz        $v0, . + 4 + (0x159 << 2)
    ctx->pc = 0x21EE70u;
    {
        const bool branch_taken_0x21ee70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ee70) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21EE78u;
label_21ee78:
    // 0x21ee78: 0xc064268  jal         func_1909A0
    ctx->pc = 0x21EE78u;
    SET_GPR_U32(ctx, 31, 0x21EE80u);
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE80u; }
        if (ctx->pc != 0x21EE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21EE80u; }
        if (ctx->pc != 0x21EE80u) { return; }
    }
    ctx->pc = 0x21EE80u;
label_21ee80:
    // 0x21ee80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ee84: 0x10430154  beq         $v0, $v1, . + 4 + (0x154 << 2)
    ctx->pc = 0x21EE84u;
    {
        const bool branch_taken_0x21ee84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x21ee84) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21EE8Cu;
    // 0x21ee8c: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x21ee8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x21ee90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21ee90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ee94: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x21EE94u;
    {
        const bool branch_taken_0x21ee94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EE94u;
            // 0x21ee98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee94) {
            ctx->pc = 0x21EF58u;
            goto label_21ef58;
        }
    }
    ctx->pc = 0x21EE9Cu;
    // 0x21ee9c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x21ee9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eea0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21eea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eea4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x21eea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x21eea8: 0x24090384  addiu       $t1, $zero, 0x384
    ctx->pc = 0x21eea8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
    // 0x21eeac: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x21eeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_21eeb0:
    // 0x21eeb0: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x21eeb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21eeb4: 0x964a0008  lhu         $t2, 0x8($s2)
    ctx->pc = 0x21eeb4u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x21eeb8: 0x8ceb0000  lw          $t3, 0x0($a3)
    ctx->pc = 0x21eeb8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21eebc: 0x14b4024  and         $t0, $t2, $t3
    ctx->pc = 0x21eebcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & GPR_U64(ctx, 11));
    // 0x21eec0: 0x15000020  bnez        $t0, . + 4 + (0x20 << 2)
    ctx->pc = 0x21EEC0u;
    {
        const bool branch_taken_0x21eec0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x21eec0) {
            ctx->pc = 0x21EF44u;
            goto label_21ef44;
        }
    }
    ctx->pc = 0x21EEC8u;
    // 0x21eec8: 0x8fa800d8  lw          $t0, 0xD8($sp)
    ctx->pc = 0x21eec8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x21eecc: 0x150b001d  bne         $t0, $t3, . + 4 + (0x1D << 2)
    ctx->pc = 0x21EECCu;
    {
        const bool branch_taken_0x21eecc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 11));
        if (branch_taken_0x21eecc) {
            ctx->pc = 0x21EF44u;
            goto label_21ef44;
        }
    }
    ctx->pc = 0x21EED4u;
    // 0x21eed4: 0x1280001b  beqz        $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x21EED4u;
    {
        const bool branch_taken_0x21eed4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EED4u;
            // 0x21eed8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eed4) {
            ctx->pc = 0x21EF44u;
            goto label_21ef44;
        }
    }
    ctx->pc = 0x21EEDCu;
    // 0x21eedc: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x21eedcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x21eee0: 0x1484025  or          $t0, $t2, $t0
    ctx->pc = 0x21eee0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) | GPR_U64(ctx, 8));
    // 0x21eee4: 0xa6480008  sh          $t0, 0x8($s2)
    ctx->pc = 0x21eee4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 8));
    // 0x21eee8: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x21eee8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21eeec: 0x31080010  andi        $t0, $t0, 0x10
    ctx->pc = 0x21eeecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)16);
    // 0x21eef0: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21EEF0u;
    {
        const bool branch_taken_0x21eef0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EEF0u;
            // 0x21eef4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eef0) {
            ctx->pc = 0x21EEFCu;
            goto label_21eefc;
        }
    }
    ctx->pc = 0x21EEF8u;
    // 0x21eef8: 0xa649000c  sh          $t1, 0xC($s2)
    ctx->pc = 0x21eef8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 9));
label_21eefc:
    // 0x21eefc: 0x0  nop
    ctx->pc = 0x21eefcu;
    // NOP
    // 0x21ef00: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x21ef00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21ef04: 0x31080002  andi        $t0, $t0, 0x2
    ctx->pc = 0x21ef04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x21ef08: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21EF08u;
    {
        const bool branch_taken_0x21ef08 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ef08) {
            ctx->pc = 0x21EF14u;
            goto label_21ef14;
        }
    }
    ctx->pc = 0x21EF10u;
    // 0x21ef10: 0xa649000e  sh          $t1, 0xE($s2)
    ctx->pc = 0x21ef10u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 9));
label_21ef14:
    // 0x21ef14: 0x0  nop
    ctx->pc = 0x21ef14u;
    // NOP
    // 0x21ef18: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x21ef18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21ef1c: 0x31080008  andi        $t0, $t0, 0x8
    ctx->pc = 0x21ef1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)8);
    // 0x21ef20: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21EF20u;
    {
        const bool branch_taken_0x21ef20 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ef20) {
            ctx->pc = 0x21EF2Cu;
            goto label_21ef2c;
        }
    }
    ctx->pc = 0x21EF28u;
    // 0x21ef28: 0xa6490010  sh          $t1, 0x10($s2)
    ctx->pc = 0x21ef28u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 9));
label_21ef2c:
    // 0x21ef2c: 0x0  nop
    ctx->pc = 0x21ef2cu;
    // NOP
    // 0x21ef30: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x21ef30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21ef34: 0x30e70020  andi        $a3, $a3, 0x20
    ctx->pc = 0x21ef34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x21ef38: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x21EF38u;
    {
        const bool branch_taken_0x21ef38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ef38) {
            ctx->pc = 0x21EF44u;
            goto label_21ef44;
        }
    }
    ctx->pc = 0x21EF40u;
    // 0x21ef40: 0xa6490010  sh          $t1, 0x10($s2)
    ctx->pc = 0x21ef40u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 9));
label_21ef44:
    // 0x21ef44: 0x0  nop
    ctx->pc = 0x21ef44u;
    // NOP
    // 0x21ef48: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21ef48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21ef4c: 0x28a70007  slti        $a3, $a1, 0x7
    ctx->pc = 0x21ef4cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x21ef50: 0x14e0ffd7  bnez        $a3, . + 4 + (-0x29 << 2)
    ctx->pc = 0x21EF50u;
    {
        const bool branch_taken_0x21ef50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EF50u;
            // 0x21ef54: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef50) {
            ctx->pc = 0x21EEB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21eeb0;
        }
    }
    ctx->pc = 0x21EF58u;
label_21ef58:
    // 0x21ef58: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x21ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x21ef5c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x21EF5Cu;
    {
        const bool branch_taken_0x21ef5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EF60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EF5Cu;
            // 0x21ef60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef5c) {
            ctx->pc = 0x21EFDCu;
            goto label_21efdc;
        }
    }
    ctx->pc = 0x21EF64u;
    // 0x21ef64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21ef64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x21ef68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef6c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x21ef6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x21ef70: 0x24a50090  addiu       $a1, $a1, 0x90
    ctx->pc = 0x21ef70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
label_21ef74:
    // 0x21ef74: 0xa91021  addu        $v0, $a1, $t1
    ctx->pc = 0x21ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x21ef78: 0x96460008  lhu         $a2, 0x8($s2)
    ctx->pc = 0x21ef78u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x21ef7c: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x21ef7cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21ef80: 0xca1024  and         $v0, $a2, $t2
    ctx->pc = 0x21ef80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 10));
    // 0x21ef84: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21EF84u;
    {
        const bool branch_taken_0x21ef84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ef84) {
            ctx->pc = 0x21EFBCu;
            goto label_21efbc;
        }
    }
    ctx->pc = 0x21EF8Cu;
    // 0x21ef8c: 0x8fab00dc  lw          $t3, 0xDC($sp)
    ctx->pc = 0x21ef8cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x21ef90: 0x16a1024  and         $v0, $t3, $t2
    ctx->pc = 0x21ef90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x21ef94: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21EF94u;
    {
        const bool branch_taken_0x21ef94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ef94) {
            ctx->pc = 0x21EFBCu;
            goto label_21efbc;
        }
    }
    ctx->pc = 0x21EF9Cu;
    // 0x21ef9c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x21EF9Cu;
    {
        const bool branch_taken_0x21ef9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EF9Cu;
            // 0x21efa0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef9c) {
            ctx->pc = 0x21EFBCu;
            goto label_21efbc;
        }
    }
    ctx->pc = 0x21EFA4u;
    // 0x21efa4: 0x1601027  not         $v0, $t3
    ctx->pc = 0x21efa4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 11) | GPR_U64(ctx, 0)));
    // 0x21efa8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x21efa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21efac: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x21efacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21efb0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x21efb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21efb4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x21efb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x21efb8: 0xa6420008  sh          $v0, 0x8($s2)
    ctx->pc = 0x21efb8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 2));
label_21efbc:
    // 0x21efbc: 0x0  nop
    ctx->pc = 0x21efbcu;
    // NOP
    // 0x21efc0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21efc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21efc4: 0x29020007  slti        $v0, $t0, 0x7
    ctx->pc = 0x21efc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x21efc8: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x21EFC8u;
    {
        const bool branch_taken_0x21efc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21EFC8u;
            // 0x21efcc: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21efc8) {
            ctx->pc = 0x21EF74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21ef74;
        }
    }
    ctx->pc = 0x21EFD0u;
    // 0x21efd0: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x21EFD0u;
    {
        const bool branch_taken_0x21efd0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x21efd0) {
            ctx->pc = 0x21EFDCu;
            goto label_21efdc;
        }
    }
    ctx->pc = 0x21EFD8u;
    // 0x21efd8: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x21efd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_21efdc:
    // 0x21efdc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x21EFDCu;
    {
        const bool branch_taken_0x21efdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21efdc) {
            ctx->pc = 0x21EFF0u;
            goto label_21eff0;
        }
    }
    ctx->pc = 0x21EFE4u;
    // 0x21efe4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x21efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21efe8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21efec: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x21efecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_21eff0:
    // 0x21eff0: 0x128000f9  beqz        $s4, . + 4 + (0xF9 << 2)
    ctx->pc = 0x21EFF0u;
    {
        const bool branch_taken_0x21eff0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x21eff0) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21EFF8u;
    // 0x21eff8: 0x108000f7  beqz        $a0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x21EFF8u;
    {
        const bool branch_taken_0x21eff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21eff8) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F000u;
    // 0x21f000: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x21f000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x21f004: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x21f004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x21f008: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21F008u;
    {
        const bool branch_taken_0x21f008 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x21F00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F008u;
            // 0x21f00c: 0xae620098  sw          $v0, 0x98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f008) {
            ctx->pc = 0x21F030u;
            goto label_21f030;
        }
    }
    ctx->pc = 0x21F010u;
    // 0x21f010: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x21f010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x21f014: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x21f014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x21f018: 0x24050056  addiu       $a1, $zero, 0x56
    ctx->pc = 0x21f018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x21f01c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21f01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f020: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x21f020u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x21f024: 0x8c24c4d0  lw          $a0, -0x3B30($at)
    ctx->pc = 0x21f024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
    // 0x21f028: 0xc063818  jal         func_18E060
    ctx->pc = 0x21F028u;
    SET_GPR_U32(ctx, 31, 0x21F030u);
    ctx->pc = 0x21F02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F028u;
            // 0x21f02c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F030u; }
        if (ctx->pc != 0x21F030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F030u; }
        if (ctx->pc != 0x21F030u) { return; }
    }
    ctx->pc = 0x21F030u;
label_21f030:
    // 0x21f030: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x21f030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x21f034: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21f034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f038: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x21F038u;
    {
        const bool branch_taken_0x21f038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F038u;
            // 0x21f03c: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f038) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F040u;
label_21f040:
    // 0x21f040: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x21f040u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x21f044: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x21f044u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x21f048: 0x184000e3  blez        $v0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x21F048u;
    {
        const bool branch_taken_0x21f048 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21f048) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F050u;
    // 0x21f050: 0x97a200b8  lhu         $v0, 0xB8($sp)
    ctx->pc = 0x21f050u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x21f054: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x21f054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x21f058: 0x104000df  beqz        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x21F058u;
    {
        const bool branch_taken_0x21f058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f058) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F060u;
    // 0x21f060: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F060u;
    {
        const bool branch_taken_0x21f060 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F060u;
            // 0x21f064: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f060) {
            ctx->pc = 0x21F070u;
            goto label_21f070;
        }
    }
    ctx->pc = 0x21F068u;
    // 0x21f068: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x21F068u;
    {
        const bool branch_taken_0x21f068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f068) {
            ctx->pc = 0x21F414u;
            goto label_21f414;
        }
    }
    ctx->pc = 0x21F070u;
label_21f070:
    // 0x21f070: 0x8f84932c  lw          $a0, -0x6CD4($gp)
    ctx->pc = 0x21f070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939436)));
    // 0x21f074: 0x24020127  addiu       $v0, $zero, 0x127
    ctx->pc = 0x21f074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 295));
    // 0x21f078: 0x14820018  bne         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x21F078u;
    {
        const bool branch_taken_0x21f078 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21F07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F078u;
            // 0x21f07c: 0x240201a7  addiu       $v0, $zero, 0x1A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 423));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f078) {
            ctx->pc = 0x21F0DCu;
            goto label_21f0dc;
        }
    }
    ctx->pc = 0x21F080u;
    // 0x21f080: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x21f080u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x21f084: 0x144300d4  bne         $v0, $v1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x21F084u;
    {
        const bool branch_taken_0x21f084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21F088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F084u;
            // 0x21f088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f084) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F08Cu;
    // 0x21f08c: 0xc066168  jal         func_1985A0
    ctx->pc = 0x21F08Cu;
    SET_GPR_U32(ctx, 31, 0x21F094u);
    ctx->pc = 0x1985A0u;
    if (runtime->hasFunction(0x1985A0u)) {
        auto targetFn = runtime->lookupFunction(0x1985A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F094u; }
        if (ctx->pc != 0x21F094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsLevelUp__13CGameDataUsedFv_0x1985a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F094u; }
        if (ctx->pc != 0x21F094u) { return; }
    }
    ctx->pc = 0x21F094u;
label_21f094:
    // 0x21f094: 0x144000d0  bnez        $v0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x21F094u;
    {
        const bool branch_taken_0x21f094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F094u;
            // 0x21f098: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f094) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F09Cu;
    // 0x21f09c: 0xc0664ac  jal         func_1992B0
    ctx->pc = 0x21F09Cu;
    SET_GPR_U32(ctx, 31, 0x21F0A4u);
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F0A4u; }
        if (ctx->pc != 0x21F0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F0A4u; }
        if (ctx->pc != 0x21F0A4u) { return; }
    }
    ctx->pc = 0x21F0A4u;
label_21f0a4:
    // 0x21f0a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21f0a8: 0x104300cb  beq         $v0, $v1, . + 4 + (0xCB << 2)
    ctx->pc = 0x21F0A8u;
    {
        const bool branch_taken_0x21f0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x21f0a8) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F0B0u;
    // 0x21f0b0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x21f0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21f0b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f0b8: 0x128000c7  beqz        $s4, . + 4 + (0xC7 << 2)
    ctx->pc = 0x21F0B8u;
    {
        const bool branch_taken_0x21f0b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F0B8u;
            // 0x21f0bc: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0b8) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F0C0u;
    // 0x21f0c0: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x21f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x21f0c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21f0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21f0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f0cc: 0xc066188  jal         func_198620
    ctx->pc = 0x21F0CCu;
    SET_GPR_U32(ctx, 31, 0x21F0D4u);
    ctx->pc = 0x21F0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F0CCu;
            // 0x21f0d0: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198620u;
    if (runtime->hasFunction(0x198620u)) {
        auto targetFn = runtime->lookupFunction(0x198620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F0D4u; }
        if (ctx->pc != 0x21F0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LevelUp__13CGameDataUsedFv_0x198620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F0D4u; }
        if (ctx->pc != 0x21F0D4u) { return; }
    }
    ctx->pc = 0x21F0D4u;
label_21f0d4:
    // 0x21f0d4: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x21F0D4u;
    {
        const bool branch_taken_0x21f0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F0D4u;
            // 0x21f0d8: 0x2410001e  addiu       $s0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0d4) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F0DCu;
label_21f0dc:
    // 0x21f0dc: 0x14820009  bne         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x21F0DCu;
    {
        const bool branch_taken_0x21f0dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21F0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F0DCu;
            // 0x21f0e0: 0x2402017d  addiu       $v0, $zero, 0x17D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 381));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0dc) {
            ctx->pc = 0x21F104u;
            goto label_21f104;
        }
    }
    ctx->pc = 0x21F0E4u;
    // 0x21f0e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21f0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0e8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21f0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0ec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x21f0ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0f0: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x21f0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x21f0f4: 0xc0879fc  jal         func_21E7F0
    ctx->pc = 0x21F0F4u;
    SET_GPR_U32(ctx, 31, 0x21F0FCu);
    ctx->pc = 0x21F0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F0F4u;
            // 0x21f0f8: 0x27a800d4  addiu       $t0, $sp, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E7F0u;
    if (runtime->hasFunction(0x21E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x21E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F0FCu; }
        if (ctx->pc != 0x21F0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckRoboShieldKit__FP16CUserDataManagerP13CGameDataUsediPiPi_0x21e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F0FCu; }
        if (ctx->pc != 0x21F0FCu) { return; }
    }
    ctx->pc = 0x21F0FCu;
label_21f0fc:
    // 0x21f0fc: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x21F0FCu;
    {
        const bool branch_taken_0x21f0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F0FCu;
            // 0x21f100: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0fc) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F104u;
label_21f104:
    // 0x21f104: 0x1482001c  bne         $a0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x21F104u;
    {
        const bool branch_taken_0x21f104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21F108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F104u;
            // 0x21f108: 0x26224768  addiu       $v0, $s1, 0x4768 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 18280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f104) {
            ctx->pc = 0x21F178u;
            goto label_21f178;
        }
    }
    ctx->pc = 0x21F10Cu;
    // 0x21f10c: 0x164200b2  bne         $s2, $v0, . + 4 + (0xB2 << 2)
    ctx->pc = 0x21F10Cu;
    {
        const bool branch_taken_0x21f10c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x21f10c) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F114u;
    // 0x21f114: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x21f114u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21f118: 0xc066a0c  jal         func_19A830
    ctx->pc = 0x21F118u;
    SET_GPR_U32(ctx, 31, 0x21F120u);
    ctx->pc = 0x21F11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F118u;
            // 0x21f11c: 0x26244660  addiu       $a0, $s1, 0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 18016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A830u;
    if (runtime->hasFunction(0x19A830u)) {
        auto targetFn = runtime->lookupFunction(0x19A830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F120u; }
        if (ctx->pc != 0x21F120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__9ROBO_DATAFf_0x19a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F120u; }
        if (ctx->pc != 0x21F120u) { return; }
    }
    ctx->pc = 0x21F120u;
label_21f120:
    // 0x21f120: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21f120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21f124: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21f124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f128: 0x0  nop
    ctx->pc = 0x21f128u;
    // NOP
    // 0x21f12c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21f12cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f130: 0x0  nop
    ctx->pc = 0x21f130u;
    // NOP
    // 0x21f134: 0x450000a8  bc1f        . + 4 + (0xA8 << 2)
    ctx->pc = 0x21F134u;
    {
        const bool branch_taken_0x21f134 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f134) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F13Cu;
    // 0x21f13c: 0x16e000a6  bnez        $s7, . + 4 + (0xA6 << 2)
    ctx->pc = 0x21F13Cu;
    {
        const bool branch_taken_0x21f13c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f13c) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F144u;
    // 0x21f144: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x21f144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21f148: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21f148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f14c: 0x128000a2  beqz        $s4, . + 4 + (0xA2 << 2)
    ctx->pc = 0x21F14Cu;
    {
        const bool branch_taken_0x21f14c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F14Cu;
            // 0x21f150: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f14c) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F154u;
    // 0x21f154: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x21f154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x21f158: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21f158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21f15c: 0xc066a0c  jal         func_19A830
    ctx->pc = 0x21F15Cu;
    SET_GPR_U32(ctx, 31, 0x21F164u);
    ctx->pc = 0x21F160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F15Cu;
            // 0x21f160: 0x26244660  addiu       $a0, $s1, 0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 18016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A830u;
    if (runtime->hasFunction(0x19A830u)) {
        auto targetFn = runtime->lookupFunction(0x19A830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F164u; }
        if (ctx->pc != 0x21F164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__9ROBO_DATAFf_0x19a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F164u; }
        if (ctx->pc != 0x21F164u) { return; }
    }
    ctx->pc = 0x21F164u;
label_21f164:
    // 0x21f164: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x21f164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x21f168: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x21f168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21f16c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f170: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x21F170u;
    {
        const bool branch_taken_0x21f170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F170u;
            // 0x21f174: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f170) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F178u;
label_21f178:
    // 0x21f178: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x21f178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21f17c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x21f17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x21f180: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x21F180u;
    {
        const bool branch_taken_0x21f180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F180u;
            // 0x21f184: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f180) {
            ctx->pc = 0x21F20Cu;
            goto label_21f20c;
        }
    }
    ctx->pc = 0x21F188u;
    // 0x21f188: 0xc066060  jal         func_198180
    ctx->pc = 0x21F188u;
    SET_GPR_U32(ctx, 31, 0x21F190u);
    ctx->pc = 0x198180u;
    if (runtime->hasFunction(0x198180u)) {
        auto targetFn = runtime->lookupFunction(0x198180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F190u; }
        if (ctx->pc != 0x21F190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsRepair__13CGameDataUsedFv_0x198180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F190u; }
        if (ctx->pc != 0x21F190u) { return; }
    }
    ctx->pc = 0x21F190u;
label_21f190:
    // 0x21f190: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x21F190u;
    {
        const bool branch_taken_0x21f190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f190) {
            ctx->pc = 0x21F20Cu;
            goto label_21f20c;
        }
    }
    ctx->pc = 0x21F198u;
    // 0x21f198: 0x8f85932c  lw          $a1, -0x6CD4($gp)
    ctx->pc = 0x21f198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939436)));
    // 0x21f19c: 0xc0660d8  jal         func_198360
    ctx->pc = 0x21F19Cu;
    SET_GPR_U32(ctx, 31, 0x21F1A4u);
    ctx->pc = 0x21F1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F19Cu;
            // 0x21f1a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198360u;
    if (runtime->hasFunction(0x198360u)) {
        auto targetFn = runtime->lookupFunction(0x198360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F1A4u; }
        if (ctx->pc != 0x21F1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsEnableUseRepair__13CGameDataUsedFi_0x198360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F1A4u; }
        if (ctx->pc != 0x21F1A4u) { return; }
    }
    ctx->pc = 0x21F1A4u;
label_21f1a4:
    // 0x21f1a4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x21F1A4u;
    {
        const bool branch_taken_0x21f1a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f1a4) {
            ctx->pc = 0x21F20Cu;
            goto label_21f20c;
        }
    }
    ctx->pc = 0x21F1ACu;
    // 0x21f1ac: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x21f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21f1b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21f1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f1b4: 0x12800015  beqz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x21F1B4u;
    {
        const bool branch_taken_0x21f1b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F1B4u;
            // 0x21f1b8: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1b4) {
            ctx->pc = 0x21F20Cu;
            goto label_21f20c;
        }
    }
    ctx->pc = 0x21F1BCu;
    // 0x21f1bc: 0x82460004  lb          $a2, 0x4($s2)
    ctx->pc = 0x21f1bcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x21f1c0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x21f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x21f1c4: 0x14c3000a  bne         $a2, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x21F1C4u;
    {
        const bool branch_taken_0x21f1c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x21F1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F1C4u;
            // 0x21f1c8: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1c4) {
            ctx->pc = 0x21F1F0u;
            goto label_21f1f0;
        }
    }
    ctx->pc = 0x21F1CCu;
    // 0x21f1cc: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x21f1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f1d0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x21f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x21f1d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21f1d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f1d8: 0x0  nop
    ctx->pc = 0x21f1d8u;
    // NOP
    // 0x21f1dc: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x21f1dcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x21f1e0: 0x0  nop
    ctx->pc = 0x21f1e0u;
    // NOP
    // 0x21f1e4: 0x0  nop
    ctx->pc = 0x21f1e4u;
    // NOP
    // 0x21f1e8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x21F1E8u;
    SET_GPR_U32(ctx, 31, 0x21F1F0u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F1F0u; }
        if (ctx->pc != 0x21F1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F1F0u; }
        if (ctx->pc != 0x21F1F0u) { return; }
    }
    ctx->pc = 0x21F1F0u;
label_21f1f0:
    // 0x21f1f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21f1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1f4: 0xc06609c  jal         func_198270
    ctx->pc = 0x21F1F4u;
    SET_GPR_U32(ctx, 31, 0x21F1FCu);
    ctx->pc = 0x21F1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F1F4u;
            // 0x21f1f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198270u;
    if (runtime->hasFunction(0x198270u)) {
        auto targetFn = runtime->lookupFunction(0x198270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F1FCu; }
        if (ctx->pc != 0x21F1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Repair__13CGameDataUsedFi_0x198270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F1FCu; }
        if (ctx->pc != 0x21F1FCu) { return; }
    }
    ctx->pc = 0x21F1FCu;
label_21f1fc:
    // 0x21f1fc: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x21f1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x21f200: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x21f200u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21f204: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21f204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f208: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x21f208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_21f20c:
    // 0x21f20c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x21f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21f210: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x21f210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x21f214: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x21F214u;
    {
        const bool branch_taken_0x21f214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f214) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F21Cu;
    // 0x21f21c: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x21f21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f220: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x21f220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f224: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21f224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f228: 0x0  nop
    ctx->pc = 0x21f228u;
    // NOP
    // 0x21f22c: 0x4500006a  bc1f        . + 4 + (0x6A << 2)
    ctx->pc = 0x21F22Cu;
    {
        const bool branch_taken_0x21f22c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f22c) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F234u;
    // 0x21f234: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x21f234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21f238: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21f238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f23c: 0x12800066  beqz        $s4, . + 4 + (0x66 << 2)
    ctx->pc = 0x21F23Cu;
    {
        const bool branch_taken_0x21f23c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F23Cu;
            // 0x21f240: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f23c) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F244u;
    // 0x21f244: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x21f244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f248: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x21f248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21f24c: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x21f24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x21f250: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x21f250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x21f254: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21f254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f258: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x21F258u;
    {
        const bool branch_taken_0x21f258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F258u;
            // 0x21f25c: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f258) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F260u;
label_21f260:
    // 0x21f260: 0x97a200b8  lhu         $v0, 0xB8($sp)
    ctx->pc = 0x21f260u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x21f264: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x21f264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x21f268: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x21F268u;
    {
        const bool branch_taken_0x21f268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f268) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F270u;
    // 0x21f270: 0x8f83932c  lw          $v1, -0x6CD4($gp)
    ctx->pc = 0x21f270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939436)));
    // 0x21f274: 0x2402017d  addiu       $v0, $zero, 0x17D
    ctx->pc = 0x21f274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 381));
    // 0x21f278: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x21F278u;
    {
        const bool branch_taken_0x21f278 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x21F27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F278u;
            // 0x21f27c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f278) {
            ctx->pc = 0x21F2E4u;
            goto label_21f2e4;
        }
    }
    ctx->pc = 0x21F280u;
    // 0x21f280: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x21f280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21f284: 0xc066a0c  jal         func_19A830
    ctx->pc = 0x21F284u;
    SET_GPR_U32(ctx, 31, 0x21F28Cu);
    ctx->pc = 0x21F288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F284u;
            // 0x21f288: 0x26244660  addiu       $a0, $s1, 0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 18016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A830u;
    if (runtime->hasFunction(0x19A830u)) {
        auto targetFn = runtime->lookupFunction(0x19A830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F28Cu; }
        if (ctx->pc != 0x21F28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__9ROBO_DATAFf_0x19a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F28Cu; }
        if (ctx->pc != 0x21F28Cu) { return; }
    }
    ctx->pc = 0x21F28Cu;
label_21f28c:
    // 0x21f28c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21f28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x21f290: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21f290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21f294: 0x0  nop
    ctx->pc = 0x21f294u;
    // NOP
    // 0x21f298: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x21f298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f29c: 0x0  nop
    ctx->pc = 0x21f29cu;
    // NOP
    // 0x21f2a0: 0x4500004d  bc1f        . + 4 + (0x4D << 2)
    ctx->pc = 0x21F2A0u;
    {
        const bool branch_taken_0x21f2a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f2a0) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F2A8u;
    // 0x21f2a8: 0x16e0004b  bnez        $s7, . + 4 + (0x4B << 2)
    ctx->pc = 0x21F2A8u;
    {
        const bool branch_taken_0x21f2a8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f2a8) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F2B0u;
    // 0x21f2b0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x21f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21f2b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f2b8: 0x12800047  beqz        $s4, . + 4 + (0x47 << 2)
    ctx->pc = 0x21F2B8u;
    {
        const bool branch_taken_0x21f2b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F2B8u;
            // 0x21f2bc: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f2b8) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F2C0u;
    // 0x21f2c0: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x21f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x21f2c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21f2c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21f2c8: 0xc066a0c  jal         func_19A830
    ctx->pc = 0x21F2C8u;
    SET_GPR_U32(ctx, 31, 0x21F2D0u);
    ctx->pc = 0x21F2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F2C8u;
            // 0x21f2cc: 0x26244660  addiu       $a0, $s1, 0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 18016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19A830u;
    if (runtime->hasFunction(0x19A830u)) {
        auto targetFn = runtime->lookupFunction(0x19A830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F2D0u; }
        if (ctx->pc != 0x21F2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__9ROBO_DATAFf_0x19a830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F2D0u; }
        if (ctx->pc != 0x21F2D0u) { return; }
    }
    ctx->pc = 0x21F2D0u;
label_21f2d0:
    // 0x21f2d0: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x21f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x21f2d4: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x21f2d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21f2d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f2dc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x21F2DCu;
    {
        const bool branch_taken_0x21f2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F2DCu;
            // 0x21f2e0: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f2dc) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F2E4u;
label_21f2e4:
    // 0x21f2e4: 0x16e0003c  bnez        $s7, . + 4 + (0x3C << 2)
    ctx->pc = 0x21F2E4u;
    {
        const bool branch_taken_0x21f2e4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x21f2e4) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F2ECu;
    // 0x21f2ec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x21f2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21f2f0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x21f2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x21f2f4: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x21F2F4u;
    {
        const bool branch_taken_0x21f2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f2f4) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F2FCu;
    // 0x21f2fc: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x21f2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f300: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x21f300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f304: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21f304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f308: 0x0  nop
    ctx->pc = 0x21f308u;
    // NOP
    // 0x21f30c: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x21F30Cu;
    {
        const bool branch_taken_0x21f30c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f30c) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F314u;
    // 0x21f314: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x21f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21f318: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21f318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f31c: 0x1280002e  beqz        $s4, . + 4 + (0x2E << 2)
    ctx->pc = 0x21F31Cu;
    {
        const bool branch_taken_0x21f31c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F31Cu;
            // 0x21f320: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f31c) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F324u;
    // 0x21f324: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x21f324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f328: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x21f328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21f32c: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x21f32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x21f330: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x21f330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x21f334: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21f334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f338: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x21F338u;
    {
        const bool branch_taken_0x21f338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F338u;
            // 0x21f33c: 0xafa200d4  sw          $v0, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f338) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F340u;
label_21f340:
    // 0x21f340: 0x9662000c  lhu         $v0, 0xC($s3)
    ctx->pc = 0x21f340u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x21f344: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x21f344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x21f348: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x21F348u;
    {
        const bool branch_taken_0x21f348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F348u;
            // 0x21f34c: 0x3c010004  lui         $at, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f348) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F350u;
    // 0x21f350: 0x2210821  addu        $at, $s1, $at
    ctx->pc = 0x21f350u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x21f354: 0x84254d98  lh          $a1, 0x4D98($at)
    ctx->pc = 0x21f354u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19864)));
    // 0x21f358: 0xc0670c0  jal         func_19C300
    ctx->pc = 0x21F358u;
    SET_GPR_U32(ctx, 31, 0x21F360u);
    ctx->pc = 0x21F35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F358u;
            // 0x21f35c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C300u;
    if (runtime->hasFunction(0x19C300u)) {
        auto targetFn = runtime->lookupFunction(0x19C300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F360u; }
        if (ctx->pc != 0x21F360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBajjiDataPtrMosId__16CUserDataManagerFi_0x19c300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F360u; }
        if (ctx->pc != 0x21F360u) { return; }
    }
    ctx->pc = 0x21F360u;
label_21f360:
    // 0x21f360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21f360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f364: 0xc066d24  jal         func_19B490
    ctx->pc = 0x21F364u;
    SET_GPR_U32(ctx, 31, 0x21F36Cu);
    ctx->pc = 0x21F368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F364u;
            // 0x21f368: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F36Cu; }
        if (ctx->pc != 0x21F36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F36Cu; }
        if (ctx->pc != 0x21F36Cu) { return; }
    }
    ctx->pc = 0x21F36Cu;
label_21f36c:
    // 0x21f36c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x21f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21f370: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x21f370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x21f374: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x21F374u;
    {
        const bool branch_taken_0x21f374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f374) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F37Cu;
    // 0x21f37c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x21F37Cu;
    {
        const bool branch_taken_0x21f37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21f37c) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F384u;
    // 0x21f384: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x21f384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21f388: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x21f388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f38c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21f38cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21f390: 0x0  nop
    ctx->pc = 0x21f390u;
    // NOP
    // 0x21f394: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x21F394u;
    {
        const bool branch_taken_0x21f394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21f394) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F39Cu;
    // 0x21f39c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x21f39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21f3a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21f3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21f3a4: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x21F3A4u;
    {
        const bool branch_taken_0x21f3a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F3A4u;
            // 0x21f3a8: 0xafa300d0  sw          $v1, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3a4) {
            ctx->pc = 0x21F3D8u;
            goto label_21f3d8;
        }
    }
    ctx->pc = 0x21F3ACu;
    // 0x21f3ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21f3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f3b0: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x21f3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x21f3b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21f3b8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x21f3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x21f3bc: 0xc44000bc  lwc1        $f0, 0xBC($v0)
    ctx->pc = 0x21f3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21f3c0: 0xc065b44  jal         func_196D10
    ctx->pc = 0x21F3C0u;
    SET_GPR_U32(ctx, 31, 0x21F3C8u);
    ctx->pc = 0x21F3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F3C0u;
            // 0x21f3c4: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x196D10u;
    if (runtime->hasFunction(0x196D10u)) {
        auto targetFn = runtime->lookupFunction(0x196D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F3C8u; }
        if (ctx->pc != 0x21F3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddPoint__11COMMON_GAGEFf_0x196d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F3C8u; }
        if (ctx->pc != 0x21F3C8u) { return; }
    }
    ctx->pc = 0x21F3C8u;
label_21f3c8:
    // 0x21f3c8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x21f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x21f3cc: 0x2410000a  addiu       $s0, $zero, 0xA
    ctx->pc = 0x21f3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x21f3d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21f3d4: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x21f3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_21f3d8:
    // 0x21f3d8: 0x8fa200d4  lw          $v0, 0xD4($sp)
    ctx->pc = 0x21f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
label_21f3dc:
    // 0x21f3dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F3DCu;
    {
        const bool branch_taken_0x21f3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F3DCu;
            // 0x21f3e0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3dc) {
            ctx->pc = 0x21F3F4u;
            goto label_21f3f4;
        }
    }
    ctx->pc = 0x21F3E4u;
    // 0x21f3e4: 0xc065f4c  jal         func_197D30
    ctx->pc = 0x21F3E4u;
    SET_GPR_U32(ctx, 31, 0x21F3ECu);
    ctx->pc = 0x21F3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F3E4u;
            // 0x21f3e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F3ECu; }
        if (ctx->pc != 0x21F3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F3ECu; }
        if (ctx->pc != 0x21F3ECu) { return; }
    }
    ctx->pc = 0x21F3ECu;
label_21f3ec:
    // 0x21f3ec: 0xc094274  jal         func_2509D0
    ctx->pc = 0x21F3ECu;
    SET_GPR_U32(ctx, 31, 0x21F3F4u);
    ctx->pc = 0x21F3F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21F3ECu;
            // 0x21f3f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F3F4u; }
        if (ctx->pc != 0x21F3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F3F4u; }
        if (ctx->pc != 0x21F3F4u) { return; }
    }
    ctx->pc = 0x21F3F4u;
label_21f3f4:
    // 0x21f3f4: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F3F4u;
    {
        const bool branch_taken_0x21f3f4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F3F4u;
            // 0x21f3f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3f4) {
            ctx->pc = 0x21F404u;
            goto label_21f404;
        }
    }
    ctx->pc = 0x21F3FCu;
    // 0x21f3fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21F3FCu;
    {
        const bool branch_taken_0x21f3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F3FCu;
            // 0x21f400: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3fc) {
            ctx->pc = 0x21F414u;
            goto label_21f414;
        }
    }
    ctx->pc = 0x21F404u;
label_21f404:
    // 0x21f404: 0x16820003  bne         $s4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21F404u;
    {
        const bool branch_taken_0x21f404 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x21F408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F404u;
            // 0x21f408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f404) {
            ctx->pc = 0x21F414u;
            goto label_21f414;
        }
    }
    ctx->pc = 0x21F40Cu;
    // 0x21f40c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x21F40Cu;
    {
        const bool branch_taken_0x21f40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F40Cu;
            // 0x21f410: 0x8fa200d4  lw          $v0, 0xD4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f40c) {
            ctx->pc = 0x21F414u;
            goto label_21f414;
        }
    }
    ctx->pc = 0x21F414u;
label_21f414:
    // 0x21f414: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x21f414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_21f418:
    // 0x21f418: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x21f418u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21f41c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x21f41cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21f420: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21f420u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21f424: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21f424u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21f428: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x21f428u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21f42c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21f42cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21f430: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x21f430u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21f434: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21f434u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f438: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21f438u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f43c: 0x3e00008  jr          $ra
    ctx->pc = 0x21F43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21F43Cu;
            // 0x21f440: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F444u;
}
