#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _dispRefImageField
// Address: 0x10c4f0 - 0x10c6a8
void _dispRefImageField_0x10c4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_dispRefImageField_0x10c4f0");
#endif

    switch (ctx->pc) {
        case 0x10c568u: goto label_10c568;
        case 0x10c590u: goto label_10c590;
        case 0x10c5f8u: goto label_10c5f8;
        case 0x10c638u: goto label_10c638;
        case 0x10c648u: goto label_10c648;
        default: break;
    }

    ctx->pc = 0x10c4f0u;

    // 0x10c4f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10c4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10c4f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c4f8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x10c4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x10c4fc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x10c4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10c500: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x10c500u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c504: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10c504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10c508: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x10c508u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c50c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10c50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10c510: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10c510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x10c514: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10c514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c518: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x10c518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x10c51c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x10c51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x10c520: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10c520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10c524: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x10c524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x10c528: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C528u;
    {
        const bool branch_taken_0x10c528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C528u;
            // 0x10c52c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c528) {
            ctx->pc = 0x10C540u;
            goto label_10c540;
        }
    }
    ctx->pc = 0x10C530u;
    // 0x10c530: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x10c530u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c534: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x10c534u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c538: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10C538u;
    {
        const bool branch_taken_0x10c538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C538u;
            // 0x10c53c: 0x24160040  addiu       $s6, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c538) {
            ctx->pc = 0x10C548u;
            goto label_10c548;
        }
    }
    ctx->pc = 0x10C540u;
label_10c540:
    // 0x10c540: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x10c540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c544: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x10c544u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_10c548:
    // 0x10c548: 0x8e270858  lw          $a3, 0x858($s1)
    ctx->pc = 0x10c548u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x10c54c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c54cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c550: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10c550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c554: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x10c554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c558: 0x24e80020  addiu       $t0, $a3, 0x20
    ctx->pc = 0x10c558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x10c55c: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x10c55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x10c560: 0xc043094  jal         func_10C250
    ctx->pc = 0x10C560u;
    SET_GPR_U32(ctx, 31, 0x10C568u);
    ctx->pc = 0x10C564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C560u;
            // 0x10c564: 0x24e70018  addiu       $a3, $a3, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C250u;
    if (runtime->hasFunction(0x10C250u)) {
        auto targetFn = runtime->lookupFunction(0x10C250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C568u; }
        if (ctx->pc != 0x10C568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getPtsDtsFlags_0x10c250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C568u; }
        if (ctx->pc != 0x10C568u) { return; }
    }
    ctx->pc = 0x10C568u;
label_10c568:
    // 0x10c568: 0x8e270858  lw          $a3, 0x858($s1)
    ctx->pc = 0x10c568u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x10c56c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c570: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10c570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c574: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x10c574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x10c578: 0x24e80038  addiu       $t0, $a3, 0x38
    ctx->pc = 0x10c578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 56));
    // 0x10c57c: 0x24e60028  addiu       $a2, $a3, 0x28
    ctx->pc = 0x10c57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
    // 0x10c580: 0xfe300088  sd          $s0, 0x88($s1)
    ctx->pc = 0x10c580u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 16));
    // 0x10c584: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x10c584u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x10c588: 0xc043094  jal         func_10C250
    ctx->pc = 0x10C588u;
    SET_GPR_U32(ctx, 31, 0x10C590u);
    ctx->pc = 0x10C58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C588u;
            // 0x10c58c: 0x24e70030  addiu       $a3, $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C250u;
    if (runtime->hasFunction(0x10C250u)) {
        auto targetFn = runtime->lookupFunction(0x10C250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C590u; }
        if (ctx->pc != 0x10C590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _getPtsDtsFlags_0x10c250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C590u; }
        if (ctx->pc != 0x10C590u) { return; }
    }
    ctx->pc = 0x10C590u;
label_10c590:
    // 0x10c590: 0x8e270858  lw          $a3, 0x858($s1)
    ctx->pc = 0x10c590u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x10c594: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x10c594u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c59c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10c59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c5a0: 0x8ce30028  lw          $v1, 0x28($a3)
    ctx->pc = 0x10c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x10c5a4: 0xfe300088  sd          $s0, 0x88($s1)
    ctx->pc = 0x10c5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 16));
    // 0x10c5a8: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x10c5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x10c5ac: 0xdce20020  ld          $v0, 0x20($a3)
    ctx->pc = 0x10c5acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x10c5b0: 0x8e66005c  lw          $a2, 0x5C($s3)
    ctx->pc = 0x10c5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x10c5b4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x10c5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x10c5b8: 0xdce30038  ld          $v1, 0x38($a3)
    ctx->pc = 0x10c5b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x10c5bc: 0xae2600cc  sw          $a2, 0xCC($s1)
    ctx->pc = 0x10c5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 6));
    // 0x10c5c0: 0xfce20020  sd          $v0, 0x20($a3)
    ctx->pc = 0x10c5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 32), GPR_U64(ctx, 2));
    // 0x10c5c4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x10c5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x10c5c8: 0x8e660060  lw          $a2, 0x60($s3)
    ctx->pc = 0x10c5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x10c5cc: 0xfce30038  sd          $v1, 0x38($a3)
    ctx->pc = 0x10c5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 56), GPR_U64(ctx, 3));
    // 0x10c5d0: 0xae2600d0  sw          $a2, 0xD0($s1)
    ctx->pc = 0x10c5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 6));
    // 0x10c5d4: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x10c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x10c5d8: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x10c5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x10c5dc: 0x8e830048  lw          $v1, 0x48($s4)
    ctx->pc = 0x10c5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x10c5e0: 0xae2300b8  sw          $v1, 0xB8($s1)
    ctx->pc = 0x10c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 3));
    // 0x10c5e4: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x10c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x10c5e8: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x10c5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x10c5ec: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x10c5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x10c5f0: 0xc042fc6  jal         func_10BF18
    ctx->pc = 0x10C5F0u;
    SET_GPR_U32(ctx, 31, 0x10C5F8u);
    ctx->pc = 0x10C5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C5F0u;
            // 0x10c5f4: 0xae2300c4  sw          $v1, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BF18u;
    if (runtime->hasFunction(0x10BF18u)) {
        auto targetFn = runtime->lookupFunction(0x10BF18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C5F8u; }
        if (ctx->pc != 0x10C5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _isOutSizeOK_0x10bf18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C5F8u; }
        if (ctx->pc != 0x10C5F8u) { return; }
    }
    ctx->pc = 0x10C5F8u;
