#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: gcSTEVE__FP9SPI_STACKi
// Address: 0x194100 - 0x1941a4
void gcSTEVE__FP9SPI_STACKi_0x194100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("gcSTEVE__FP9SPI_STACKi_0x194100");
#endif

    switch (ctx->pc) {
        case 0x194120u: goto label_194120;
        case 0x19413cu: goto label_19413c;
        case 0x19414cu: goto label_19414c;
        case 0x194168u: goto label_194168;
        case 0x194170u: goto label_194170;
        case 0x194178u: goto label_194178;
        case 0x194188u: goto label_194188;
        default: break;
    }

    ctx->pc = 0x194100u;

    // 0x194100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x194100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x194104: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x194104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x194108: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x194108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19410c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19410cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x194110: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x194110u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194114: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x194114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194118: 0xc065af8  jal         func_196BE0
    ctx->pc = 0x194118u;
    SET_GPR_U32(ctx, 31, 0x194120u);
    ctx->pc = 0x19411Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194118u;
            // 0x19411c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194120u; }
        if (ctx->pc != 0x194120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194120u; }
        if (ctx->pc != 0x194120u) { return; }
    }
    ctx->pc = 0x194120u;
label_194120:
    // 0x194120: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x194120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194124: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x194124u;
    {
        const bool branch_taken_0x194124 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x194128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194124u;
            // 0x194128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194124) {
            ctx->pc = 0x194134u;
            goto label_194134;
        }
    }
    ctx->pc = 0x19412Cu;
    // 0x19412c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x19412Cu;
    {
        const bool branch_taken_0x19412c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19412Cu;
            // 0x194130: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19412c) {
            ctx->pc = 0x19418Cu;
            goto label_19418c;
        }
    }
    ctx->pc = 0x194134u;
label_194134:
    // 0x194134: 0xc066e68  jal         func_19B9A0
    ctx->pc = 0x194134u;
    SET_GPR_U32(ctx, 31, 0x19413Cu);
    ctx->pc = 0x194138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194134u;
            // 0x194138: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B9A0u;
    if (runtime->hasFunction(0x19B9A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19413Cu; }
        if (ctx->pc != 0x19413Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        JoinPartyMember__16CUserDataManagerFi_0x19b9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19413Cu; }
        if (ctx->pc != 0x19413Cu) { return; }
    }
    ctx->pc = 0x19413Cu;
label_19413c:
    // 0x19413c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19413cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194140: 0x240500f6  addiu       $a1, $zero, 0xF6
    ctx->pc = 0x194140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x194144: 0xc067830  jal         func_19E0C0
    ctx->pc = 0x194144u;
    SET_GPR_U32(ctx, 31, 0x19414Cu);
    ctx->pc = 0x194148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194144u;
            // 0x194148: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E0C0u;
    if (runtime->hasFunction(0x19E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x19E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19414Cu; }
        if (ctx->pc != 0x19414Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemNotOver__16CUserDataManagerFii_0x19e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19414Cu; }
        if (ctx->pc != 0x19414Cu) { return; }
    }
    ctx->pc = 0x19414Cu;
label_19414c:
    // 0x19414c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19414cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x194150: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x194150u;
    {
        const bool branch_taken_0x194150 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x194154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x194150u;
            // 0x194154: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194150) {
            ctx->pc = 0x19418Cu;
            goto label_19418c;
        }
    }
    ctx->pc = 0x194158u;
    // 0x194158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19415c: 0x240500f6  addiu       $a1, $zero, 0xF6
    ctx->pc = 0x19415cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 246));
    // 0x194160: 0xc067a30  jal         func_19E8C0
    ctx->pc = 0x194160u;
    SET_GPR_U32(ctx, 31, 0x194168u);
    ctx->pc = 0x194164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194160u;
            // 0x194164: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E8C0u;
    if (runtime->hasFunction(0x19E8C0u)) {
        auto targetFn = runtime->lookupFunction(0x19E8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194168u; }
        if (ctx->pc != 0x194168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteItem__16CUserDataManagerFii_0x19e8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194168u; }
        if (ctx->pc != 0x194168u) { return; }
    }
    ctx->pc = 0x194168u;
label_194168:
    // 0x194168: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x194168u;
    SET_GPR_U32(ctx, 31, 0x194170u);
    ctx->pc = 0x19416Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194168u;
            // 0x19416c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194170u; }
        if (ctx->pc != 0x194170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194170u; }
        if (ctx->pc != 0x194170u) { return; }
    }
    ctx->pc = 0x194170u;
label_194170:
    // 0x194170: 0xc06598c  jal         func_196630
    ctx->pc = 0x194170u;
    SET_GPR_U32(ctx, 31, 0x194178u);
    ctx->pc = 0x194174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194170u;
            // 0x194174: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196630u;
    if (runtime->hasFunction(0x196630u)) {
        auto targetFn = runtime->lookupFunction(0x196630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194178u; }
        if (ctx->pc != 0x194178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRidePodCore__Fi_0x196630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194178u; }
        if (ctx->pc != 0x194178u) { return; }
    }
    ctx->pc = 0x194178u;
label_194178:
    // 0x194178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x194178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19417c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19417cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194180: 0xc067830  jal         func_19E0C0
    ctx->pc = 0x194180u;
    SET_GPR_U32(ctx, 31, 0x194188u);
    ctx->pc = 0x194184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x194180u;
            // 0x194184: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E0C0u;
    if (runtime->hasFunction(0x19E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x19E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194188u; }
        if (ctx->pc != 0x194188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemNotOver__16CUserDataManagerFii_0x19e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194188u; }
        if (ctx->pc != 0x194188u) { return; }
    }
    ctx->pc = 0x194188u;
label_194188:
    // 0x194188: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19418c:
    // 0x19418c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19418cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194190: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x194190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194194: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x194194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194198: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x194198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19419c: 0x3e00008  jr          $ra
    ctx->pc = 0x19419Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1941A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19419Cu;
            // 0x1941a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1941A4u;
}
