#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _LOAD_CHARA_NPC__FP12RS_STACKDATAi
// Address: 0x265fe0 - 0x2660fc
void ps2__LOAD_CHARA_NPC__FP12RS_STACKDATAi_0x265fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__LOAD_CHARA_NPC__FP12RS_STACKDATAi_0x265fe0");
#endif

    switch (ctx->pc) {
        case 0x266000u: goto label_266000;
        case 0x266010u: goto label_266010;
        case 0x266020u: goto label_266020;
        case 0x266058u: goto label_266058;
        case 0x266068u: goto label_266068;
        case 0x266080u: goto label_266080;
        case 0x26608cu: goto label_26608c;
        case 0x2660acu: goto label_2660ac;
        case 0x2660bcu: goto label_2660bc;
        case 0x2660d4u: goto label_2660d4;
        default: break;
    }

    ctx->pc = 0x265fe0u;

    // 0x265fe0: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x265fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
    // 0x265fe4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x265fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x265fe8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x265fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x265fec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x265fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x265ff0: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x265ff0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x265ff4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x265ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x265ff8: 0xc097e18  jal         func_25F860
    ctx->pc = 0x265FF8u;
    SET_GPR_U32(ctx, 31, 0x266000u);
    ctx->pc = 0x265FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x265FF8u;
            // 0x265ffc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266000u; }
        if (ctx->pc != 0x266000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266000u; }
        if (ctx->pc != 0x266000u) { return; }
    }
    ctx->pc = 0x266000u;
label_266000:
    // 0x266000: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x266000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266004: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x266004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266008: 0xc097e18  jal         func_25F860
    ctx->pc = 0x266008u;
    SET_GPR_U32(ctx, 31, 0x266010u);
    ctx->pc = 0x26600Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266008u;
            // 0x26600c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266010u; }
        if (ctx->pc != 0x266010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266010u; }
        if (ctx->pc != 0x266010u) { return; }
    }
    ctx->pc = 0x266010u;
label_266010:
    // 0x266010: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x266010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266014: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x266014u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266018: 0xc097e18  jal         func_25F860
    ctx->pc = 0x266018u;
    SET_GPR_U32(ctx, 31, 0x266020u);
    ctx->pc = 0x26601Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266018u;
            // 0x26601c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266020u; }
        if (ctx->pc != 0x266020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266020u; }
        if (ctx->pc != 0x266020u) { return; }
    }
    ctx->pc = 0x266020u;
label_266020:
    // 0x266020: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x266020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266024: 0x1e400003  bgtz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x266024u;
    {
        const bool branch_taken_0x266024 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x266028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266024u;
            // 0x266028: 0x2a420020  slti        $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x266024) {
            ctx->pc = 0x266034u;
            goto label_266034;
        }
    }
    ctx->pc = 0x26602Cu;
    // 0x26602c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x26602Cu;
    {
        const bool branch_taken_0x26602c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26602Cu;
            // 0x266030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26602c) {
            ctx->pc = 0x2660E0u;
            goto label_2660e0;
        }
    }
    ctx->pc = 0x266034u;
label_266034:
    // 0x266034: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266034u;
    {
        const bool branch_taken_0x266034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266034u;
            // 0x266038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266034) {
            ctx->pc = 0x266044u;
            goto label_266044;
        }
    }
    ctx->pc = 0x26603Cu;
    // 0x26603c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x26603Cu;
    {
        const bool branch_taken_0x26603c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26603Cu;
            // 0x266040: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26603c) {
            ctx->pc = 0x2660E4u;
            goto label_2660e4;
        }
    }
    ctx->pc = 0x266044u;
label_266044:
    // 0x266044: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x266044u;
    {
        const bool branch_taken_0x266044 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x266048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266044u;
            // 0x266048: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266044) {
            ctx->pc = 0x266060u;
            goto label_266060;
        }
    }
    ctx->pc = 0x26604Cu;
    // 0x26604c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26604cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266050: 0xc0aad00  jal         func_2AB400
    ctx->pc = 0x266050u;
    SET_GPR_U32(ctx, 31, 0x266058u);
    ctx->pc = 0x266054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266050u;
            // 0x266054: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB400u;
    if (runtime->hasFunction(0x2AB400u)) {
        auto targetFn = runtime->lookupFunction(0x2AB400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266058u; }
        if (ctx->pc != 0x266058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaModelName__Fii_0x2ab400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266058u; }
        if (ctx->pc != 0x266058u) { return; }
    }
    ctx->pc = 0x266058u;
label_266058:
    // 0x266058: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x266058u;
    {
        const bool branch_taken_0x266058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x266058) {
            ctx->pc = 0x266068u;
            goto label_266068;
        }
    }
    ctx->pc = 0x266060u;
label_266060:
    // 0x266060: 0xc0aad00  jal         func_2AB400
    ctx->pc = 0x266060u;
    SET_GPR_U32(ctx, 31, 0x266068u);
    ctx->pc = 0x266064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266060u;
            // 0x266064: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB400u;
    if (runtime->hasFunction(0x2AB400u)) {
        auto targetFn = runtime->lookupFunction(0x2AB400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266068u; }
        if (ctx->pc != 0x266068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaModelName__Fii_0x2ab400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266068u; }
        if (ctx->pc != 0x266068u) { return; }
    }
    ctx->pc = 0x266068u;
