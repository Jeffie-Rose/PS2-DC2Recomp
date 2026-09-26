#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTerritoryParts__8CEditMapFiPii
// Address: 0x2ee920 - 0x2eea24
void GetTerritoryParts__8CEditMapFiPii_0x2ee920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTerritoryParts__8CEditMapFiPii_0x2ee920");
#endif

    switch (ctx->pc) {
        case 0x2ee970u: goto label_2ee970;
        case 0x2ee98cu: goto label_2ee98c;
        case 0x2ee9acu: goto label_2ee9ac;
        case 0x2ee9b4u: goto label_2ee9b4;
        case 0x2ee9c4u: goto label_2ee9c4;
        default: break;
    }

    ctx->pc = 0x2ee920u;

    // 0x2ee920: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ee920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ee924: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ee924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2ee928: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2ee928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2ee92c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ee92cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ee930: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2ee930u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee934: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ee934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ee938: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2ee938u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee93c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ee93cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ee940: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2ee940u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee944: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ee944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ee948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ee948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ee94c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ee94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ee950: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE950u;
    {
        const bool branch_taken_0x2ee950 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE950u;
            // 0x2ee954: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee950) {
            ctx->pc = 0x2EE960u;
            goto label_2ee960;
        }
    }
    ctx->pc = 0x2EE958u;
    // 0x2ee958: 0x1e800003  bgtz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE958u;
    {
        const bool branch_taken_0x2ee958 = (GPR_S32(ctx, 20) > 0);
        if (branch_taken_0x2ee958) {
            ctx->pc = 0x2EE968u;
            goto label_2ee968;
        }
    }
    ctx->pc = 0x2EE960u;
label_2ee960:
    // 0x2ee960: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2EE960u;
    {
        const bool branch_taken_0x2ee960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE960u;
            // 0x2ee964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee960) {
            ctx->pc = 0x2EE9FCu;
            goto label_2ee9fc;
        }
    }
    ctx->pc = 0x2EE968u;
label_2ee968:
    // 0x2ee968: 0xc06c310  jal         func_1B0C40
    ctx->pc = 0x2EE968u;
    SET_GPR_U32(ctx, 31, 0x2EE970u);
    ctx->pc = 0x1B0C40u;
    if (runtime->hasFunction(0x1B0C40u)) {
        auto targetFn = runtime->lookupFunction(0x1B0C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE970u; }
        if (ctx->pc != 0x2EE970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePlaceParts__8CEditMapFi_0x1b0c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE970u; }
        if (ctx->pc != 0x2EE970u) { return; }
    }
    ctx->pc = 0x2EE970u;
label_2ee970:
    // 0x2ee970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ee970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee974: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE974u;
    {
        const bool branch_taken_0x2ee974 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE974u;
            // 0x2ee978: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee974) {
            ctx->pc = 0x2EE984u;
            goto label_2ee984;
        }
    }
    ctx->pc = 0x2EE97Cu;
    // 0x2ee97c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2EE97Cu;
    {
        const bool branch_taken_0x2ee97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE97Cu;
            // 0x2ee980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee97c) {
            ctx->pc = 0x2EE9FCu;
            goto label_2ee9fc;
        }
    }
    ctx->pc = 0x2EE984u;
label_2ee984:
    // 0x2ee984: 0xc0bb97c  jal         func_2EE5F0
    ctx->pc = 0x2EE984u;
    SET_GPR_U32(ctx, 31, 0x2EE98Cu);
    ctx->pc = 0x2EE988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE984u;
            // 0x2ee988: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5F0u;
    if (runtime->hasFunction(0x2EE5F0u)) {
        auto targetFn = runtime->lookupFunction(0x2EE5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE98Cu; }
        if (ctx->pc != 0x2EE98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNormalPlaceParts__8CEditMapFi_0x2ee5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE98Cu; }
        if (ctx->pc != 0x2EE98Cu) { return; }
    }
    ctx->pc = 0x2EE98Cu;
label_2ee98c:
    // 0x2ee98c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EE98Cu;
    {
        const bool branch_taken_0x2ee98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE98Cu;
            // 0x2ee990: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee98c) {
            ctx->pc = 0x2EE99Cu;
            goto label_2ee99c;
        }
    }
    ctx->pc = 0x2EE994u;
    // 0x2ee994: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2EE994u;
    {
        const bool branch_taken_0x2ee994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE994u;
            // 0x2ee998: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee994) {
            ctx->pc = 0x2EEA00u;
            goto label_2eea00;
        }
    }
    ctx->pc = 0x2EE99Cu;
