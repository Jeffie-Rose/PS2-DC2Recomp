#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: read_pad__FP10PAD_STATUSii
// Address: 0x14a490 - 0x14a828
void read_pad__FP10PAD_STATUSii_0x14a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("read_pad__FP10PAD_STATUSii_0x14a490");
#endif

    switch (ctx->pc) {
        case 0x14a4e8u: goto label_14a4e8;
        case 0x14a578u: goto label_14a578;
        case 0x14a594u: goto label_14a594;
        case 0x14a668u: goto label_14a668;
        case 0x14a698u: goto label_14a698;
        case 0x14a6bcu: goto label_14a6bc;
        case 0x14a6e0u: goto label_14a6e0;
        case 0x14a71cu: goto label_14a71c;
        case 0x14a740u: goto label_14a740;
        case 0x14a778u: goto label_14a778;
        default: break;
    }

    ctx->pc = 0x14a490u;

    // 0x14a490: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x14a490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x14a494: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x14a494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14a498: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14a498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x14a49c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x14a49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14a4a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14a4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14a4a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14a4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14a4a8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x14a4a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x14a4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x14a4b0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x14a4b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14a4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14a4b8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x14a4b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14a4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14a4c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14a4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14a4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14a4c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14a4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a4cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14a4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14a4d0: 0x26d10018  addiu       $s1, $s6, 0x18
    ctx->pc = 0x14a4d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
    // 0x14a4d4: 0x26d00014  addiu       $s0, $s6, 0x14
    ctx->pc = 0x14a4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x14a4d8: 0x26de001c  addiu       $fp, $s6, 0x1C
    ctx->pc = 0x14a4d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 28));
    // 0x14a4dc: 0x26d20020  addiu       $s2, $s6, 0x20
    ctx->pc = 0x14a4dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x14a4e0: 0xc0485d6  jal         func_121758
    ctx->pc = 0x14A4E0u;
    SET_GPR_U32(ctx, 31, 0x14A4E8u);
    ctx->pc = 0x14A4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A4E0u;
            // 0x14a4e4: 0x26d30024  addiu       $s3, $s6, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121758u;
    if (runtime->hasFunction(0x121758u)) {
        auto targetFn = runtime->lookupFunction(0x121758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4E8u; }
        if (ctx->pc != 0x14A4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadGetState_0x121758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A4E8u; }
        if (ctx->pc != 0x14A4E8u) { return; }
    }
    ctx->pc = 0x14A4E8u;
label_14a4e8:
    // 0x14a4e8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14a4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x14a4ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14a4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a4f0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14A4F0u;
    {
        const bool branch_taken_0x14a4f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a4f0) {
            ctx->pc = 0x14A4FCu;
            goto label_14a4fc;
        }
    }
    ctx->pc = 0x14A4F8u;
    // 0x14a4f8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_14a4fc:
    // 0x14a4fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x14a4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a500: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x14a500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x14a504: 0x1062008b  beq         $v1, $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x14A504u;
    {
        const bool branch_taken_0x14a504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A504u;
            // 0x14a508: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a504) {
            ctx->pc = 0x14A734u;
            goto label_14a734;
        }
    }
    ctx->pc = 0x14A50Cu;
    // 0x14a50c: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x14a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x14a510: 0x1062006f  beq         $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x14A510u;
    {
        const bool branch_taken_0x14a510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A510u;
            // 0x14a514: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a510) {
            ctx->pc = 0x14A6D0u;
            goto label_14a6d0;
        }
    }
    ctx->pc = 0x14A518u;
    // 0x14a518: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x14a518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x14a51c: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x14A51Cu;
    {
        const bool branch_taken_0x14a51c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A51Cu;
            // 0x14a520: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a51c) {
            ctx->pc = 0x14A6B4u;
            goto label_14a6b4;
        }
    }
    ctx->pc = 0x14A524u;
    // 0x14a524: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x14a524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x14a528: 0x10620057  beq         $v1, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x14A528u;
    {
        const bool branch_taken_0x14a528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A528u;
            // 0x14a52c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a528) {
            ctx->pc = 0x14A688u;
            goto label_14a688;
        }
    }
    ctx->pc = 0x14A530u;
    // 0x14a530: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x14a530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x14a534: 0x10620048  beq         $v1, $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x14A534u;
    {
        const bool branch_taken_0x14a534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A534u;
            // 0x14a538: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a534) {
            ctx->pc = 0x14A658u;
            goto label_14a658;
        }
    }
    ctx->pc = 0x14A53Cu;
    // 0x14a53c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A53Cu;
    {
        const bool branch_taken_0x14a53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a53c) {
            ctx->pc = 0x14A54Cu;
            goto label_14a54c;
        }
    }
    ctx->pc = 0x14A544u;
    // 0x14a544: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x14A544u;
    {
        const bool branch_taken_0x14a544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A544u;
            // 0x14a548: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a544) {
            ctx->pc = 0x14A754u;
            goto label_14a754;
        }
    }
    ctx->pc = 0x14A54Cu;