label_266068:
    // 0x266068: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266068u;
    {
        const bool branch_taken_0x266068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26606Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266068u;
            // 0x26606c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266068) {
            ctx->pc = 0x266078u;
            goto label_266078;
        }
    }
    ctx->pc = 0x266070u;
    // 0x266070: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x266070u;
    {
        const bool branch_taken_0x266070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266070u;
            // 0x266074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266070) {
            ctx->pc = 0x2660E0u;
            goto label_2660e0;
        }
    }
    ctx->pc = 0x266078u;
label_266078:
    // 0x266078: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x266078u;
    SET_GPR_U32(ctx, 31, 0x266080u);
    ctx->pc = 0x26607Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266078u;
            // 0x26607c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266080u; }
        if (ctx->pc != 0x266080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266080u; }
        if (ctx->pc != 0x266080u) { return; }
    }
    ctx->pc = 0x266080u;
label_266080:
    // 0x266080: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266084: 0xc0aad00  jal         func_2AB400
    ctx->pc = 0x266084u;
    SET_GPR_U32(ctx, 31, 0x26608Cu);
    ctx->pc = 0x266088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266084u;
            // 0x266088: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AB400u;
    if (runtime->hasFunction(0x2AB400u)) {
        auto targetFn = runtime->lookupFunction(0x2AB400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26608Cu; }
        if (ctx->pc != 0x26608Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPartyCharaModelName__Fii_0x2ab400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26608Cu; }
        if (ctx->pc != 0x26608Cu) { return; }
    }
    ctx->pc = 0x26608Cu;
label_26608c:
    // 0x26608c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x26608cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x266090: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x266090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x266094: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x266094u;
    {
        const bool branch_taken_0x266094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x266098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x266094u;
            // 0x266098: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266094) {
            ctx->pc = 0x2660A4u;
            goto label_2660a4;
        }
    }
    ctx->pc = 0x26609Cu;
    // 0x26609c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26609Cu;
    {
        const bool branch_taken_0x26609c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2660A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26609Cu;
            // 0x2660a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26609c) {
            ctx->pc = 0x2660E0u;
            goto label_2660e0;
        }
    }
    ctx->pc = 0x2660A4u;
label_2660a4:
    // 0x2660a4: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2660A4u;
    SET_GPR_U32(ctx, 31, 0x2660ACu);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2660ACu; }
        if (ctx->pc != 0x2660ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2660ACu; }
        if (ctx->pc != 0x2660ACu) { return; }
    }
    ctx->pc = 0x2660ACu;
label_2660ac:
    // 0x2660ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2660acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2660b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2660b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2660b4: 0xc098ae4  jal         func_262B90
    ctx->pc = 0x2660B4u;
    SET_GPR_U32(ctx, 31, 0x2660BCu);
    ctx->pc = 0x2660B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2660B4u;
            // 0x2660b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262B90u;
    if (runtime->hasFunction(0x262B90u)) {
        auto targetFn = runtime->lookupFunction(0x262B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2660BCu; }
        if (ctx->pc != 0x2660BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoadBGBuff__FPcPi_0x262b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2660BCu; }
        if (ctx->pc != 0x2660BCu) { return; }
    }
    ctx->pc = 0x2660BCu;
label_2660bc:
    // 0x2660bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2660BCu;
    {
        const bool branch_taken_0x2660bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2660C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2660BCu;
            // 0x2660c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2660bc) {
            ctx->pc = 0x2660DCu;
            goto label_2660dc;
        }
    }
    ctx->pc = 0x2660C4u;
    // 0x2660c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2660c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2660c8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2660c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2660cc: 0xc098b9c  jal         func_262E70
    ctx->pc = 0x2660CCu;
    SET_GPR_U32(ctx, 31, 0x2660D4u);
    ctx->pc = 0x2660D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2660CCu;
            // 0x2660d0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262E70u;
    if (runtime->hasFunction(0x262E70u)) {
        auto targetFn = runtime->lookupFunction(0x262E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2660D4u; }
        if (ctx->pc != 0x2660D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__LOAD_CHARA_sub__FiPPciPUi_0x262e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2660D4u; }
        if (ctx->pc != 0x2660D4u) { return; }
    }
    ctx->pc = 0x2660D4u;
label_2660d4:
    // 0x2660d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2660D4u;
    {
        const bool branch_taken_0x2660d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2660d4) {
            ctx->pc = 0x2660E0u;
            goto label_2660e0;
        }
    }
    ctx->pc = 0x2660DCu;
label_2660dc:
    // 0x2660dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2660dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2660e0:
    // 0x2660e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2660e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2660e4:
    // 0x2660e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2660e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2660e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2660e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2660ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2660ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2660f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2660f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2660f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2660F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2660F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2660F4u;
            // 0x2660f8: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2660FCu;
}