label_10c5f8:
    // 0x10c5f8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x10C5F8u;
    {
        const bool branch_taken_0x10c5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C5F8u;
            // 0x10c5fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c5f8) {
            ctx->pc = 0x10C680u;
            goto label_10c680;
        }
    }
    ctx->pc = 0x10C600u;
    // 0x10c600: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x10c600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x10c604: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x10C604u;
    {
        const bool branch_taken_0x10c604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C604u;
            // 0x10c608: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c604) {
            ctx->pc = 0x10C684u;
            goto label_10c684;
        }
    }
    ctx->pc = 0x10C60Cu;
    // 0x10c60c: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x10c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x10c610: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x10C610u;
    {
        const bool branch_taken_0x10c610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10C614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C610u;
            // 0x10c614: 0xdfb60060  ld          $s6, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c610) {
            ctx->pc = 0x10C688u;
            goto label_10c688;
        }
    }
    ctx->pc = 0x10C618u;
    // 0x10c618: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x10c618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10c61c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x10c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x10c620: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x10c620u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x10c624: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x10c624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x10c628: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C628u;
    {
        const bool branch_taken_0x10c628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C628u;
            // 0x10c62c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c628) {
            ctx->pc = 0x10C640u;
            goto label_10c640;
        }
    }
    ctx->pc = 0x10C630u;
    // 0x10c630: 0xc04336e  jal         func_10CDB8
    ctx->pc = 0x10C630u;
    SET_GPR_U32(ctx, 31, 0x10C638u);
    ctx->pc = 0x10C634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C630u;
            // 0x10c634: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CDB8u;
    if (runtime->hasFunction(0x10CDB8u)) {
        auto targetFn = runtime->lookupFunction(0x10CDB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C638u; }
        if (ctx->pc != 0x10C638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _csc_storeRefImage_0x10cdb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C638u; }
        if (ctx->pc != 0x10C638u) { return; }
    }
    ctx->pc = 0x10C638u;
label_10c638:
    // 0x10c638: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10C638u;
    {
        const bool branch_taken_0x10c638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C638u;
            // 0x10c63c: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c638) {
            ctx->pc = 0x10C64Cu;
            goto label_10c64c;
        }
    }
    ctx->pc = 0x10C640u;
label_10c640:
    // 0x10c640: 0xc042fee  jal         func_10BFB8
    ctx->pc = 0x10C640u;
    SET_GPR_U32(ctx, 31, 0x10C648u);
    ctx->pc = 0x10C644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C640u;
            // 0x10c644: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10BFB8u;
    if (runtime->hasFunction(0x10BFB8u)) {
        auto targetFn = runtime->lookupFunction(0x10BFB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C648u; }
        if (ctx->pc != 0x10C648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _cpr8_0x10bfb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10C648u; }
        if (ctx->pc != 0x10C648u) { return; }
    }
    ctx->pc = 0x10C648u;
label_10c648:
    // 0x10c648: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x10c648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_10c64c:
    // 0x10c64c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c650: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x10c650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10c654: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x10c654u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x10c658: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x10c658u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10c65c: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x10c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x10c660: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10c660u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10c664: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10c664u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10c668: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10c668u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c66c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10c66cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c670: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10c670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c678: 0x804308a  j           func_10C228
    ctx->pc = 0x10C678u;
    ctx->pc = 0x10C67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10C678u;
            // 0x10c67c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C228u;
    if (runtime->hasFunction(0x10C228u)) {
        auto targetFn = runtime->lookupFunction(0x10C228u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _markOutput_0x10c228(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10C680u;
label_10c680:
    // 0x10c680: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x10c680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_10c684:
    // 0x10c684: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x10c684u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_10c688:
    // 0x10c688: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x10c688u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10c68c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10c68cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10c690: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10c690u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c694: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10c694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c698: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10c698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c69c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10c69cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x10C6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C6A0u;
            // 0x10c6a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C6A8u;
}
