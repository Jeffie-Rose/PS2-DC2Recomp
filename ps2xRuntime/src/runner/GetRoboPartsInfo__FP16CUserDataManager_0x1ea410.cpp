#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRoboPartsInfo__FP16CUserDataManager
// Address: 0x1ea410 - 0x1ea6ac
void GetRoboPartsInfo__FP16CUserDataManager_0x1ea410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRoboPartsInfo__FP16CUserDataManager_0x1ea410");
#endif

    switch (ctx->pc) {
        case 0x1ea444u: goto label_1ea444;
        case 0x1ea468u: goto label_1ea468;
        case 0x1ea494u: goto label_1ea494;
        case 0x1ea4c8u: goto label_1ea4c8;
        case 0x1ea4d4u: goto label_1ea4d4;
        case 0x1ea538u: goto label_1ea538;
        case 0x1ea548u: goto label_1ea548;
        case 0x1ea55cu: goto label_1ea55c;
        case 0x1ea568u: goto label_1ea568;
        case 0x1ea5a4u: goto label_1ea5a4;
        case 0x1ea5ccu: goto label_1ea5cc;
        case 0x1ea630u: goto label_1ea630;
        case 0x1ea650u: goto label_1ea650;
        case 0x1ea664u: goto label_1ea664;
        case 0x1ea670u: goto label_1ea670;
        default: break;
    }

    ctx->pc = 0x1ea410u;

    // 0x1ea410: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1ea410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1ea414: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1ea414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1ea418: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ea418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1ea41c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ea41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1ea420: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ea420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1ea424: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1ea424u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea428: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ea428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1ea42c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ea42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ea430: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ea430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ea434: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ea434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ea438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ea43c: 0xc06517c  jal         func_1945F0
    ctx->pc = 0x1EA43Cu;
    SET_GPR_U32(ctx, 31, 0x1EA444u);
    ctx->pc = 0x1EA440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA43Cu;
            // 0x1ea440: 0x26d14660  addiu       $s1, $s6, 0x4660 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 18016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1945F0u;
    if (runtime->hasFunction(0x1945F0u)) {
        auto targetFn = runtime->lookupFunction(0x1945F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA444u; }
        if (ctx->pc != 0x1EA444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGameDataPt__Fv_0x1945f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA444u; }
        if (ctx->pc != 0x1EA444u) { return; }
    }
    ctx->pc = 0x1EA444u;
label_1ea444:
    // 0x1ea444: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1ea444u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea448: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1ea448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ea44c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1ea44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1ea450: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ea450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea454: 0x2442db40  addiu       $v0, $v0, -0x24C0
    ctx->pc = 0x1ea454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957888));
    // 0x1ea458: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ea458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea45c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1ea45cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea460: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ea460u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea464: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1ea464u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1ea468:
    // 0x1ea468: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x1ea468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1ea46c: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x1ea46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x1ea470: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1ea470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1ea474: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1ea474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea478: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ea478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ea47c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ea47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea480: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ea480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea484: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ea484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ea488: 0x84440032  lh          $a0, 0x32($v0)
    ctx->pc = 0x1ea488u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
    // 0x1ea48c: 0xc065714  jal         func_195C50
    ctx->pc = 0x1EA48Cu;
    SET_GPR_U32(ctx, 31, 0x1EA494u);
    ctx->pc = 0x1EA490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA48Cu;
            // 0x1ea490: 0x24540032  addiu       $s4, $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C50u;
    if (runtime->hasFunction(0x195C50u)) {
        auto targetFn = runtime->lookupFunction(0x195C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA494u; }
        if (ctx->pc != 0x1EA494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboPartInfoData__Fi_0x195c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA494u; }
        if (ctx->pc != 0x1EA494u) { return; }
    }
    ctx->pc = 0x1EA494u;
