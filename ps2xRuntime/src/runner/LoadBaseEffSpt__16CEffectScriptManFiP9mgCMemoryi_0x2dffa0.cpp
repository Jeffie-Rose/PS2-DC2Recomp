#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadBaseEffSpt__16CEffectScriptManFiP9mgCMemoryi
// Address: 0x2dffa0 - 0x2e00fc
void LoadBaseEffSpt__16CEffectScriptManFiP9mgCMemoryi_0x2dffa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadBaseEffSpt__16CEffectScriptManFiP9mgCMemoryi_0x2dffa0");
#endif

    switch (ctx->pc) {
        case 0x2dffd8u: goto label_2dffd8;
        case 0x2e0030u: goto label_2e0030;
        case 0x2e0050u: goto label_2e0050;
        case 0x2e00a4u: goto label_2e00a4;
        case 0x2e00d8u: goto label_2e00d8;
        default: break;
    }

    ctx->pc = 0x2dffa0u;

    // 0x2dffa0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x2dffa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x2dffa4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2dffa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dffa8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2dffa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2dffac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2dffacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2dffb0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2dffb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2dffb4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2dffb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2dffb8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2dffb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dffbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dffbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dffc0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2dffc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dffc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dffc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dffc8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2dffc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dffcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dffccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dffd0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2dffd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dffd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2dffd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dffd8:
    // 0x2dffd8: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x2dffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2dffdc: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x2dffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2dffe0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DFFE0u;
    {
        const bool branch_taken_0x2dffe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dffe0) {
            ctx->pc = 0x2DFFFCu;
            goto label_2dfffc;
        }
    }
    ctx->pc = 0x2DFFE8u;
    // 0x2dffe8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2dffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dffec: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DFFECu;
    {
        const bool branch_taken_0x2dffec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2DFFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFFECu;
            // 0x2dfff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dffec) {
            ctx->pc = 0x2DFFFCu;
            goto label_2dfffc;
        }
    }
    ctx->pc = 0x2DFFF4u;
    // 0x2dfff4: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2DFFF4u;
    {
        const bool branch_taken_0x2dfff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DFFF4u;
            // 0x2dfff8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfff4) {
            ctx->pc = 0x2E00DCu;
            goto label_2e00dc;
        }
    }
    ctx->pc = 0x2DFFFCu;
label_2dfffc:
    // 0x2dfffc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dfffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2e0000: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x2e0000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2e0004: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E0004u;
    {
        const bool branch_taken_0x2e0004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0004u;
            // 0x2e0008: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0004) {
            ctx->pc = 0x2DFFD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2dffd8;
        }
    }
    ctx->pc = 0x2E000Cu;
    // 0x2e000c: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x2e000cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e0010: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0010u;
    {
        const bool branch_taken_0x2e0010 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0010u;
            // 0x2e0014: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0010) {
            ctx->pc = 0x2E0020u;
            goto label_2e0020;
        }
    }
    ctx->pc = 0x2E0018u;
    // 0x2e0018: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2E0018u;
    {
        const bool branch_taken_0x2e0018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E001Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0018u;
            // 0x2e001c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0018) {
            ctx->pc = 0x2E00D8u;
            goto label_2e00d8;
        }
    }
    ctx->pc = 0x2E0020u;
label_2e0020:
    // 0x2e0020: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e0020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0024: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2e0024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2e0028: 0xc0b8318  jal         func_2E0C60
    ctx->pc = 0x2E0028u;
    SET_GPR_U32(ctx, 31, 0x2E0030u);
    ctx->pc = 0x2E002Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0028u;
            // 0x2e002c: 0x27a700f0  addiu       $a3, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C60u;
    if (runtime->hasFunction(0x2E0C60u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0030u; }
        if (ctx->pc != 0x2E0030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNeedFilePath__16CEffectScriptManFiPcPc_0x2e0c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0030u; }
        if (ctx->pc != 0x2E0030u) { return; }
    }
    ctx->pc = 0x2E0030u;
label_2e0030:
    // 0x2e0030: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0030u;
    {
        const bool branch_taken_0x2e0030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0030u;
            // 0x2e0034: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0030) {
            ctx->pc = 0x2E0040u;
            goto label_2e0040;
        }
    }
    ctx->pc = 0x2E0038u;
    // 0x2e0038: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2E0038u;
    {
        const bool branch_taken_0x2e0038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E003Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0038u;
            // 0x2e003c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0038) {
            ctx->pc = 0x2E00D8u;
            goto label_2e00d8;
        }
    }
    ctx->pc = 0x2E0040u;
