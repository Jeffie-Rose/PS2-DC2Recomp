#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: niPROGRESS__FP9SPI_STACKi
// Address: 0x3198a0 - 0x3199c0
void niPROGRESS__FP9SPI_STACKi_0x3198a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("niPROGRESS__FP9SPI_STACKi_0x3198a0");
#endif

    switch (ctx->pc) {
        case 0x3198b8u: goto label_3198b8;
        case 0x3198d4u: goto label_3198d4;
        case 0x319958u: goto label_319958;
        case 0x31996cu: goto label_31996c;
        case 0x31997cu: goto label_31997c;
        case 0x319990u: goto label_319990;
        default: break;
    }

    ctx->pc = 0x3198a0u;

    // 0x3198a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3198a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3198a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3198a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3198a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3198a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3198ac: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x3198acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3198b0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x3198B0u;
    SET_GPR_U32(ctx, 31, 0x3198B8u);
    ctx->pc = 0x3198B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3198B0u;
            // 0x3198b4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3198B8u; }
        if (ctx->pc != 0x3198B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3198B8u; }
        if (ctx->pc != 0x3198B8u) { return; }
    }
    ctx->pc = 0x3198B8u;
label_3198b8:
    // 0x3198b8: 0x8f85a35c  lw          $a1, -0x5CA4($gp)
    ctx->pc = 0x3198b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943580)));
    // 0x3198bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3198bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3198c0: 0x8f86a34c  lw          $a2, -0x5CB4($gp)
    ctx->pc = 0x3198c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x3198c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3198c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3198c8: 0xaf80a360  sw          $zero, -0x5CA0($gp)
    ctx->pc = 0x3198c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943584), GPR_U32(ctx, 0));
    // 0x3198cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3198CCu;
    {
        const bool branch_taken_0x3198cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3198D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3198CCu;
            // 0x3198d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3198cc) {
            ctx->pc = 0x3198FCu;
            goto label_3198fc;
        }
    }
    ctx->pc = 0x3198D4u;
label_3198d4:
    // 0x3198d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3198d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3198d8: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3198D8u;
    {
        const bool branch_taken_0x3198d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3198DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3198D8u;
            // 0x3198dc: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3198d8) {
            ctx->pc = 0x3198F4u;
            goto label_3198f4;
        }
    }
    ctx->pc = 0x3198E0u;
    // 0x3198e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3198e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3198e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3198e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3198e8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3198e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3198ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3198ECu;
    {
        const bool branch_taken_0x3198ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3198F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3198ECu;
            // 0x3198f0: 0xaf82a360  sw          $v0, -0x5CA0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3198ec) {
            ctx->pc = 0x31990Cu;
            goto label_31990c;
        }
    }
    ctx->pc = 0x3198F4u;
label_3198f4:
    // 0x3198f4: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x3198f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x3198f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3198f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3198fc:
    // 0x3198fc: 0x0  nop
    ctx->pc = 0x3198fcu;
    // NOP
    // 0x319900: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x319900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x319904: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x319904u;
    {
        const bool branch_taken_0x319904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319904u;
            // 0x319908: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319904) {
            ctx->pc = 0x3198D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3198d4;
        }
    }
    ctx->pc = 0x31990Cu;
label_31990c:
    // 0x31990c: 0x0  nop
    ctx->pc = 0x31990cu;
    // NOP
    // 0x319910: 0x8f82a360  lw          $v0, -0x5CA0($gp)
    ctx->pc = 0x319910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943584)));
    // 0x319914: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x319914u;
    {
        const bool branch_taken_0x319914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319914u;
            // 0x319918: 0x28c20100  slti        $v0, $a2, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x319914) {
            ctx->pc = 0x319958u;
            goto label_319958;
        }
    }
    ctx->pc = 0x31991Cu;
    // 0x31991c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31991Cu;
    {
        const bool branch_taken_0x31991c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31991Cu;
            // 0x319920: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31991c) {
            ctx->pc = 0x31992Cu;
            goto label_31992c;
        }
    }
    ctx->pc = 0x319924u;
    // 0x319924: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x319924u;
    {
        const bool branch_taken_0x319924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x319928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319924u;
            // 0x319928: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319924) {
            ctx->pc = 0x3199B0u;
            goto label_3199b0;
        }
    }
    ctx->pc = 0x31992Cu;
