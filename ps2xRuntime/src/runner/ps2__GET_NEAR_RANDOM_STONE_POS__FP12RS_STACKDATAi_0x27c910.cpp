#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_NEAR_RANDOM_STONE_POS__FP12RS_STACKDATAi
// Address: 0x27c910 - 0x27c9f8
void ps2__GET_NEAR_RANDOM_STONE_POS__FP12RS_STACKDATAi_0x27c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_NEAR_RANDOM_STONE_POS__FP12RS_STACKDATAi_0x27c910");
#endif

    switch (ctx->pc) {
        case 0x27c910u: goto label_27c910;
        case 0x27c914u: goto label_27c914;
        case 0x27c918u: goto label_27c918;
        case 0x27c91cu: goto label_27c91c;
        case 0x27c920u: goto label_27c920;
        case 0x27c924u: goto label_27c924;
        case 0x27c928u: goto label_27c928;
        case 0x27c92cu: goto label_27c92c;
        case 0x27c930u: goto label_27c930;
        case 0x27c934u: goto label_27c934;
        case 0x27c938u: goto label_27c938;
        case 0x27c93cu: goto label_27c93c;
        case 0x27c940u: goto label_27c940;
        case 0x27c944u: goto label_27c944;
        case 0x27c948u: goto label_27c948;
        case 0x27c94cu: goto label_27c94c;
        case 0x27c950u: goto label_27c950;
        case 0x27c954u: goto label_27c954;
        case 0x27c958u: goto label_27c958;
        case 0x27c95cu: goto label_27c95c;
        case 0x27c960u: goto label_27c960;
        case 0x27c964u: goto label_27c964;
        case 0x27c968u: goto label_27c968;
        case 0x27c96cu: goto label_27c96c;
        case 0x27c970u: goto label_27c970;
        case 0x27c974u: goto label_27c974;
        case 0x27c978u: goto label_27c978;
        case 0x27c97cu: goto label_27c97c;
        case 0x27c980u: goto label_27c980;
        case 0x27c984u: goto label_27c984;
        case 0x27c988u: goto label_27c988;
        case 0x27c98cu: goto label_27c98c;
        case 0x27c990u: goto label_27c990;
        case 0x27c994u: goto label_27c994;
        case 0x27c998u: goto label_27c998;
        case 0x27c99cu: goto label_27c99c;
        case 0x27c9a0u: goto label_27c9a0;
        case 0x27c9a4u: goto label_27c9a4;
        case 0x27c9a8u: goto label_27c9a8;
        case 0x27c9acu: goto label_27c9ac;
        case 0x27c9b0u: goto label_27c9b0;
        case 0x27c9b4u: goto label_27c9b4;
        case 0x27c9b8u: goto label_27c9b8;
        case 0x27c9bcu: goto label_27c9bc;
        case 0x27c9c0u: goto label_27c9c0;
        case 0x27c9c4u: goto label_27c9c4;
        case 0x27c9c8u: goto label_27c9c8;
        case 0x27c9ccu: goto label_27c9cc;
        case 0x27c9d0u: goto label_27c9d0;
        case 0x27c9d4u: goto label_27c9d4;
        case 0x27c9d8u: goto label_27c9d8;
        case 0x27c9dcu: goto label_27c9dc;
        case 0x27c9e0u: goto label_27c9e0;
        case 0x27c9e4u: goto label_27c9e4;
        case 0x27c9e8u: goto label_27c9e8;
        case 0x27c9ecu: goto label_27c9ec;
        case 0x27c9f0u: goto label_27c9f0;
        case 0x27c9f4u: goto label_27c9f4;
        default: break;
    }

    ctx->pc = 0x27c910u;

label_27c910:
    // 0x27c910: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27c910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_27c914:
    // 0x27c914: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x27c914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_27c918:
    // 0x27c918: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27c918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_27c91c:
    // 0x27c91c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27c91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27c920:
    // 0x27c920: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27c920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27c924:
    // 0x27c924: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27c924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27c928:
    // 0x27c928: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27c928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27c92c:
    // 0x27c92c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_27c930:
    if (ctx->pc == 0x27C930u) {
        ctx->pc = 0x27C930u;
            // 0x27c930: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x27C934u;
        goto label_27c934;
    }
    ctx->pc = 0x27C92Cu;
    {
        const bool branch_taken_0x27c92c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x27C930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C92Cu;
            // 0x27c930: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c92c) {
            ctx->pc = 0x27C93Cu;
            goto label_27c93c;
        }
    }
    ctx->pc = 0x27C934u;
