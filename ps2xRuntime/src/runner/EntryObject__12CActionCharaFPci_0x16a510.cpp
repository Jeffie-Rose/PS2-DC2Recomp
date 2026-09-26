#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EntryObject__12CActionCharaFPci
// Address: 0x16a510 - 0x16a5bc
void EntryObject__12CActionCharaFPci_0x16a510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EntryObject__12CActionCharaFPci_0x16a510");
#endif

    switch (ctx->pc) {
        case 0x16a52cu: goto label_16a52c;
        case 0x16a568u: goto label_16a568;
        default: break;
    }

    ctx->pc = 0x16a510u;

    // 0x16a510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16a510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16a514: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x16a514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16a518: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16a518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16a51c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16a520: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x16a520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a524: 0xc05af3c  jal         func_16BCF0
    ctx->pc = 0x16A524u;
    SET_GPR_U32(ctx, 31, 0x16A52Cu);
    ctx->pc = 0x16A528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A524u;
            // 0x16a528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A52Cu; }
        if (ctx->pc != 0x16A52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A52Cu; }
        if (ctx->pc != 0x16A52Cu) { return; }
    }
    ctx->pc = 0x16A52Cu;
label_16a52c:
    // 0x16a52c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A52Cu;
    {
        const bool branch_taken_0x16a52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A52Cu;
            // 0x16a530: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a52c) {
            ctx->pc = 0x16A53Cu;
            goto label_16a53c;
        }
    }
    ctx->pc = 0x16A534u;
    // 0x16a534: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x16A534u;
    {
        const bool branch_taken_0x16a534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A534u;
            // 0x16a538: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a534) {
            ctx->pc = 0x16A5A8u;
            goto label_16a5a8;
        }
    }
    ctx->pc = 0x16A53Cu;
label_16a53c:
    // 0x16a53c: 0x12230009  beq         $s1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16A53Cu;
    {
        const bool branch_taken_0x16a53c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A53Cu;
            // 0x16a540: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a53c) {
            ctx->pc = 0x16A564u;
            goto label_16a564;
        }
    }
    ctx->pc = 0x16A544u;
    // 0x16a544: 0x111940  sll         $v1, $s1, 5
    ctx->pc = 0x16a544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x16a548: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16a548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16a54c: 0xac620c00  sw          $v0, 0xC00($v1)
    ctx->pc = 0x16a54cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3072), GPR_U32(ctx, 2));
    // 0x16a550: 0xac600c18  sw          $zero, 0xC18($v1)
    ctx->pc = 0x16a550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3096), GPR_U32(ctx, 0));
    // 0x16a554: 0x24620c00  addiu       $v0, $v1, 0xC00
    ctx->pc = 0x16a554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3072));
    // 0x16a558: 0xac600c14  sw          $zero, 0xC14($v1)
    ctx->pc = 0x16a558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3092), GPR_U32(ctx, 0));
    // 0x16a55c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16A55Cu;
    {
        const bool branch_taken_0x16a55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A55Cu;
            // 0x16a560: 0xac600c10  sw          $zero, 0xC10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a55c) {
            ctx->pc = 0x16A5A8u;
            goto label_16a5a8;
        }
    }
    ctx->pc = 0x16A564u;
label_16a564:
    // 0x16a564: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a568:
    // 0x16a568: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x16a568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x16a56c: 0x8c630c00  lw          $v1, 0xC00($v1)
    ctx->pc = 0x16a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3072)));
    // 0x16a570: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16A570u;
    {
        const bool branch_taken_0x16a570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A570u;
            // 0x16a574: 0x41940  sll         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a570) {
            ctx->pc = 0x16A594u;
            goto label_16a594;
        }
    }
    ctx->pc = 0x16A578u;
    // 0x16a578: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16a578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16a57c: 0xac620c00  sw          $v0, 0xC00($v1)
    ctx->pc = 0x16a57cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3072), GPR_U32(ctx, 2));
    // 0x16a580: 0xac600c18  sw          $zero, 0xC18($v1)
    ctx->pc = 0x16a580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3096), GPR_U32(ctx, 0));
    // 0x16a584: 0x24620c00  addiu       $v0, $v1, 0xC00
    ctx->pc = 0x16a584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3072));
    // 0x16a588: 0xac600c14  sw          $zero, 0xC14($v1)
    ctx->pc = 0x16a588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3092), GPR_U32(ctx, 0));
    // 0x16a58c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16A58Cu;
    {
        const bool branch_taken_0x16a58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A58Cu;
            // 0x16a590: 0xac600c10  sw          $zero, 0xC10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a58c) {
            ctx->pc = 0x16A5A8u;
            goto label_16a5a8;
        }
    }
    ctx->pc = 0x16A594u;
label_16a594:
    // 0x16a594: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x16a594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16a598: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x16a598u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x16a59c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x16A59Cu;
    {
        const bool branch_taken_0x16a59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A59Cu;
            // 0x16a5a0: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a59c) {
            ctx->pc = 0x16A568u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16a568;
        }
    }
    ctx->pc = 0x16A5A4u;
    // 0x16a5a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16a5a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a5a8:
    // 0x16a5a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16a5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a5ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16a5acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a5b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a5b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x16A5B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A5B4u;
            // 0x16a5b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A5BCu;
}