label_31992c:
    // 0x31992c: 0x8f83a35c  lw          $v1, -0x5CA4($gp)
    ctx->pc = 0x31992cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943580)));
    // 0x319930: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x319930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x319934: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x319934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x319938: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x319938u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x31993c: 0x8f82a34c  lw          $v0, -0x5CB4($gp)
    ctx->pc = 0x31993cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943564)));
    // 0x319940: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x319940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x319944: 0xaf83a360  sw          $v1, -0x5CA0($gp)
    ctx->pc = 0x319944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943584), GPR_U32(ctx, 3));
    // 0x319948: 0x8f84a360  lw          $a0, -0x5CA0($gp)
    ctx->pc = 0x319948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943584)));
    // 0x31994c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31994cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x319950: 0xc0b3438  jal         func_2CD0E0
    ctx->pc = 0x319950u;
    SET_GPR_U32(ctx, 31, 0x319958u);
    ctx->pc = 0x319954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319950u;
            // 0x319954: 0xaf82a34c  sw          $v0, -0x5CB4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD0E0u;
    if (runtime->hasFunction(0x2CD0E0u)) {
        auto targetFn = runtime->lookupFunction(0x2CD0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319958u; }
        if (ctx->pc != 0x319958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__Q214CVillagerPlace12ProgressInfoFv_0x2cd0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319958u; }
        if (ctx->pc != 0x319958u) { return; }
    }
    ctx->pc = 0x319958u;
label_319958:
    // 0x319958: 0x8f82a360  lw          $v0, -0x5CA0($gp)
    ctx->pc = 0x319958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943584)));
    // 0x31995c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31995cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319960: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x319960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x319964: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x319964u;
    SET_GPR_U32(ctx, 31, 0x31996Cu);
    ctx->pc = 0x319968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319964u;
            // 0x319968: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31996Cu; }
        if (ctx->pc != 0x31996Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31996Cu; }
        if (ctx->pc != 0x31996Cu) { return; }
    }
    ctx->pc = 0x31996Cu;
label_31996c:
    // 0x31996c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31996cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319970: 0xaf82a354  sw          $v0, -0x5CAC($gp)
    ctx->pc = 0x319970u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943572), GPR_U32(ctx, 2));
    // 0x319974: 0xc05191c  jal         func_146470
    ctx->pc = 0x319974u;
    SET_GPR_U32(ctx, 31, 0x31997Cu);
    ctx->pc = 0x319978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319974u;
            // 0x319978: 0xaf80a358  sw          $zero, -0x5CA8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943576), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31997Cu; }
        if (ctx->pc != 0x31997Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31997Cu; }
        if (ctx->pc != 0x31997Cu) { return; }
    }
    ctx->pc = 0x31997Cu;
label_31997c:
    // 0x31997c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31997Cu;
    {
        const bool branch_taken_0x31997c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31997Cu;
            // 0x319980: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31997c) {
            ctx->pc = 0x31999Cu;
            goto label_31999c;
        }
    }
    ctx->pc = 0x319984u;
    // 0x319984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x319984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319988: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x319988u;
    SET_GPR_U32(ctx, 31, 0x319990u);
    ctx->pc = 0x31998Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x319988u;
            // 0x31998c: 0x24a529b0  addiu       $a1, $a1, 0x29B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319990u; }
        if (ctx->pc != 0x319990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x319990u; }
        if (ctx->pc != 0x319990u) { return; }
    }
    ctx->pc = 0x319990u;
label_319990:
    // 0x319990: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x319990u;
    {
        const bool branch_taken_0x319990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x319990u;
            // 0x319994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319990) {
            ctx->pc = 0x31999Cu;
            goto label_31999c;
        }
    }
    ctx->pc = 0x319998u;
    // 0x319998: 0xaf82a358  sw          $v0, -0x5CA8($gp)
    ctx->pc = 0x319998u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943576), GPR_U32(ctx, 2));
label_31999c:
    // 0x31999c: 0x8f84a358  lw          $a0, -0x5CA8($gp)
    ctx->pc = 0x31999cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943576)));
    // 0x3199a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3199a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3199a4: 0x8f83a360  lw          $v1, -0x5CA0($gp)
    ctx->pc = 0x3199a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943584)));
    // 0x3199a8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x3199a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x3199ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3199acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3199b0:
    // 0x3199b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3199b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3199b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3199b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3199b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3199B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3199BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3199B8u;
            // 0x3199bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3199C0u;
}
