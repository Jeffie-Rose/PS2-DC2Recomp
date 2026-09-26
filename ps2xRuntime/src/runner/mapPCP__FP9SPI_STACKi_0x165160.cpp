#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapPCP__FP9SPI_STACKi
// Address: 0x165160 - 0x165224
void mapPCP__FP9SPI_STACKi_0x165160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapPCP__FP9SPI_STACKi_0x165160");
#endif

    switch (ctx->pc) {
        case 0x1651a0u: goto label_1651a0;
        case 0x1651bcu: goto label_1651bc;
        case 0x1651dcu: goto label_1651dc;
        case 0x1651ecu: goto label_1651ec;
        default: break;
    }

    ctx->pc = 0x165160u;

    // 0x165160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x165160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x165164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x165164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x165168: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x165168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16516c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16516cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x165170: 0x8f82895c  lw          $v0, -0x76A4($gp)
    ctx->pc = 0x165170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x165174: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x165174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
    // 0x165178: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x165178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x16517c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x16517cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x165180: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x165180u;
    {
        const bool branch_taken_0x165180 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x165184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165180u;
            // 0x165184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165180) {
            ctx->pc = 0x165190u;
            goto label_165190;
        }
    }
    ctx->pc = 0x165188u;
    // 0x165188: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x165188u;
    {
        const bool branch_taken_0x165188 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x165188) {
            ctx->pc = 0x165198u;
            goto label_165198;
        }
    }
    ctx->pc = 0x165190u;
label_165190:
    // 0x165190: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x165190u;
    {
        const bool branch_taken_0x165190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x165190u;
            // 0x165194: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165190) {
            ctx->pc = 0x165214u;
            goto label_165214;
        }
    }
    ctx->pc = 0x165198u;
label_165198:
    // 0x165198: 0xc05191c  jal         func_146470
    ctx->pc = 0x165198u;
    SET_GPR_U32(ctx, 31, 0x1651A0u);
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1651A0u; }
        if (ctx->pc != 0x1651A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1651A0u; }
        if (ctx->pc != 0x1651A0u) { return; }
    }
    ctx->pc = 0x1651A0u;
label_1651a0:
    // 0x1651a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1651a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1651a4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1651A4u;
    {
        const bool branch_taken_0x1651a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1651A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1651A4u;
            // 0x1651a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651a4) {
            ctx->pc = 0x1651B4u;
            goto label_1651b4;
        }
    }
    ctx->pc = 0x1651ACu;
    // 0x1651ac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1651ACu;
    {
        const bool branch_taken_0x1651ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1651B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1651ACu;
            // 0x1651b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651ac) {
            ctx->pc = 0x165210u;
            goto label_165210;
        }
    }
    ctx->pc = 0x1651B4u;
label_1651b4:
    // 0x1651b4: 0xc04a422  jal         func_129088
    ctx->pc = 0x1651B4u;
    SET_GPR_U32(ctx, 31, 0x1651BCu);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1651BCu; }
        if (ctx->pc != 0x1651BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1651BCu; }
        if (ctx->pc != 0x1651BCu) { return; }
    }
    ctx->pc = 0x1651BCu;
label_1651bc:
    // 0x1651bc: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1651bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1651c0: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1651c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1651c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1651C4u;
    {
        const bool branch_taken_0x1651c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1651C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1651C4u;
            // 0x1651c8: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1651c4) {
            ctx->pc = 0x1651D4u;
            goto label_1651d4;
        }
    }
    ctx->pc = 0x1651CCu;
    // 0x1651cc: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1651ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1651d0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1651d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1651d4:
    // 0x1651d4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1651D4u;
    SET_GPR_U32(ctx, 31, 0x1651DCu);
    ctx->pc = 0x1651D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1651D4u;
            // 0x1651d8: 0x8f848960  lw          $a0, -0x76A0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936928)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1651DCu; }
        if (ctx->pc != 0x1651DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1651DCu; }
        if (ctx->pc != 0x1651DCu) { return; }
    }
    ctx->pc = 0x1651DCu;
label_1651dc:
    // 0x1651dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1651dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1651e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1651e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1651e4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1651E4u;
    SET_GPR_U32(ctx, 31, 0x1651ECu);
    ctx->pc = 0x1651E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1651E4u;
            // 0x1651e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1651ECu; }
        if (ctx->pc != 0x1651ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1651ECu; }
        if (ctx->pc != 0x1651ECu) { return; }
    }
    ctx->pc = 0x1651ECu;
label_1651ec:
    // 0x1651ec: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x1651ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
    // 0x1651f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1651f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1651f4: 0x8f84895c  lw          $a0, -0x76A4($gp)
    ctx->pc = 0x1651f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936924)));
    // 0x1651f8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1651f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1651fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1651fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x165200: 0xac710048  sw          $s1, 0x48($v1)
    ctx->pc = 0x165200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 17));
    // 0x165204: 0x8f838968  lw          $v1, -0x7698($gp)
    ctx->pc = 0x165204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936936)));
    // 0x165208: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x165208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16520c: 0xaf838968  sw          $v1, -0x7698($gp)
    ctx->pc = 0x16520cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936936), GPR_U32(ctx, 3));
label_165210:
    // 0x165210: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x165210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_165214:
    // 0x165214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x165214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x165218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16521c: 0x3e00008  jr          $ra
    ctx->pc = 0x16521Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16521Cu;
            // 0x165220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x165224u;
}