label_14a54c:
    // 0x14a54c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x14a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14a550: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14a550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14a554: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A554u;
    {
        const bool branch_taken_0x14a554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A554u;
            // 0x14a558: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a554) {
            ctx->pc = 0x14A568u;
            goto label_14a568;
        }
    }
    ctx->pc = 0x14A55Cu;
    // 0x14a55c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a560: 0x14620093  bne         $v1, $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x14A560u;
    {
        const bool branch_taken_0x14a560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a560) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A568u;
label_14a568:
    // 0x14a568: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14a568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a56c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14a56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a570: 0xc0486ce  jal         func_121B38
    ctx->pc = 0x14A570u;
    SET_GPR_U32(ctx, 31, 0x14A578u);
    ctx->pc = 0x14A574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A570u;
            // 0x14a574: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121B38u;
    if (runtime->hasFunction(0x121B38u)) {
        auto targetFn = runtime->lookupFunction(0x121B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A578u; }
        if (ctx->pc != 0x14A578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadInfoMode_0x121b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A578u; }
        if (ctx->pc != 0x14A578u) { return; }
    }
    ctx->pc = 0x14A578u;
label_14a578:
    // 0x14a578: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14a578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a57c: 0x1220008c  beqz        $s1, . + 4 + (0x8C << 2)
    ctx->pc = 0x14A57Cu;
    {
        const bool branch_taken_0x14a57c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A57Cu;
            // 0x14a580: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a57c) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A584u;
    // 0x14a584: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14a584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a588: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14a588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a58c: 0xc0486ce  jal         func_121B38
    ctx->pc = 0x14A58Cu;
    SET_GPR_U32(ctx, 31, 0x14A594u);
    ctx->pc = 0x14A590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A58Cu;
            // 0x14a590: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121B38u;
    if (runtime->hasFunction(0x121B38u)) {
        auto targetFn = runtime->lookupFunction(0x121B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A594u; }
        if (ctx->pc != 0x14A594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadInfoMode_0x121b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A594u; }
        if (ctx->pc != 0x14A594u) { return; }
    }
    ctx->pc = 0x14A594u;
label_14a594:
    // 0x14a594: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x14a594u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x14a598: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x14a598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x14a59c: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14A59Cu;
    {
        const bool branch_taken_0x14a59c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x14a59c) {
            ctx->pc = 0x14A5A8u;
            goto label_14a5a8;
        }
    }
    ctx->pc = 0x14A5A4u;
    // 0x14a5a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14a5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14a5a8:
    // 0x14a5a8: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x14a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x14a5ac: 0x12220026  beq         $s1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x14A5ACu;
    {
        const bool branch_taken_0x14a5ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A5B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5ACu;
            // 0x14a5b0: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5ac) {
            ctx->pc = 0x14A648u;
            goto label_14a648;
        }
    }
    ctx->pc = 0x14A5B4u;
    // 0x14a5b4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x14a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14a5b8: 0x12220021  beq         $s1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x14A5B8u;
    {
        const bool branch_taken_0x14a5b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5B8u;
            // 0x14a5bc: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5b8) {
            ctx->pc = 0x14A640u;
            goto label_14a640;
        }
    }
    ctx->pc = 0x14A5C0u;
    // 0x14a5c0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x14a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14a5c4: 0x1222001c  beq         $s1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14A5C4u;
    {
        const bool branch_taken_0x14a5c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5C4u;
            // 0x14a5c8: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5c4) {
            ctx->pc = 0x14A638u;
            goto label_14a638;
        }
    }
    ctx->pc = 0x14A5CCu;
    // 0x14a5cc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14a5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14a5d0: 0x12220017  beq         $s1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14A5D0u;
    {
        const bool branch_taken_0x14a5d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5D0u;
            // 0x14a5d4: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5d0) {
            ctx->pc = 0x14A630u;
            goto label_14a630;
        }
    }
    ctx->pc = 0x14A5D8u;
    // 0x14a5d8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x14a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14a5dc: 0x12220012  beq         $s1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14A5DCu;
    {
        const bool branch_taken_0x14a5dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5DCu;
            // 0x14a5e0: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5dc) {
            ctx->pc = 0x14A628u;
            goto label_14a628;
        }
    }
    ctx->pc = 0x14A5E4u;
    // 0x14a5e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14a5e8: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14A5E8u;
    {
        const bool branch_taken_0x14a5e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5E8u;
            // 0x14a5ec: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5e8) {
            ctx->pc = 0x14A620u;
            goto label_14a620;
        }
    }
    ctx->pc = 0x14A5F0u;
    // 0x14a5f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14a5f4: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14A5F4u;
    {
        const bool branch_taken_0x14a5f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A5F4u;
            // 0x14a5f8: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a5f4) {
            ctx->pc = 0x14A618u;
            goto label_14a618;
        }
    }
    ctx->pc = 0x14A5FCu;
    // 0x14a5fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a600: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A600u;
    {
        const bool branch_taken_0x14a600 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A600u;
            // 0x14a604: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a600) {
            ctx->pc = 0x14A610u;
            goto label_14a610;
        }
    }
    ctx->pc = 0x14A608u;
    // 0x14a608: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14A608u;
    {
        const bool branch_taken_0x14a608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A608u;
            // 0x14a60c: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a608) {
            ctx->pc = 0x14A650u;
            goto label_14a650;
        }
    }
    ctx->pc = 0x14A610u;