label_1ea494:
    // 0x1ea494: 0x25d2021  addu        $a0, $s2, $sp
    ctx->pc = 0x1ea494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x1ea498: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1ea498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x1ea49c: 0x24638d40  addiu       $v1, $v1, -0x72C0
    ctx->pc = 0x1ea49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937920));
    // 0x1ea4a0: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x1ea4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x1ea4a4: 0x73a821  addu        $s5, $v1, $s3
    ctx->pc = 0x1ea4a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x1ea4a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1ea4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1ea4ac: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x1ea4acu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ea4b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ea4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ea4b4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EA4B4u;
    {
        const bool branch_taken_0x1ea4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea4b4) {
            ctx->pc = 0x1EA4D4u;
            goto label_1ea4d4;
        }
    }
    ctx->pc = 0x1EA4BCu;
    // 0x1ea4bc: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x1ea4bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ea4c0: 0xc06571c  jal         func_195C70
    ctx->pc = 0x1EA4C0u;
    SET_GPR_U32(ctx, 31, 0x1EA4C8u);
    ctx->pc = 0x1EA4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA4C0u;
            // 0x1ea4c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C70u;
    if (runtime->hasFunction(0x195C70u)) {
        auto targetFn = runtime->lookupFunction(0x195C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4C8u; }
        if (ctx->pc != 0x1EA4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFileName__Fii_0x195c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4C8u; }
        if (ctx->pc != 0x1EA4C8u) { return; }
    }
    ctx->pc = 0x1EA4C8u;
label_1ea4c8:
    // 0x1ea4c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1ea4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea4cc: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1EA4CCu;
    SET_GPR_U32(ctx, 31, 0x1EA4D4u);
    ctx->pc = 0x1EA4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA4CCu;
            // 0x1ea4d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4D4u; }
        if (ctx->pc != 0x1EA4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA4D4u; }
        if (ctx->pc != 0x1EA4D4u) { return; }
    }
    ctx->pc = 0x1EA4D4u;
label_1ea4d4:
    // 0x1ea4d4: 0x0  nop
    ctx->pc = 0x1ea4d4u;
    // NOP
    // 0x1ea4d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ea4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ea4dc: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x1ea4dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ea4e0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1ea4e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1ea4e4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1EA4E4u;
    {
        const bool branch_taken_0x1ea4e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA4E4u;
            // 0x1ea4e8: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea4e4) {
            ctx->pc = 0x1EA468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ea468;
        }
    }
    ctx->pc = 0x1EA4ECu;
    // 0x1ea4ec: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1ea4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x1ea4f0: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1ea4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1ea4f4: 0x24638d40  addiu       $v1, $v1, -0x72C0
    ctx->pc = 0x1ea4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937920));
    // 0x1ea4f8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ea4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ea4fc: 0xac238d10  sw          $v1, -0x72F0($at)
    ctx->pc = 0x1ea4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937872), GPR_U32(ctx, 3));
    // 0x1ea500: 0x24428d50  addiu       $v0, $v0, -0x72B0
    ctx->pc = 0x1ea500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937936));
    // 0x1ea504: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ea504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ea508: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1ea508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x1ea50c: 0xac228d14  sw          $v0, -0x72EC($at)
    ctx->pc = 0x1ea50cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937876), GPR_U32(ctx, 2));
    // 0x1ea510: 0x24638d60  addiu       $v1, $v1, -0x72A0
    ctx->pc = 0x1ea510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937952));
    // 0x1ea514: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ea514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ea518: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1ea518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1ea51c: 0xac238d18  sw          $v1, -0x72E8($at)
    ctx->pc = 0x1ea51cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937880), GPR_U32(ctx, 3));
    // 0x1ea520: 0x24428d70  addiu       $v0, $v0, -0x7290
    ctx->pc = 0x1ea520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937968));
    // 0x1ea524: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ea524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ea528: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ea528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea52c: 0xac228d20  sw          $v0, -0x72E0($at)
    ctx->pc = 0x1ea52cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937888), GPR_U32(ctx, 2));
    // 0x1ea530: 0xc066d24  jal         func_19B490
    ctx->pc = 0x1EA530u;
    SET_GPR_U32(ctx, 31, 0x1EA538u);
    ctx->pc = 0x1EA534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA530u;
            // 0x1ea534: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA538u; }
        if (ctx->pc != 0x1EA538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA538u; }
        if (ctx->pc != 0x1EA538u) { return; }
    }
    ctx->pc = 0x1EA538u;
