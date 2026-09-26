#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: eaCON_NO__FP9SPI_STACKi
// Address: 0x2aa770 - 0x2aa80c
void eaCON_NO__FP9SPI_STACKi_0x2aa770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eaCON_NO__FP9SPI_STACKi_0x2aa770");
#endif

    switch (ctx->pc) {
        case 0x2aa7bcu: goto label_2aa7bc;
        case 0x2aa7c4u: goto label_2aa7c4;
        default: break;
    }

    ctx->pc = 0x2aa770u;

    // 0x2aa770: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2aa770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2aa774: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2aa774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2aa778: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2aa778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2aa77c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aa77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aa780: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aa780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aa784: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aa784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa788: 0x8f829a88  lw          $v0, -0x6578($gp)
    ctx->pc = 0x2aa788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941320)));
    // 0x2aa78c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA78Cu;
    {
        const bool branch_taken_0x2aa78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA78Cu;
            // 0x2aa790: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa78c) {
            ctx->pc = 0x2AA79Cu;
            goto label_2aa79c;
        }
    }
    ctx->pc = 0x2AA794u;
    // 0x2aa794: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2AA794u;
    {
        const bool branch_taken_0x2aa794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA794u;
            // 0x2aa798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa794) {
            ctx->pc = 0x2AA7F4u;
            goto label_2aa7f4;
        }
    }
    ctx->pc = 0x2AA79Cu;
label_2aa79c:
    // 0x2aa79c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x2aa79cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x2aa7a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA7A0u;
    {
        const bool branch_taken_0x2aa7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA7A0u;
            // 0x2aa7a4: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa7a0) {
            ctx->pc = 0x2AA7B0u;
            goto label_2aa7b0;
        }
    }
    ctx->pc = 0x2AA7A8u;
    // 0x2aa7a8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2AA7A8u;
    {
        const bool branch_taken_0x2aa7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA7A8u;
            // 0x2aa7ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa7a8) {
            ctx->pc = 0x2AA7F4u;
            goto label_2aa7f4;
        }
    }
    ctx->pc = 0x2AA7B0u;
label_2aa7b0:
    // 0x2aa7b0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x2AA7B0u;
    {
        const bool branch_taken_0x2aa7b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA7B0u;
            // 0x2aa7b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa7b0) {
            ctx->pc = 0x2AA7E0u;
            goto label_2aa7e0;
        }
    }
    ctx->pc = 0x2AA7B8u;
    // 0x2aa7b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aa7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aa7bc:
    // 0x2aa7bc: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AA7BCu;
    SET_GPR_U32(ctx, 31, 0x2AA7C4u);
    ctx->pc = 0x2AA7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA7BCu;
            // 0x2aa7c0: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA7C4u; }
        if (ctx->pc != 0x2AA7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA7C4u; }
        if (ctx->pc != 0x2AA7C4u) { return; }
    }
    ctx->pc = 0x2AA7C4u;
label_2aa7c4:
    // 0x2aa7c4: 0x8f839a88  lw          $v1, -0x6578($gp)
    ctx->pc = 0x2aa7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941320)));
    // 0x2aa7c8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2aa7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2aa7cc: 0xa0620008  sb          $v0, 0x8($v1)
    ctx->pc = 0x2aa7ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x2aa7d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2aa7d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2aa7d4: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x2aa7d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2aa7d8: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2AA7D8u;
    {
        const bool branch_taken_0x2aa7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA7D8u;
            // 0x2aa7dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa7d8) {
            ctx->pc = 0x2AA7BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aa7bc;
        }
    }
    ctx->pc = 0x2AA7E0u;
label_2aa7e0:
    // 0x2aa7e0: 0x8f839a88  lw          $v1, -0x6578($gp)
    ctx->pc = 0x2aa7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941320)));
    // 0x2aa7e4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2aa7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2aa7e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aa7ec: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2aa7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2aa7f0: 0xa0640008  sb          $a0, 0x8($v1)
    ctx->pc = 0x2aa7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 4));
label_2aa7f4:
    // 0x2aa7f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2aa7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aa7f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2aa7f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa7fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aa7fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa800: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aa800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa804: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA804u;
            // 0x2aa808: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA80Cu;
}
