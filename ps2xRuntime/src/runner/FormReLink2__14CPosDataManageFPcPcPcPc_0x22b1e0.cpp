#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FormReLink2__14CPosDataManageFPcPcPcPc
// Address: 0x22b1e0 - 0x22b31c
void FormReLink2__14CPosDataManageFPcPcPcPc_0x22b1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FormReLink2__14CPosDataManageFPcPcPcPc_0x22b1e0");
#endif

    switch (ctx->pc) {
        case 0x22b20cu: goto label_22b20c;
        case 0x22b21cu: goto label_22b21c;
        case 0x22b22cu: goto label_22b22c;
        case 0x22b23cu: goto label_22b23c;
        default: break;
    }

    ctx->pc = 0x22b1e0u;

    // 0x22b1e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x22b1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22b1e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x22b1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22b1e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22b1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x22b1ec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22b1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x22b1f0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22b1f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22b1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22b1f8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x22b1f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b1fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22b1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22b200: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22b200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b204: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x22B204u;
    SET_GPR_U32(ctx, 31, 0x22B20Cu);
    ctx->pc = 0x22B208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B204u;
            // 0x22b208: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B20Cu; }
        if (ctx->pc != 0x22B20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B20Cu; }
        if (ctx->pc != 0x22B20Cu) { return; }
    }
    ctx->pc = 0x22B20Cu;
label_22b20c:
    // 0x22b20c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22b20cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b210: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22b210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b214: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x22B214u;
    SET_GPR_U32(ctx, 31, 0x22B21Cu);
    ctx->pc = 0x22B218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B214u;
            // 0x22b218: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B21Cu; }
        if (ctx->pc != 0x22B21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B21Cu; }
        if (ctx->pc != 0x22B21Cu) { return; }
    }
    ctx->pc = 0x22B21Cu;
label_22b21c:
    // 0x22b21c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22b21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b220: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22b220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b224: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x22B224u;
    SET_GPR_U32(ctx, 31, 0x22B22Cu);
    ctx->pc = 0x22B228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B224u;
            // 0x22b228: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B22Cu; }
        if (ctx->pc != 0x22B22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B22Cu; }
        if (ctx->pc != 0x22B22Cu) { return; }
    }
    ctx->pc = 0x22B22Cu;
label_22b22c:
    // 0x22b22c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22b22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b230: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x22b230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b234: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x22B234u;
    SET_GPR_U32(ctx, 31, 0x22B23Cu);
    ctx->pc = 0x22B238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B234u;
            // 0x22b238: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B23Cu; }
        if (ctx->pc != 0x22B23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B23Cu; }
        if (ctx->pc != 0x22B23Cu) { return; }
    }
    ctx->pc = 0x22B23Cu;
label_22b23c:
    // 0x22b23c: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x22B23Cu;
    {
        const bool branch_taken_0x22b23c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b23c) {
            ctx->pc = 0x22B300u;
            goto label_22b300;
        }
    }
    ctx->pc = 0x22B244u;
    // 0x22b244: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B244u;
    {
        const bool branch_taken_0x22b244 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b244) {
            ctx->pc = 0x22B254u;
            goto label_22b254;
        }
    }
    ctx->pc = 0x22B24Cu;
    // 0x22b24c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x22B24Cu;
    {
        const bool branch_taken_0x22b24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B24Cu;
            // 0x22b250: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b24c) {
            ctx->pc = 0x22B304u;
            goto label_22b304;
        }
    }
    ctx->pc = 0x22B254u;
label_22b254:
    // 0x22b254: 0x8e060070  lw          $a2, 0x70($s0)
    ctx->pc = 0x22b254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x22b258: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22b258u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b25c: 0x8e250070  lw          $a1, 0x70($s1)
    ctx->pc = 0x22b25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x22b260: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B260u;
    {
        const bool branch_taken_0x22b260 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B260u;
            // 0x22b264: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b260) {
            ctx->pc = 0x22B270u;
            goto label_22b270;
        }
    }
    ctx->pc = 0x22B268u;
    // 0x22b268: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x22b268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x22b26c: 0x0  nop
    ctx->pc = 0x22b26cu;
    // NOP
label_22b270:
    // 0x22b270: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B270u;
    {
        const bool branch_taken_0x22b270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b270) {
            ctx->pc = 0x22B280u;
            goto label_22b280;
        }
    }
    ctx->pc = 0x22B278u;
    // 0x22b278: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x22b278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x22b27c: 0x0  nop
    ctx->pc = 0x22b27cu;
    // NOP