label_27c934:
    // 0x27c934: 0x10000029  b           . + 4 + (0x29 << 2)
label_27c938:
    if (ctx->pc == 0x27C938u) {
        ctx->pc = 0x27C938u;
            // 0x27c938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C93Cu;
        goto label_27c93c;
    }
    ctx->pc = 0x27C934u;
    {
        const bool branch_taken_0x27c934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C934u;
            // 0x27c938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c934) {
            ctx->pc = 0x27C9DCu;
            goto label_27c9dc;
        }
    }
    ctx->pc = 0x27C93Cu;
label_27c93c:
    // 0x27c93c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27c93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27c940:
    // 0x27c940: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27c940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27c944:
    // 0x27c944: 0xc097e34  jal         func_25F8D0
label_27c948:
    if (ctx->pc == 0x27C948u) {
        ctx->pc = 0x27C948u;
            // 0x27c948: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x27C94Cu;
        goto label_27c94c;
    }
    ctx->pc = 0x27C944u;
    SET_GPR_U32(ctx, 31, 0x27C94Cu);
    ctx->pc = 0x27C948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C944u;
            // 0x27c948: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8D0u;
    if (runtime->hasFunction(0x25F8D0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C94Cu; }
        if (ctx->pc != 0x27C94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackVector__FPfP12RS_STACKDATA_0x25f8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C94Cu; }
        if (ctx->pc != 0x27C94Cu) { return; }
    }
    ctx->pc = 0x27C94Cu;
label_27c94c:
    // 0x27c94c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x27c94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_27c950:
    // 0x27c950: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x27c950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_27c954:
    // 0x27c954: 0x27b10064  addiu       $s1, $sp, 0x64
    ctx->pc = 0x27c954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_27c958:
    // 0x27c958: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x27c958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_27c95c:
    // 0x27c95c: 0x27b20068  addiu       $s2, $sp, 0x68
    ctx->pc = 0x27c95cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_27c960:
    // 0x27c960: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x27c960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_27c964:
    // 0x27c964: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x27c964u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_27c968:
    // 0x27c968: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27c968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27c96c:
    // 0x27c96c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x27c96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_27c970:
    // 0x27c970: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x27c970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27c974:
    // 0x27c974: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x27c974u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_27c978:
    // 0x27c978: 0xc0764fc  jal         func_1D93F0
label_27c97c:
    if (ctx->pc == 0x27C97Cu) {
        ctx->pc = 0x27C97Cu;
            // 0x27c97c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x27C980u;
        goto label_27c980;
    }
    ctx->pc = 0x27C978u;
    SET_GPR_U32(ctx, 31, 0x27C980u);
    ctx->pc = 0x27C97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C978u;
            // 0x27c97c: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D93F0u;
    if (runtime->hasFunction(0x1D93F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D93F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C980u; }
        if (ctx->pc != 0x27C980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchRandomStone__11CAutoMapGenFPff_0x1d93f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C980u; }
        if (ctx->pc != 0x27C980u) { return; }
    }
    ctx->pc = 0x27C980u;
label_27c980:
    // 0x27c980: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_27c984:
    if (ctx->pc == 0x27C984u) {
        ctx->pc = 0x27C984u;
            // 0x27c984: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C988u;
        goto label_27c988;
    }
    ctx->pc = 0x27C980u;
    {
        const bool branch_taken_0x27c980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C980u;
            // 0x27c984: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c980) {
            ctx->pc = 0x27C99Cu;
            goto label_27c99c;
        }
    }
    ctx->pc = 0x27C988u;
label_27c988:
    // 0x27c988: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27c988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27c98c:
    // 0x27c98c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x27c98cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_27c990:
    // 0x27c990: 0x320f809  jalr        $t9
label_27c994:
    if (ctx->pc == 0x27C994u) {
        ctx->pc = 0x27C994u;
            // 0x27c994: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27C998u;
        goto label_27c998;
    }
    ctx->pc = 0x27C990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27C998u);
        ctx->pc = 0x27C994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C990u;
            // 0x27c994: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27C998u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27C998u; }
            if (ctx->pc != 0x27C998u) { return; }
        }
        }
    }
    ctx->pc = 0x27C998u;
