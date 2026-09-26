#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ROOM_OPTION__FP9SPI_STACKi
// Address: 0x2f9050 - 0x2f9158
void ps2__ROOM_OPTION__FP9SPI_STACKi_0x2f9050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ROOM_OPTION__FP9SPI_STACKi_0x2f9050");
#endif

    switch (ctx->pc) {
        case 0x2f90a8u: goto label_2f90a8;
        case 0x2f90b0u: goto label_2f90b0;
        case 0x2f90bcu: goto label_2f90bc;
        case 0x2f9120u: goto label_2f9120;
        case 0x2f9130u: goto label_2f9130;
        default: break;
    }

    ctx->pc = 0x2f9050u;

    // 0x2f9050: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f9050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f9054: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2f9054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x2f9058: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f9058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f905c: 0x2442cfc0  addiu       $v0, $v0, -0x3040
    ctx->pc = 0x2f905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954944));
    // 0x2f9060: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f9060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f9064: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f9064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f9068: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f9068u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f906c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f906cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f9070: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f9070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9074: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f9074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f9078: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2f9078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f907c: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x2f907cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f9080: 0x12082a  slt         $at, $zero, $s2
    ctx->pc = 0x2f9080u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2f9084: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x2f9084u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2f9088: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2f9088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f908c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2f908cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9090: 0xdc420020  ld          $v0, 0x20($v0)
    ctx->pc = 0x2f9090u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2f9094: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x2f9094u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x2f9098: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x2f9098u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x2f909c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2F909Cu;
    {
        const bool branch_taken_0x2f909c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F90A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F909Cu;
            // 0x2f90a0: 0xfca20020  sd          $v0, 0x20($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f909c) {
            ctx->pc = 0x2F90D0u;
            goto label_2f90d0;
        }
    }
    ctx->pc = 0x2F90A4u;
    // 0x2f90a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f90a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f90a8:
    // 0x2f90a8: 0xc05191c  jal         func_146470
    ctx->pc = 0x2F90A8u;
    SET_GPR_U32(ctx, 31, 0x2F90B0u);
    ctx->pc = 0x2F90ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F90A8u;
            // 0x2f90ac: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F90B0u; }
        if (ctx->pc != 0x2F90B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F90B0u; }
        if (ctx->pc != 0x2F90B0u) { return; }
    }
    ctx->pc = 0x2F90B0u;
label_2f90b0:
    // 0x2f90b0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2f90b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f90b4: 0xc0948d4  jal         func_252350
    ctx->pc = 0x2F90B4u;
    SET_GPR_U32(ctx, 31, 0x2F90BCu);
    ctx->pc = 0x2F90B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F90B4u;
            // 0x2f90b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x252350u;
    if (runtime->hasFunction(0x252350u)) {
        auto targetFn = runtime->lookupFunction(0x252350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F90BCu; }
        if (ctx->pc != 0x2F90BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_spi_analyze_func_strcut1__FP24MENU_SPI_ANALYZE_STRUCT1Pc_0x252350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F90BCu; }
        if (ctx->pc != 0x2F90BCu) { return; }
    }
    ctx->pc = 0x2F90BCu;
label_2f90bc:
    // 0x2f90bc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2f90bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2f90c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2f90c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f90c4: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x2f90c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2f90c8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2F90C8u;
    {
        const bool branch_taken_0x2f90c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F90CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F90C8u;
            // 0x2f90cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f90c8) {
            ctx->pc = 0x2F90A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f90a8;
        }
    }
    ctx->pc = 0x2F90D0u;
label_2f90d0:
    // 0x2f90d0: 0x8f839f5c  lw          $v1, -0x60A4($gp)
    ctx->pc = 0x2f90d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f90d4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2f90d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2f90d8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x2f90d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x2f90dc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2f90dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2f90e0: 0x8f849f5c  lw          $a0, -0x60A4($gp)
    ctx->pc = 0x2f90e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f90e4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f90e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f90e8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2f90e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2f90ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F90ECu;
    {
        const bool branch_taken_0x2f90ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F90F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F90ECu;
            // 0x2f90f0: 0x30620008  andi        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f90ec) {
            ctx->pc = 0x2F90FCu;
            goto label_2f90fc;
        }
    }
    ctx->pc = 0x2F90F4u;
    // 0x2f90f4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F90F4u;
    {
        const bool branch_taken_0x2f90f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f90f4) {
            ctx->pc = 0x2F9138u;
            goto label_2f9138;
        }
    }
    ctx->pc = 0x2F90FCu;
label_2f90fc:
    // 0x2f90fc: 0xa480003e  sh          $zero, 0x3E($a0)
    ctx->pc = 0x2f90fcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 62), (uint16_t)GPR_U32(ctx, 0));
    // 0x2f9100: 0x2403ffe6  addiu       $v1, $zero, -0x1A
    ctx->pc = 0x2f9100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967270));
    // 0x2f9104: 0x8f829f5c  lw          $v0, -0x60A4($gp)
    ctx->pc = 0x2f9104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f9108: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x2f9108u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f910c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2F910Cu;
    {
        const bool branch_taken_0x2f910c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F910Cu;
            // 0x2f9110: 0xa4430040  sh          $v1, 0x40($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f910c) {
            ctx->pc = 0x2F9138u;
            goto label_2f9138;
        }
    }
    ctx->pc = 0x2F9114u;
    // 0x2f9114: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f9114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9118: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F9118u;
    SET_GPR_U32(ctx, 31, 0x2F9120u);
    ctx->pc = 0x2F911Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9118u;
            // 0x2f911c: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9120u; }
        if (ctx->pc != 0x2F9120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9120u; }
        if (ctx->pc != 0x2F9120u) { return; }
    }
    ctx->pc = 0x2F9120u;
label_2f9120:
    // 0x2f9120: 0x8f839f5c  lw          $v1, -0x60A4($gp)
    ctx->pc = 0x2f9120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f9124: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f9124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9128: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2F9128u;
    SET_GPR_U32(ctx, 31, 0x2F9130u);
    ctx->pc = 0x2F912Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9128u;
            // 0x2f912c: 0xa462003e  sh          $v0, 0x3E($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 62), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9130u; }
        if (ctx->pc != 0x2F9130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F9130u; }
        if (ctx->pc != 0x2F9130u) { return; }
    }
    ctx->pc = 0x2F9130u;
label_2f9130:
    // 0x2f9130: 0x8f839f5c  lw          $v1, -0x60A4($gp)
    ctx->pc = 0x2f9130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942556)));
    // 0x2f9134: 0xa4620040  sh          $v0, 0x40($v1)
    ctx->pc = 0x2f9134u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 64), (uint16_t)GPR_U32(ctx, 2));
label_2f9138:
    // 0x2f9138: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f9138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f913c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9140: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f9140u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f9144: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f9144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f9148: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f9148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f914c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f914cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9150: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F9150u;
            // 0x2f9154: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F9158u;
}