label_2ee99c:
    // 0x2ee99c: 0x8ed20d44  lw          $s2, 0xD44($s6)
    ctx->pc = 0x2ee99cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3396)));
    // 0x2ee9a0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ee9a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee9a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2EE9A4u;
    {
        const bool branch_taken_0x2ee9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE9A4u;
            // 0x2ee9a8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9a4) {
            ctx->pc = 0x2EE9E8u;
            goto label_2ee9e8;
        }
    }
    ctx->pc = 0x2EE9ACu;
label_2ee9ac:
    // 0x2ee9ac: 0xc0bb988  jal         func_2EE620
    ctx->pc = 0x2EE9ACu;
    SET_GPR_U32(ctx, 31, 0x2EE9B4u);
    ctx->pc = 0x2EE9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE9ACu;
            // 0x2ee9b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE620u;
    if (runtime->hasFunction(0x2EE620u)) {
        auto targetFn = runtime->lookupFunction(0x2EE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE9B4u; }
        if (ctx->pc != 0x2EE9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNormalPlaceParts__8CEditMapFP10CEditParts_0x2ee620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE9B4u; }
        if (ctx->pc != 0x2EE9B4u) { return; }
    }
    ctx->pc = 0x2EE9B4u;
label_2ee9b4:
    // 0x2ee9b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EE9B4u;
    {
        const bool branch_taken_0x2ee9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE9B4u;
            // 0x2ee9b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9b4) {
            ctx->pc = 0x2EE9E0u;
            goto label_2ee9e0;
        }
    }
    ctx->pc = 0x2EE9BCu;
    // 0x2ee9bc: 0xc06d788  jal         func_1B5E20
    ctx->pc = 0x2EE9BCu;
    SET_GPR_U32(ctx, 31, 0x2EE9C4u);
    ctx->pc = 0x2EE9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE9BCu;
            // 0x2ee9c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5E20u;
    if (runtime->hasFunction(0x1B5E20u)) {
        auto targetFn = runtime->lookupFunction(0x1B5E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE9C4u; }
        if (ctx->pc != 0x2EE9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTerritory__10CEditPartsFP10CEditParts_0x1b5e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE9C4u; }
        if (ctx->pc != 0x2EE9C4u) { return; }
    }
    ctx->pc = 0x2EE9C4u;
label_2ee9c4:
    // 0x2ee9c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EE9C4u;
    {
        const bool branch_taken_0x2ee9c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee9c4) {
            ctx->pc = 0x2EE9E0u;
            goto label_2ee9e0;
        }
    }
    ctx->pc = 0x2EE9CCu;
    // 0x2ee9cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2ee9ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2ee9d0: 0xaeb30000  sw          $s3, 0x0($s5)
    ctx->pc = 0x2ee9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
    // 0x2ee9d4: 0x234082a  slt         $at, $s1, $s4
    ctx->pc = 0x2ee9d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2ee9d8: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EE9D8u;
    {
        const bool branch_taken_0x2ee9d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EE9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE9D8u;
            // 0x2ee9dc: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9d8) {
            ctx->pc = 0x2EE9F8u;
            goto label_2ee9f8;
        }
    }
    ctx->pc = 0x2EE9E0u;
label_2ee9e0:
    // 0x2ee9e0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2ee9e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2ee9e4: 0x26520330  addiu       $s2, $s2, 0x330
    ctx->pc = 0x2ee9e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
label_2ee9e8:
    // 0x2ee9e8: 0x8ec20d40  lw          $v0, 0xD40($s6)
    ctx->pc = 0x2ee9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 3392)));
    // 0x2ee9ec: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x2ee9ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ee9f0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2EE9F0u;
    {
        const bool branch_taken_0x2ee9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EE9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EE9F0u;
            // 0x2ee9f4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee9f0) {
            ctx->pc = 0x2EE9ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ee9ac;
        }
    }
    ctx->pc = 0x2EE9F8u;
label_2ee9f8:
    // 0x2ee9f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ee9f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ee9fc:
    // 0x2ee9fc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ee9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2eea00:
    // 0x2eea00: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2eea00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2eea04: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2eea04u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2eea08: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2eea08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2eea0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2eea0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eea10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2eea10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eea14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2eea14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eea18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2eea18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eea1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEA1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EEA1Cu;
            // 0x2eea20: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EEA24u;
}