label_14a610:
    // 0x14a610: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x14A610u;
    {
        const bool branch_taken_0x14a610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A610u;
            // 0x14a614: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a610) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A618u;
label_14a618:
    // 0x14a618: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x14A618u;
    {
        const bool branch_taken_0x14a618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A618u;
            // 0x14a61c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a618) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A620u;
label_14a620:
    // 0x14a620: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x14A620u;
    {
        const bool branch_taken_0x14a620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A620u;
            // 0x14a624: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a620) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A628u;
label_14a628:
    // 0x14a628: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x14A628u;
    {
        const bool branch_taken_0x14a628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A628u;
            // 0x14a62c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a628) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A630u;
label_14a630:
    // 0x14a630: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x14A630u;
    {
        const bool branch_taken_0x14a630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A630u;
            // 0x14a634: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a630) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A638u;
label_14a638:
    // 0x14a638: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x14A638u;
    {
        const bool branch_taken_0x14a638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A638u;
            // 0x14a63c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a638) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A640u;
label_14a640:
    // 0x14a640: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x14A640u;
    {
        const bool branch_taken_0x14a640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A640u;
            // 0x14a644: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a640) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A648u;
label_14a648:
    // 0x14a648: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x14A648u;
    {
        const bool branch_taken_0x14a648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A648u;
            // 0x14a64c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a648) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A650u;
label_14a650:
    // 0x14a650: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x14A650u;
    {
        const bool branch_taken_0x14a650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A650u;
            // 0x14a654: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a650) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A658u;
label_14a658:
    // 0x14a658: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14a658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a65c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14a65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a660: 0xc0486ce  jal         func_121B38
    ctx->pc = 0x14A660u;
    SET_GPR_U32(ctx, 31, 0x14A668u);
    ctx->pc = 0x14A664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A660u;
            // 0x14a664: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121B38u;
    if (runtime->hasFunction(0x121B38u)) {
        auto targetFn = runtime->lookupFunction(0x121B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A668u; }
        if (ctx->pc != 0x14A668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadInfoMode_0x121b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A668u; }
        if (ctx->pc != 0x14A668u) { return; }
    }
    ctx->pc = 0x14A668u;
label_14a668:
    // 0x14a668: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A668u;
    {
        const bool branch_taken_0x14a668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A668u;
            // 0x14a66c: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a668) {
            ctx->pc = 0x14A678u;
            goto label_14a678;
        }
    }
    ctx->pc = 0x14A670u;
    // 0x14a670: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x14A670u;
    {
        const bool branch_taken_0x14a670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A670u;
            // 0x14a674: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a670) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A678u;
label_14a678:
    // 0x14a678: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a67c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14a680: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14a680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14a684: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14a684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_14a688:
    // 0x14a688: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14a688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a68c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14a68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a690: 0xc04871c  jal         func_121C70
    ctx->pc = 0x14A690u;
    SET_GPR_U32(ctx, 31, 0x14A698u);
    ctx->pc = 0x14A694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A690u;
            // 0x14a694: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121C70u;
    if (runtime->hasFunction(0x121C70u)) {
        auto targetFn = runtime->lookupFunction(0x121C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A698u; }
        if (ctx->pc != 0x14A698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadSetMainMode_0x121c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A698u; }
        if (ctx->pc != 0x14A698u) { return; }
    }
    ctx->pc = 0x14A698u;
label_14a698:
    // 0x14a698: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14a698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a69c: 0x14430044  bne         $v0, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x14A69Cu;
    {
        const bool branch_taken_0x14a69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x14a69c) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A6A4u;
    // 0x14a6a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a6a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14a6ac: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x14A6ACu;
    {
        const bool branch_taken_0x14a6ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A6ACu;
            // 0x14a6b0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6ac) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A6B4u;
label_14a6b4:
    // 0x14a6b4: 0xc0485d6  jal         func_121758
    ctx->pc = 0x14A6B4u;
    SET_GPR_U32(ctx, 31, 0x14A6BCu);
    ctx->pc = 0x14A6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A6B4u;
            // 0x14a6b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121758u;
    if (runtime->hasFunction(0x121758u)) {
        auto targetFn = runtime->lookupFunction(0x121758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A6BCu; }
        if (ctx->pc != 0x14A6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadGetState_0x121758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A6BCu; }
        if (ctx->pc != 0x14A6BCu) { return; }
    }
    ctx->pc = 0x14A6BCu;
label_14a6bc:
    // 0x14a6bc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x14a6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14a6c0: 0x1043003b  beq         $v0, $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x14A6C0u;
    {
        const bool branch_taken_0x14a6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14a6c0) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A6C8u;
    // 0x14a6c8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x14A6C8u;
    {
        const bool branch_taken_0x14a6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A6C8u;
            // 0x14a6cc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6c8) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A6D0u;
label_14a6d0:
    // 0x14a6d0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14a6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a6d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x14a6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14a6d8: 0xc04863e  jal         func_1218F8
    ctx->pc = 0x14A6D8u;
    SET_GPR_U32(ctx, 31, 0x14A6E0u);
    ctx->pc = 0x14A6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A6D8u;
            // 0x14a6dc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1218F8u;
    if (runtime->hasFunction(0x1218F8u)) {
        auto targetFn = runtime->lookupFunction(0x1218F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A6E0u; }
        if (ctx->pc != 0x14A6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadInfoAct_0x1218f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A6E0u; }
        if (ctx->pc != 0x14A6E0u) { return; }
    }
    ctx->pc = 0x14A6E0u;
label_14a6e0:
    // 0x14a6e0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14A6E0u;
    {
        const bool branch_taken_0x14a6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A6E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A6E0u;
            // 0x14a6e4: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6e0) {
            ctx->pc = 0x14A6ECu;
            goto label_14a6ec;
        }
    }
    ctx->pc = 0x14A6E8u;
    // 0x14a6e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14a6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_14a6ec:
    // 0x14a6ec: 0xa2c0002e  sb          $zero, 0x2E($s6)
    ctx->pc = 0x14a6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 46), (uint8_t)GPR_U32(ctx, 0));
    // 0x14a6f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a6f4: 0xa2c2002f  sb          $v0, 0x2F($s6)
    ctx->pc = 0x14a6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 47), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a6f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14a6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a6fc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x14a6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14a700: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x14a700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a704: 0xa2c20030  sb          $v0, 0x30($s6)
    ctx->pc = 0x14a704u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a708: 0x26c6002e  addiu       $a2, $s6, 0x2E
    ctx->pc = 0x14a708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 46));
    // 0x14a70c: 0xa2c20031  sb          $v0, 0x31($s6)
    ctx->pc = 0x14a70cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a710: 0xa2c20032  sb          $v0, 0x32($s6)
    ctx->pc = 0x14a710u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 50), (uint8_t)GPR_U32(ctx, 2));
    // 0x14a714: 0xc04877a  jal         func_121DE8
    ctx->pc = 0x14A714u;
    SET_GPR_U32(ctx, 31, 0x14A71Cu);
    ctx->pc = 0x14A718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A714u;
            // 0x14a718: 0xa2c20033  sb          $v0, 0x33($s6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 22), 51), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121DE8u;
    if (runtime->hasFunction(0x121DE8u)) {
        auto targetFn = runtime->lookupFunction(0x121DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A71Cu; }
        if (ctx->pc != 0x14A71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadSetActAlign_0x121de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A71Cu; }
        if (ctx->pc != 0x14A71Cu) { return; }
    }
    ctx->pc = 0x14A71Cu;
label_14a71c:
    // 0x14a71c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x14A71Cu;
    {
        const bool branch_taken_0x14a71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a71c) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A724u;
    // 0x14a724: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14a724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14a728: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14a72c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x14A72Cu;
    {
        const bool branch_taken_0x14a72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A72Cu;
            // 0x14a730: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a72c) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A734u;
label_14a734:
    // 0x14a734: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14a734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a738: 0xc0485d6  jal         func_121758
    ctx->pc = 0x14A738u;
    SET_GPR_U32(ctx, 31, 0x14A740u);
    ctx->pc = 0x14A73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A738u;
            // 0x14a73c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121758u;
    if (runtime->hasFunction(0x121758u)) {
        auto targetFn = runtime->lookupFunction(0x121758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A740u; }
        if (ctx->pc != 0x14A740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePadGetState_0x121758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A740u; }
        if (ctx->pc != 0x14A740u) { return; }
    }
    ctx->pc = 0x14A740u;
label_14a740:
    // 0x14a740: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x14a740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14a744: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x14A744u;
    {
        const bool branch_taken_0x14a744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x14A748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A744u;
            // 0x14a748: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a744) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A74Cu;
    // 0x14a74c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14A74Cu;
    {
        const bool branch_taken_0x14a74c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A74Cu;
            // 0x14a750: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a74c) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A754u;
label_14a754:
    // 0x14a754: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x14a754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14a758: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A758u;
    {
        const bool branch_taken_0x14a758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14A75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A758u;
            // 0x14a75c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a758) {
            ctx->pc = 0x14A76Cu;
            goto label_14a76c;
        }
    }
    ctx->pc = 0x14A760u;
    // 0x14a760: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x14a760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14a764: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14A764u;
    {
        const bool branch_taken_0x14a764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14a764) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A76Cu;
label_14a76c:
    // 0x14a76c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x14a76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a770: 0xc0528f4  jal         func_14A3D0
    ctx->pc = 0x14A770u;
    SET_GPR_U32(ctx, 31, 0x14A778u);
    ctx->pc = 0x14A774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14A770u;
            // 0x14a774: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A3D0u;
    if (runtime->hasFunction(0x14A3D0u)) {
        auto targetFn = runtime->lookupFunction(0x14A3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A778u; }
        if (ctx->pc != 0x14A778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        pad_button_read__FP10PAD_STATUSii_0x14a3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A778u; }
        if (ctx->pc != 0x14A778u) { return; }
    }
    ctx->pc = 0x14A778u;
label_14a778:
    // 0x14a778: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14A778u;
    {
        const bool branch_taken_0x14a778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A778u;
            // 0x14a77c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a778) {
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A780u;
    // 0x14a780: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x14a780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x14a784: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A784u;
    {
        const bool branch_taken_0x14a784 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a784) {
            ctx->pc = 0x14A7A4u;
            goto label_14a7a4;
        }
    }
    ctx->pc = 0x14A78Cu;
    // 0x14a78c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a790: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A790u;
    {
        const bool branch_taken_0x14a790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14a790) {
            ctx->pc = 0x14A7A4u;
            goto label_14a7a4;
        }
    }
    ctx->pc = 0x14A798u;
    // 0x14a798: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x14a798u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x14a79c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14A79Cu;
    {
        const bool branch_taken_0x14a79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A79Cu;
            // 0x14a7a0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a79c) {
            ctx->pc = 0x14A7A8u;
            goto label_14a7a8;
        }
    }
    ctx->pc = 0x14A7A4u;
label_14a7a4:
    // 0x14a7a4: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x14a7a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14a7a8:
    // 0x14a7a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a7ac: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x14a7acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_14a7b0:
    // 0x14a7b0: 0x16e00007  bnez        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A7B0u;
    {
        const bool branch_taken_0x14a7b0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a7b0) {
            ctx->pc = 0x14A7D0u;
            goto label_14a7d0;
        }
    }
    ctx->pc = 0x14A7B8u;
    // 0x14a7b8: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x14a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
    // 0x14a7bc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x14a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14a7c0: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x14a7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x14a7c4: 0xaec20008  sw          $v0, 0x8($s6)
    ctx->pc = 0x14a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
    // 0x14a7c8: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x14a7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x14a7cc: 0xaec20010  sw          $v0, 0x10($s6)
    ctx->pc = 0x14a7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 2));