label_2e0040:
    // 0x2e0040: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e0040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0044: 0x27a60178  addiu       $a2, $sp, 0x178
    ctx->pc = 0x2e0044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
    // 0x2e0048: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2E0048u;
    SET_GPR_U32(ctx, 31, 0x2E0050u);
    ctx->pc = 0x2E004Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0048u;
            // 0x2e004c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0050u; }
        if (ctx->pc != 0x2E0050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E0050u; }
        if (ctx->pc != 0x2E0050u) { return; }
    }
    ctx->pc = 0x2E0050u;
label_2e0050:
    // 0x2e0050: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E0050u;
    {
        const bool branch_taken_0x2e0050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e0050) {
            ctx->pc = 0x2E0068u;
            goto label_2e0068;
        }
    }
    ctx->pc = 0x2E0058u;
    // 0x2e0058: 0xafa00178  sw          $zero, 0x178($sp)
    ctx->pc = 0x2e0058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
    // 0x2e005c: 0x8e950008  lw          $s5, 0x8($s4)
    ctx->pc = 0x2e005cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2e0060: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E0060u;
    {
        const bool branch_taken_0x2e0060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0060u;
            // 0x2e0064: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0060) {
            ctx->pc = 0x2E0090u;
            goto label_2e0090;
        }
    }
    ctx->pc = 0x2E0068u;
label_2e0068:
    // 0x2e0068: 0x8fa40178  lw          $a0, 0x178($sp)
    ctx->pc = 0x2e0068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2e006c: 0x3083003f  andi        $v1, $a0, 0x3F
    ctx->pc = 0x2e006cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x2e0070: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0070u;
    {
        const bool branch_taken_0x2e0070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E0070u;
            // 0x2e0074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0070) {
            ctx->pc = 0x2E0080u;
            goto label_2e0080;
        }
    }
    ctx->pc = 0x2E0078u;
    // 0x2e0078: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2e0078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2e007c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2e007cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2e0080:
    // 0x2e0080: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2e0080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2e0084: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2e0084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2e0088: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e0088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e008c: 0x202a821  addu        $s5, $s0, $v0
    ctx->pc = 0x2e008cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2e0090:
    // 0x2e0090: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2e0090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e0094: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2e0094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0098: 0x27a6017c  addiu       $a2, $sp, 0x17C
    ctx->pc = 0x2e0098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
    // 0x2e009c: 0xc0524dc  jal         func_149370
    ctx->pc = 0x2E009Cu;
    SET_GPR_U32(ctx, 31, 0x2E00A4u);
    ctx->pc = 0x2E00A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E009Cu;
            // 0x2e00a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E00A4u; }
        if (ctx->pc != 0x2E00A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E00A4u; }
        if (ctx->pc != 0x2E00A4u) { return; }
    }
    ctx->pc = 0x2E00A4u;
label_2e00a4:
    // 0x2e00a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E00A4u;
    {
        const bool branch_taken_0x2e00a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E00A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E00A4u;
            // 0x2e00a8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e00a4) {
            ctx->pc = 0x2E00B4u;
            goto label_2e00b4;
        }
    }
    ctx->pc = 0x2E00ACu;
    // 0x2e00ac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E00ACu;
    {
        const bool branch_taken_0x2e00ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e00ac) {
            ctx->pc = 0x2E00D8u;
            goto label_2e00d8;
        }
    }
    ctx->pc = 0x2E00B4u;
label_2e00b4:
    // 0x2e00b4: 0x8fa70178  lw          $a3, 0x178($sp)
    ctx->pc = 0x2e00b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x2e00b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e00b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e00bc: 0x8fa9017c  lw          $t1, 0x17C($sp)
    ctx->pc = 0x2e00bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x2e00c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e00c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e00c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e00c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e00c8: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2e00c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e00cc: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2e00ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e00d0: 0xc0b8108  jal         func_2E0420
    ctx->pc = 0x2E00D0u;
    SET_GPR_U32(ctx, 31, 0x2E00D8u);
    ctx->pc = 0x2E00D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E00D0u;
            // 0x2e00d4: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0420u;
    if (runtime->hasFunction(0x2E0420u)) {
        auto targetFn = runtime->lookupFunction(0x2E0420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E00D8u; }
        if (ctx->pc != 0x2E00D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildBase__16CEffectScriptManFiP1iP1iP9mgCMemoryi_0x2e0420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E00D8u; }
        if (ctx->pc != 0x2E00D8u) { return; }
    }
    ctx->pc = 0x2E00D8u;
label_2e00d8:
    // 0x2e00d8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e00d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2e00dc:
    // 0x2e00dc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2e00dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e00e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e00e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e00e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e00e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e00e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e00e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e00ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e00ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e00f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e00f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e00f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E00F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E00F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E00F4u;
            // 0x2e00f8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E00FCu;
}