label_1ea538:
    // 0x1ea538: 0x84510322  lh          $s1, 0x322($v0)
    ctx->pc = 0x1ea538u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 802)));
    // 0x1ea53c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1ea53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea540: 0xc0656ec  jal         func_195BB0
    ctx->pc = 0x1EA540u;
    SET_GPR_U32(ctx, 31, 0x1EA548u);
    ctx->pc = 0x1EA544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA540u;
            // 0x1ea544: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195BB0u;
    if (runtime->hasFunction(0x195BB0u)) {
        auto targetFn = runtime->lookupFunction(0x195BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA548u; }
        if (ctx->pc != 0x1EA548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDataTypeStartListNo__9CGameDataFi_0x195bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA548u; }
        if (ctx->pc != 0x1EA548u) { return; }
    }
    ctx->pc = 0x1EA548u;
label_1ea548:
    // 0x1ea548: 0x8fb000a8  lw          $s0, 0xA8($sp)
    ctx->pc = 0x1ea548u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1ea54c: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1EA54Cu;
    {
        const bool branch_taken_0x1ea54c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA54Cu;
            // 0x1ea550: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea54c) {
            ctx->pc = 0x1EA5CCu;
            goto label_1ea5cc;
        }
    }
    ctx->pc = 0x1EA554u;
    // 0x1ea554: 0xc064220  jal         func_190880
    ctx->pc = 0x1EA554u;
    SET_GPR_U32(ctx, 31, 0x1EA55Cu);
    ctx->pc = 0x1EA558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA554u;
            // 0x1ea558: 0x92120022  lbu         $s2, 0x22($s0) (Delay Slot)
        SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA55Cu; }
        if (ctx->pc != 0x1EA55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA55Cu; }
        if (ctx->pc != 0x1EA55Cu) { return; }
    }
    ctx->pc = 0x1EA55Cu;
label_1ea55c:
    // 0x1ea55c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ea55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea560: 0xc0bd920  jal         func_2F6480
    ctx->pc = 0x1EA560u;
    SET_GPR_U32(ctx, 31, 0x1EA568u);
    ctx->pc = 0x1EA564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA560u;
            // 0x1ea564: 0x2405031f  addiu       $a1, $zero, 0x31F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 799));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6480u;
    if (runtime->hasFunction(0x2F6480u)) {
        auto targetFn = runtime->lookupFunction(0x2F6480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA568u; }
        if (ctx->pc != 0x1EA568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBitFlag__9CSaveDataFi_0x2f6480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA568u; }
        if (ctx->pc != 0x1EA568u) { return; }
    }
    ctx->pc = 0x1EA568u;
label_1ea568:
    // 0x1ea568: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA568u;
    {
        const bool branch_taken_0x1ea568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA568u;
            // 0x1ea56c: 0x2a41000a  slti        $at, $s2, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea568) {
            ctx->pc = 0x1EA578u;
            goto label_1ea578;
        }
    }
    ctx->pc = 0x1EA570u;
    // 0x1ea570: 0x2652000a  addiu       $s2, $s2, 0xA
    ctx->pc = 0x1ea570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
    // 0x1ea574: 0x2a41000a  slti        $at, $s2, 0xA
    ctx->pc = 0x1ea574u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
