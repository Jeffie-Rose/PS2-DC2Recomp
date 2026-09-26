#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MakeAnd3DPosSet__6ClsMesFPcPfii
// Address: 0x159000 - 0x159128
void MakeAnd3DPosSet__6ClsMesFPcPfii_0x159000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MakeAnd3DPosSet__6ClsMesFPcPfii_0x159000");
#endif

    switch (ctx->pc) {
        case 0x159040u: goto label_159040;
        case 0x159060u: goto label_159060;
        default: break;
    }

    ctx->pc = 0x159000u;

    // 0x159000: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x159000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x159004: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x159004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x159008: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x159008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15900c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15900cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x159010: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x159010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159014: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x159014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x159018: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x159018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15901c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15901cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x159020: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x159020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159024: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x159024u;
    {
        const bool branch_taken_0x159024 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x159028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159024u;
            // 0x159028: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159024) {
            ctx->pc = 0x159034u;
            goto label_159034;
        }
    }
    ctx->pc = 0x15902Cu;
    // 0x15902c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x15902Cu;
    {
        const bool branch_taken_0x15902c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15902Cu;
            // 0x159030: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15902c) {
            ctx->pc = 0x15910Cu;
            goto label_15910c;
        }
    }
    ctx->pc = 0x159034u;
label_159034:
    // 0x159034: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x159034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159038: 0xc05166c  jal         func_1459B0
    ctx->pc = 0x159038u;
    SET_GPR_U32(ctx, 31, 0x159040u);
    ctx->pc = 0x15903Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159038u;
            // 0x15903c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1459B0u;
    if (runtime->hasFunction(0x1459B0u)) {
        auto targetFn = runtime->lookupFunction(0x1459B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159040u; }
        if (ctx->pc != 0x159040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldScreen__FPiPf_0x1459b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159040u; }
        if (ctx->pc != 0x159040u) { return; }
    }
    ctx->pc = 0x159040u;
label_159040:
    // 0x159040: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159040u;
    {
        const bool branch_taken_0x159040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159040u;
            // 0x159044: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159040) {
            ctx->pc = 0x159050u;
            goto label_159050;
        }
    }
    ctx->pc = 0x159048u;
    // 0x159048: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x159048u;
    {
        const bool branch_taken_0x159048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15904Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159048u;
            // 0x15904c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159048) {
            ctx->pc = 0x15910Cu;
            goto label_15910c;
        }
    }
    ctx->pc = 0x159050u;
label_159050:
    // 0x159050: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x159050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159054: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x159054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159058: 0xc05638c  jal         func_158E30
    ctx->pc = 0x159058u;
    SET_GPR_U32(ctx, 31, 0x159060u);
    ctx->pc = 0x15905Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159058u;
            // 0x15905c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158E30u;
    if (runtime->hasFunction(0x158E30u)) {
        auto targetFn = runtime->lookupFunction(0x158E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159060u; }
        if (ctx->pc != 0x159060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMesWin__6ClsMesFPcii_0x158e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159060u; }
        if (ctx->pc != 0x159060u) { return; }
    }
    ctx->pc = 0x159060u;
label_159060:
    // 0x159060: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x159060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159064: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x159064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x159068: 0x8e4500d8  lw          $a1, 0xD8($s2)
    ctx->pc = 0x159068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x15906c: 0x8e4600dc  lw          $a2, 0xDC($s2)
    ctx->pc = 0x15906cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x159070: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x159070u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x159074: 0x22103  sra         $a0, $v0, 4
    ctx->pc = 0x159074u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 4));
    // 0x159078: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x159078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x15907c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x15907cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x159080: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x159080u;
    {
        const bool branch_taken_0x159080 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x159084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159080u;
            // 0x159084: 0x51043  sra         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159080) {
            ctx->pc = 0x159090u;
            goto label_159090;
        }
    }
    ctx->pc = 0x159088u;
    // 0x159088: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x159088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15908c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x15908cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_159090:
    // 0x159090: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x159090u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x159094: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x159094u;
    {
        const bool branch_taken_0x159094 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x159094) {
            ctx->pc = 0x1590A4u;
            goto label_1590a4;
        }
    }
    ctx->pc = 0x15909Cu;
    // 0x15909c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x15909Cu;
    {
        const bool branch_taken_0x15909c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1590A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15909Cu;
            // 0x1590a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15909c) {
            ctx->pc = 0x15910Cu;
            goto label_15910c;
        }
    }
    ctx->pc = 0x1590A4u;
label_1590a4:
    // 0x1590a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1590a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1590a8: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x1590a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1590ac: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1590acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1590b0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1590B0u;
    {
        const bool branch_taken_0x1590b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1590B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1590B0u;
            // 0x1590b4: 0x61043  sra         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1590b0) {
            ctx->pc = 0x1590C0u;
            goto label_1590c0;
        }
    }
    ctx->pc = 0x1590B8u;
    // 0x1590b8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1590B8u;
    {
        const bool branch_taken_0x1590b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1590BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1590B8u;
            // 0x1590bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1590b8) {
            ctx->pc = 0x15910Cu;
            goto label_15910c;
        }
    }
    ctx->pc = 0x1590C0u;
label_1590c0:
    // 0x1590c0: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1590C0u;
    {
        const bool branch_taken_0x1590c0 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1590c0) {
            ctx->pc = 0x1590D0u;
            goto label_1590d0;
        }
    }
    ctx->pc = 0x1590C8u;
    // 0x1590c8: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1590c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1590cc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1590ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1590d0:
    // 0x1590d0: 0x823023  subu        $a2, $a0, $v0
    ctx->pc = 0x1590d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1590d4: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1590D4u;
    {
        const bool branch_taken_0x1590d4 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1590d4) {
            ctx->pc = 0x1590E4u;
            goto label_1590e4;
        }
    }
    ctx->pc = 0x1590DCu;
    // 0x1590dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1590DCu;
    {
        const bool branch_taken_0x1590dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1590E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1590DCu;
            // 0x1590e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1590dc) {
            ctx->pc = 0x15910Cu;
            goto label_15910c;
        }
    }
    ctx->pc = 0x1590E4u;
label_1590e4:
    // 0x1590e4: 0x8f838784  lw          $v1, -0x787C($gp)
    ctx->pc = 0x1590e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x1590e8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1590e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1590ec: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1590ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1590f0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1590F0u;
    {
        const bool branch_taken_0x1590f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1590F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1590F0u;
            // 0x1590f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1590f0) {
            ctx->pc = 0x159100u;
            goto label_159100;
        }
    }
    ctx->pc = 0x1590F8u;
    // 0x1590f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1590F8u;
    {
        const bool branch_taken_0x1590f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1590FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1590F8u;
            // 0x1590fc: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1590f8) {
            ctx->pc = 0x159110u;
            goto label_159110;
        }
    }
    ctx->pc = 0x159100u;
label_159100:
    // 0x159100: 0xae450190  sw          $a1, 0x190($s2)
    ctx->pc = 0x159100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 400), GPR_U32(ctx, 5));
    // 0x159104: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x159104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159108: 0xae460194  sw          $a2, 0x194($s2)
    ctx->pc = 0x159108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 404), GPR_U32(ctx, 6));
label_15910c:
    // 0x15910c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15910cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_159110:
    // 0x159110: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x159110u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159114: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159114u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159118: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x159118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15911c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15911cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159120: 0x3e00008  jr          $ra
    ctx->pc = 0x159120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159120u;
            // 0x159124: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x159128u;
}