label_22b280:
    // 0x22b280: 0x16450008  bne         $s2, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22B280u;
    {
        const bool branch_taken_0x22b280 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        if (branch_taken_0x22b280) {
            ctx->pc = 0x22B2A4u;
            goto label_22b2a4;
        }
    }
    ctx->pc = 0x22B288u;
    // 0x22b288: 0xae260070  sw          $a2, 0x70($s1)
    ctx->pc = 0x22b288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 6));
    // 0x22b28c: 0xacd10074  sw          $s1, 0x74($a2)
    ctx->pc = 0x22b28cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 17));
    // 0x22b290: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x22b290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x22b294: 0xac500074  sw          $s0, 0x74($v0)
    ctx->pc = 0x22b294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 16));
    // 0x22b298: 0xae440074  sw          $a0, 0x74($s2)
    ctx->pc = 0x22b298u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 4));
    // 0x22b29c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x22B29Cu;
    {
        const bool branch_taken_0x22b29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B29Cu;
            // 0x22b2a0: 0xac920070  sw          $s2, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b29c) {
            ctx->pc = 0x22B300u;
            goto label_22b300;
        }
    }
    ctx->pc = 0x22B2A4u;
label_22b2a4:
    // 0x22b2a4: 0x14460008  bne         $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x22B2A4u;
    {
        const bool branch_taken_0x22b2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x22b2a4) {
            ctx->pc = 0x22B2C8u;
            goto label_22b2c8;
        }
    }
    ctx->pc = 0x22B2ACu;
    // 0x22b2ac: 0xae060070  sw          $a2, 0x70($s0)
    ctx->pc = 0x22b2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 6));
    // 0x22b2b0: 0xacb00074  sw          $s0, 0x74($a1)
    ctx->pc = 0x22b2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 16));
    // 0x22b2b4: 0xae320070  sw          $s2, 0x70($s1)
    ctx->pc = 0x22b2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 18));
    // 0x22b2b8: 0xae510074  sw          $s1, 0x74($s2)
    ctx->pc = 0x22b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 17));
    // 0x22b2bc: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x22b2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x22b2c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x22B2C0u;
    {
        const bool branch_taken_0x22b2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B2C0u;
            // 0x22b2c4: 0xac620070  sw          $v0, 0x70($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b2c0) {
            ctx->pc = 0x22B300u;
            goto label_22b300;
        }
    }
    ctx->pc = 0x22B2C8u;
label_22b2c8:
    // 0x22b2c8: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x22B2C8u;
    {
        const bool branch_taken_0x22b2c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B2C8u;
            // 0x22b2cc: 0xae260070  sw          $a2, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b2c8) {
            ctx->pc = 0x22B2D4u;
            goto label_22b2d4;
        }
    }
    ctx->pc = 0x22B2D0u;
    // 0x22b2d0: 0xacd10074  sw          $s1, 0x74($a2)
    ctx->pc = 0x22b2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 116), GPR_U32(ctx, 17));
label_22b2d4:
    // 0x22b2d4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B2D4u;
    {
        const bool branch_taken_0x22b2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b2d4) {
            ctx->pc = 0x22B2E4u;
            goto label_22b2e4;
        }
    }
    ctx->pc = 0x22B2DCu;
    // 0x22b2dc: 0xac430074  sw          $v1, 0x74($v0)
    ctx->pc = 0x22b2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 3));
    // 0x22b2e0: 0xac620070  sw          $v0, 0x70($v1)
    ctx->pc = 0x22b2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
label_22b2e4:
    // 0x22b2e4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x22B2E4u;
    {
        const bool branch_taken_0x22b2e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B2E4u;
            // 0x22b2e8: 0xae050070  sw          $a1, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b2e4) {
            ctx->pc = 0x22B2F0u;
            goto label_22b2f0;
        }
    }
    ctx->pc = 0x22B2ECu;
    // 0x22b2ec: 0xacb00074  sw          $s0, 0x74($a1)
    ctx->pc = 0x22b2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 16));
label_22b2f0:
    // 0x22b2f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22B2F0u;
    {
        const bool branch_taken_0x22b2f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b2f0) {
            ctx->pc = 0x22B300u;
            goto label_22b300;
        }
    }
    ctx->pc = 0x22B2F8u;
    // 0x22b2f8: 0xae440074  sw          $a0, 0x74($s2)
    ctx->pc = 0x22b2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 4));
    // 0x22b2fc: 0xac920070  sw          $s2, 0x70($a0)
    ctx->pc = 0x22b2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 18));
label_22b300:
    // 0x22b300: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x22b300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_22b304:
    // 0x22b304: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x22b304u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b308: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22b308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b30c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22b30cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b310: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22b310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b314: 0x3e00008  jr          $ra
    ctx->pc = 0x22B314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B314u;
            // 0x22b318: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22B31Cu;
}