label_1ea578:
    // 0x1ea578: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1EA578u;
    {
        const bool branch_taken_0x1ea578 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA578u;
            // 0x1ea57c: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea578) {
            ctx->pc = 0x1EA5ACu;
            goto label_1ea5ac;
        }
    }
    ctx->pc = 0x1EA580u;
    // 0x1ea580: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1ea580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1ea584: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1ea584u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1ea588: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ea588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ea58c: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x1ea58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x1ea590: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea594: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ea594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea598: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ea598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea59c: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1EA59Cu;
    SET_GPR_U32(ctx, 31, 0x1EA5A4u);
    ctx->pc = 0x1EA5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA59Cu;
            // 0x1ea5a0: 0x24848d80  addiu       $a0, $a0, -0x7280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA5A4u; }
        if (ctx->pc != 0x1EA5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA5A4u; }
        if (ctx->pc != 0x1EA5A4u) { return; }
    }
    ctx->pc = 0x1EA5A4u;
label_1ea5a4:
    // 0x1ea5a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EA5A4u;
    {
        const bool branch_taken_0x1ea5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea5a4) {
            ctx->pc = 0x1EA5CCu;
            goto label_1ea5cc;
        }
    }
    ctx->pc = 0x1EA5ACu;
label_1ea5ac:
    // 0x1ea5ac: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1ea5acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1ea5b0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ea5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1ea5b4: 0x2442db70  addiu       $v0, $v0, -0x2490
    ctx->pc = 0x1ea5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957936));
    // 0x1ea5b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea5bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ea5bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea5c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ea5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ea5c4: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x1EA5C4u;
    SET_GPR_U32(ctx, 31, 0x1EA5CCu);
    ctx->pc = 0x1EA5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA5C4u;
            // 0x1ea5c8: 0x24848d80  addiu       $a0, $a0, -0x7280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA5CCu; }
        if (ctx->pc != 0x1EA5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA5CCu; }
        if (ctx->pc != 0x1EA5CCu) { return; }
    }
    ctx->pc = 0x1EA5CCu;
label_1ea5cc:
    // 0x1ea5cc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ea5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ea5d0: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1ea5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1ea5d4: 0xac208d28  sw          $zero, -0x72D8($at)
    ctx->pc = 0x1ea5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937896), GPR_U32(ctx, 0));
    // 0x1ea5d8: 0x24428d80  addiu       $v0, $v0, -0x7280
    ctx->pc = 0x1ea5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937984));
    // 0x1ea5dc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ea5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ea5e0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EA5E0u;
    {
        const bool branch_taken_0x1ea5e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA5E0u;
            // 0x1ea5e4: 0xac228d1c  sw          $v0, -0x72E4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937884), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea5e0) {
            ctx->pc = 0x1EA618u;
            goto label_1ea618;
        }
    }
    ctx->pc = 0x1EA5E8u;
    // 0x1ea5e8: 0x92030022  lbu         $v1, 0x22($s0)
    ctx->pc = 0x1ea5e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x1ea5ec: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1ea5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1ea5f0: 0x2442d9a0  addiu       $v0, $v0, -0x2660
    ctx->pc = 0x1ea5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957472));
    // 0x1ea5f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ea5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ea5f8: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x1ea5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ea5fc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1ea5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1ea600: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ea600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ea604: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ea604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ea608: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ea608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ea60c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ea60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ea610: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x1ea610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
    // 0x1ea614: 0xac228d28  sw          $v0, -0x72D8($at)
    ctx->pc = 0x1ea614u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937896), GPR_U32(ctx, 2));
label_1ea618:
    // 0x1ea618: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1ea618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ea61c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ea61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ea620: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA620u;
    {
        const bool branch_taken_0x1ea620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA620u;
            // 0x1ea624: 0xac208d2c  sw          $zero, -0x72D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937900), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea620) {
            ctx->pc = 0x1EA638u;
            goto label_1ea638;
        }
    }
    ctx->pc = 0x1EA628u;
    // 0x1ea628: 0xc0660e4  jal         func_198390
    ctx->pc = 0x1EA628u;
    SET_GPR_U32(ctx, 31, 0x1EA630u);
    ctx->pc = 0x1EA62Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA628u;
            // 0x1ea62c: 0x26c447d4  addiu       $a0, $s6, 0x47D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 18388));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198390u;
    if (runtime->hasFunction(0x198390u)) {
        auto targetFn = runtime->lookupFunction(0x198390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA630u; }
        if (ctx->pc != 0x1EA630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboInfoType__13CGameDataUsedFv_0x198390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA630u; }
        if (ctx->pc != 0x1EA630u) { return; }
    }
    ctx->pc = 0x1EA630u;