label_27c998:
    // 0x27c998: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x27c998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c99c:
    // 0x27c99c: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x27c99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27c9a0:
    // 0x27c9a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27c9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27c9a4:
    // 0x27c9a4: 0xc097e54  jal         func_25F950
label_27c9a8:
    if (ctx->pc == 0x27C9A8u) {
        ctx->pc = 0x27C9A8u;
            // 0x27c9a8: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x27C9ACu;
        goto label_27c9ac;
    }
    ctx->pc = 0x27C9A4u;
    SET_GPR_U32(ctx, 31, 0x27C9ACu);
    ctx->pc = 0x27C9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C9A4u;
            // 0x27c9a8: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C9ACu; }
        if (ctx->pc != 0x27C9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C9ACu; }
        if (ctx->pc != 0x27C9ACu) { return; }
    }
    ctx->pc = 0x27C9ACu;
label_27c9ac:
    // 0x27c9ac: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x27c9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27c9b0:
    // 0x27c9b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27c9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27c9b4:
    // 0x27c9b4: 0xc097e54  jal         func_25F950
label_27c9b8:
    if (ctx->pc == 0x27C9B8u) {
        ctx->pc = 0x27C9B8u;
            // 0x27c9b8: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x27C9BCu;
        goto label_27c9bc;
    }
    ctx->pc = 0x27C9B4u;
    SET_GPR_U32(ctx, 31, 0x27C9BCu);
    ctx->pc = 0x27C9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C9B4u;
            // 0x27c9b8: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C9BCu; }
        if (ctx->pc != 0x27C9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C9BCu; }
        if (ctx->pc != 0x27C9BCu) { return; }
    }
    ctx->pc = 0x27C9BCu;
label_27c9bc:
    // 0x27c9bc: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x27c9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_27c9c0:
    // 0x27c9c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27c9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27c9c4:
    // 0x27c9c4: 0xc097e54  jal         func_25F950
label_27c9c8:
    if (ctx->pc == 0x27C9C8u) {
        ctx->pc = 0x27C9C8u;
            // 0x27c9c8: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x27C9CCu;
        goto label_27c9cc;
    }
    ctx->pc = 0x27C9C4u;
    SET_GPR_U32(ctx, 31, 0x27C9CCu);
    ctx->pc = 0x27C9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C9C4u;
            // 0x27c9c8: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F950u;
    if (runtime->hasFunction(0x25F950u)) {
        auto targetFn = runtime->lookupFunction(0x25F950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C9CCu; }
        if (ctx->pc != 0x27C9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x25f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C9CCu; }
        if (ctx->pc != 0x27C9CCu) { return; }
    }
    ctx->pc = 0x27C9CCu;
label_27c9cc:
    // 0x27c9cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27c9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27c9d0:
    // 0x27c9d0: 0xc097e4c  jal         func_25F930
label_27c9d4:
    if (ctx->pc == 0x27C9D4u) {
        ctx->pc = 0x27C9D4u;
            // 0x27c9d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C9D8u;
        goto label_27c9d8;
    }
    ctx->pc = 0x27C9D0u;
    SET_GPR_U32(ctx, 31, 0x27C9D8u);
    ctx->pc = 0x27C9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C9D0u;
            // 0x27c9d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C9D8u; }
        if (ctx->pc != 0x27C9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C9D8u; }
        if (ctx->pc != 0x27C9D8u) { return; }
    }
    ctx->pc = 0x27C9D8u;
label_27c9d8:
    // 0x27c9d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c9dc:
    // 0x27c9dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27c9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27c9e0:
    // 0x27c9e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27c9e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27c9e4:
    // 0x27c9e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27c9e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27c9e8:
    // 0x27c9e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27c9e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27c9ec:
    // 0x27c9ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27c9ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27c9f0:
    // 0x27c9f0: 0x3e00008  jr          $ra
label_27c9f4:
    if (ctx->pc == 0x27C9F4u) {
        ctx->pc = 0x27C9F4u;
            // 0x27c9f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x27C9F8u;
        goto label_fallthrough_0x27c9f0;
    }
    ctx->pc = 0x27C9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C9F0u;
            // 0x27c9f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x27c9f0:
    ctx->pc = 0x27C9F8u;
}