label_14a7d0:
    // 0x14a7d0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a7d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14a7d8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14A7D8u;
    {
        const bool branch_taken_0x14a7d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14A7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A7D8u;
            // 0x14a7dc: 0x2e0102d  daddu       $v0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a7d8) {
            ctx->pc = 0x14A7F8u;
            goto label_14a7f8;
        }
    }
    ctx->pc = 0x14A7E0u;
    // 0x14a7e0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x14a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14a7e4: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x14a7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x14a7e8: 0xaec20008  sw          $v0, 0x8($s6)
    ctx->pc = 0x14a7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
    // 0x14a7ec: 0xaec2000c  sw          $v0, 0xC($s6)
    ctx->pc = 0x14a7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 2));
    // 0x14a7f0: 0xaec20010  sw          $v0, 0x10($s6)
    ctx->pc = 0x14a7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 2));
    // 0x14a7f4: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x14a7f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_14a7f8:
    // 0x14a7f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14a7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14a7fc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x14a7fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14a800: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x14a800u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14a804: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14a804u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14a808: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14a808u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14a80c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14a80cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14a810: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14a810u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a814: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14a814u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a818: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14a818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a81c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14a81cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a820: 0x3e00008  jr          $ra
    ctx->pc = 0x14A820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A820u;
            // 0x14a824: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14A828u;
}