label_1ea630:
    // 0x1ea630: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ea630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ea634: 0xac228d2c  sw          $v0, -0x72D4($at)
    ctx->pc = 0x1ea634u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937900), GPR_U32(ctx, 2));
label_1ea638:
    // 0x1ea638: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x1ea638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1ea63c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ea63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ea640: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EA640u;
    {
        const bool branch_taken_0x1ea640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA640u;
            // 0x1ea644: 0xac208d30  sw          $zero, -0x72D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294937904), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea640) {
            ctx->pc = 0x1EA658u;
            goto label_1ea658;
        }
    }
    ctx->pc = 0x1EA648u;
    // 0x1ea648: 0xc0660e4  jal         func_198390
    ctx->pc = 0x1EA648u;
    SET_GPR_U32(ctx, 31, 0x1EA650u);
    ctx->pc = 0x1EA64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA648u;
            // 0x1ea64c: 0x26c44690  addiu       $a0, $s6, 0x4690 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 18064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198390u;
    if (runtime->hasFunction(0x198390u)) {
        auto targetFn = runtime->lookupFunction(0x198390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA650u; }
        if (ctx->pc != 0x1EA650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboInfoType__13CGameDataUsedFv_0x198390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA650u; }
        if (ctx->pc != 0x1EA650u) { return; }
    }
    ctx->pc = 0x1EA650u;
label_1ea650:
    // 0x1ea650: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ea650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ea654: 0xac228d30  sw          $v0, -0x72D0($at)
    ctx->pc = 0x1ea654u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937904), GPR_U32(ctx, 2));
label_1ea658:
    // 0x1ea658: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1ea658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea65c: 0xc066d24  jal         func_19B490
    ctx->pc = 0x1EA65Cu;
    SET_GPR_U32(ctx, 31, 0x1EA664u);
    ctx->pc = 0x1EA660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA65Cu;
            // 0x1ea660: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B490u;
    if (runtime->hasFunction(0x19B490u)) {
        auto targetFn = runtime->lookupFunction(0x19B490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA664u; }
        if (ctx->pc != 0x1EA664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaDataPtr__16CUserDataManagerFi_0x19b490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA664u; }
        if (ctx->pc != 0x1EA664u) { return; }
    }
    ctx->pc = 0x1EA664u;
label_1ea664:
    // 0x1ea664: 0x8444024a  lh          $a0, 0x24A($v0)
    ctx->pc = 0x1ea664u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 586)));
    // 0x1ea668: 0xc065750  jal         func_195D40
    ctx->pc = 0x1EA668u;
    SET_GPR_U32(ctx, 31, 0x1EA670u);
    ctx->pc = 0x1EA66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA668u;
            // 0x1ea66c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA670u; }
        if (ctx->pc != 0x1EA670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA670u; }
        if (ctx->pc != 0x1EA670u) { return; }
    }
    ctx->pc = 0x1EA670u;
label_1ea670:
    // 0x1ea670: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ea670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1ea674: 0xac228d24  sw          $v0, -0x72DC($at)
    ctx->pc = 0x1ea674u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937892), GPR_U32(ctx, 2));
    // 0x1ea678: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1ea678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ea67c: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1ea67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1ea680: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1ea680u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ea684: 0x24428d10  addiu       $v0, $v0, -0x72F0
    ctx->pc = 0x1ea684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937872));
    // 0x1ea688: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ea688u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ea68c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ea68cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ea690: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ea690u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ea694: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ea694u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ea698: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ea698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea69c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ea69cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea6a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea6a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA6A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA6A4u;
            // 0x1ea6a8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA6ACu;
}
