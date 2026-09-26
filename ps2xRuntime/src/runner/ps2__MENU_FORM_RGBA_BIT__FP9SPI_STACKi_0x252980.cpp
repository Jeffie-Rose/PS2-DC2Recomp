#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_FORM_RGBA_BIT__FP9SPI_STACKi
// Address: 0x252980 - 0x252a50
void ps2__MENU_FORM_RGBA_BIT__FP9SPI_STACKi_0x252980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_FORM_RGBA_BIT__FP9SPI_STACKi_0x252980");
#endif

    switch (ctx->pc) {
        case 0x252994u: goto label_252994;
        case 0x2529a4u: goto label_2529a4;
        case 0x2529c0u: goto label_2529c0;
        default: break;
    }

    ctx->pc = 0x252980u;

    // 0x252980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x252984: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x252984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x252988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25298c: 0xc05191c  jal         func_146470
    ctx->pc = 0x25298Cu;
    SET_GPR_U32(ctx, 31, 0x252994u);
    ctx->pc = 0x252990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25298Cu;
            // 0x252990: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252994u; }
        if (ctx->pc != 0x252994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252994u; }
        if (ctx->pc != 0x252994u) { return; }
    }
    ctx->pc = 0x252994u;
label_252994:
    // 0x252994: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x252994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252998: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x252998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25299c: 0xc04a422  jal         func_129088
    ctx->pc = 0x25299Cu;
    SET_GPR_U32(ctx, 31, 0x2529A4u);
    ctx->pc = 0x2529A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25299Cu;
            // 0x2529a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2529A4u; }
        if (ctx->pc != 0x2529A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2529A4u; }
        if (ctx->pc != 0x2529A4u) { return; }
    }
    ctx->pc = 0x2529A4u;
label_2529a4:
    // 0x2529a4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x2529a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2529a8: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x2529A8u;
    {
        const bool branch_taken_0x2529a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2529ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2529A8u;
            // 0x2529ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529a8) {
            ctx->pc = 0x252A30u;
            goto label_252a30;
        }
    }
    ctx->pc = 0x2529B0u;
    // 0x2529b0: 0x24060067  addiu       $a2, $zero, 0x67
    ctx->pc = 0x2529b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x2529b4: 0x24050062  addiu       $a1, $zero, 0x62
    ctx->pc = 0x2529b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x2529b8: 0x24040061  addiu       $a0, $zero, 0x61
    ctx->pc = 0x2529b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2529bc: 0x24070072  addiu       $a3, $zero, 0x72
    ctx->pc = 0x2529bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_2529c0:
    // 0x2529c0: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x2529c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2529c4: 0x14670002  bne         $v1, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x2529C4u;
    {
        const bool branch_taken_0x2529c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x2529C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2529C4u;
            // 0x2529c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2529c4) {
            ctx->pc = 0x2529D0u;
            goto label_2529d0;
        }
    }
    ctx->pc = 0x2529CCu;
    // 0x2529cc: 0x64090001  daddiu      $t1, $zero, 0x1
    ctx->pc = 0x2529ccu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2529d0:
    // 0x2529d0: 0x14660002  bne         $v1, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2529D0u;
    {
        const bool branch_taken_0x2529d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2529d0) {
            ctx->pc = 0x2529DCu;
            goto label_2529dc;
        }
    }
    ctx->pc = 0x2529D8u;
    // 0x2529d8: 0x64090002  daddiu      $t1, $zero, 0x2
    ctx->pc = 0x2529d8u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)2);
label_2529dc:
    // 0x2529dc: 0x0  nop
    ctx->pc = 0x2529dcu;
    // NOP
    // 0x2529e0: 0x14650002  bne         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2529E0u;
    {
        const bool branch_taken_0x2529e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x2529e0) {
            ctx->pc = 0x2529ECu;
            goto label_2529ec;
        }
    }
    ctx->pc = 0x2529E8u;
    // 0x2529e8: 0x64090004  daddiu      $t1, $zero, 0x4
    ctx->pc = 0x2529e8u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_2529ec:
    // 0x2529ec: 0x0  nop
    ctx->pc = 0x2529ecu;
    // NOP
    // 0x2529f0: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2529F0u;
    {
        const bool branch_taken_0x2529f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2529f0) {
            ctx->pc = 0x2529FCu;
            goto label_2529fc;
        }
    }
    ctx->pc = 0x2529F8u;
    // 0x2529f8: 0x64090008  daddiu      $t1, $zero, 0x8
    ctx->pc = 0x2529f8u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
label_2529fc:
    // 0x2529fc: 0x0  nop
    ctx->pc = 0x2529fcu;
    // NOP
    // 0x252a00: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x252a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x252a04: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x252A04u;
    {
        const bool branch_taken_0x252a04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x252A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252A04u;
            // 0x252a08: 0x2091825  or          $v1, $s0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252a04) {
            ctx->pc = 0x252A14u;
            goto label_252a14;
        }
    }
    ctx->pc = 0x252A0Cu;
    // 0x252a0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x252A0Cu;
    {
        const bool branch_taken_0x252a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252A0Cu;
            // 0x252a10: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x252a0c) {
            ctx->pc = 0x252A1Cu;
            goto label_252a1c;
        }
    }
    ctx->pc = 0x252A14u;
label_252a14:
    // 0x252a14: 0x0  nop
    ctx->pc = 0x252a14u;
    // NOP
    // 0x252a18: 0x313000ff  andi        $s0, $t1, 0xFF
    ctx->pc = 0x252a18u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_252a1c:
    // 0x252a1c: 0x0  nop
    ctx->pc = 0x252a1cu;
    // NOP
    // 0x252a20: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x252a20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x252a24: 0x102182a  slt         $v1, $t0, $v0
    ctx->pc = 0x252a24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x252a28: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x252A28u;
    {
        const bool branch_taken_0x252a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x252A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252A28u;
            // 0x252a2c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252a28) {
            ctx->pc = 0x2529C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2529c0;
        }
    }
    ctx->pc = 0x252A30u;
label_252a30:
    // 0x252a30: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x252a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252a38: 0xa0700050  sb          $s0, 0x50($v1)
    ctx->pc = 0x252a38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 80), (uint8_t)GPR_U32(ctx, 16));
    // 0x252a3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x252a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252a40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252a48: 0x3e00008  jr          $ra
    ctx->pc = 0x252A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252A48u;
            // 0x252a4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252A50u;
}
