#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _AUTO_SET_TREASURE_BOX__FP12RS_STACKDATAi
// Address: 0x266100 - 0x266194
void ps2__AUTO_SET_TREASURE_BOX__FP12RS_STACKDATAi_0x266100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__AUTO_SET_TREASURE_BOX__FP12RS_STACKDATAi_0x266100");
#endif

    switch (ctx->pc) {
        case 0x26611cu: goto label_26611c;
        case 0x26612cu: goto label_26612c;
        case 0x26613cu: goto label_26613c;
        case 0x26614cu: goto label_26614c;
        case 0x26615cu: goto label_26615c;
        case 0x266170u: goto label_266170;
        case 0x266180u: goto label_266180;
        default: break;
    }

    ctx->pc = 0x266100u;

    // 0x266100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x266100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x266104: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x266104u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x266108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x266108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26610c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x26610Cu;
    {
        const bool branch_taken_0x26610c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x266110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26610Cu;
            // 0x266110: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26610c) {
            ctx->pc = 0x266124u;
            goto label_266124;
        }
    }
    ctx->pc = 0x266114u;
    // 0x266114: 0xc0a392c  jal         func_28E4B0
    ctx->pc = 0x266114u;
    SET_GPR_U32(ctx, 31, 0x26611Cu);
    ctx->pc = 0x28E4B0u;
    if (runtime->hasFunction(0x28E4B0u)) {
        auto targetFn = runtime->lookupFunction(0x28E4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26611Cu; }
        if (ctx->pc != 0x26611Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoSetTreasureBox__Fv_0x28e4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26611Cu; }
        if (ctx->pc != 0x26611Cu) { return; }
    }
    ctx->pc = 0x26611Cu;
label_26611c:
    // 0x26611c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x26611Cu;
    {
        const bool branch_taken_0x26611c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26611Cu;
            // 0x266120: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26611c) {
            ctx->pc = 0x266184u;
            goto label_266184;
        }
    }
    ctx->pc = 0x266124u;
label_266124:
    // 0x266124: 0xc097e18  jal         func_25F860
    ctx->pc = 0x266124u;
    SET_GPR_U32(ctx, 31, 0x26612Cu);
    ctx->pc = 0x266128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266124u;
            // 0x266128: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26612Cu; }
        if (ctx->pc != 0x26612Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26612Cu; }
        if (ctx->pc != 0x26612Cu) { return; }
    }
    ctx->pc = 0x26612Cu;
label_26612c:
    // 0x26612c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26612cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266130: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x266130u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266134: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x266134u;
    SET_GPR_U32(ctx, 31, 0x26613Cu);
    ctx->pc = 0x266138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266134u;
            // 0x266138: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26613Cu; }
        if (ctx->pc != 0x26613Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26613Cu; }
        if (ctx->pc != 0x26613Cu) { return; }
    }
    ctx->pc = 0x26613Cu;
label_26613c:
    // 0x26613c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26613cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266140: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x266140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x266144: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x266144u;
    SET_GPR_U32(ctx, 31, 0x26614Cu);
    ctx->pc = 0x266148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266144u;
            // 0x266148: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26614Cu; }
        if (ctx->pc != 0x26614Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26614Cu; }
        if (ctx->pc != 0x26614Cu) { return; }
    }
    ctx->pc = 0x26614Cu;
label_26614c:
    // 0x26614c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26614cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266150: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x266150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x266154: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x266154u;
    SET_GPR_U32(ctx, 31, 0x26615Cu);
    ctx->pc = 0x266158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266154u;
            // 0x266158: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26615Cu; }
        if (ctx->pc != 0x26615Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26615Cu; }
        if (ctx->pc != 0x26615Cu) { return; }
    }
    ctx->pc = 0x26615Cu;
label_26615c:
    // 0x26615c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x26615cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x266160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266164: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x266164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x266168: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x266168u;
    SET_GPR_U32(ctx, 31, 0x266170u);
    ctx->pc = 0x26616Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266168u;
            // 0x26616c: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266170u; }
        if (ctx->pc != 0x266170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266170u; }
        if (ctx->pc != 0x266170u) { return; }
    }
    ctx->pc = 0x266170u;
label_266170:
    // 0x266170: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x266170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266174: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x266174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x266178: 0xc0a3920  jal         func_28E480
    ctx->pc = 0x266178u;
    SET_GPR_U32(ctx, 31, 0x266180u);
    ctx->pc = 0x26617Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x266178u;
            // 0x26617c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E480u;
    if (runtime->hasFunction(0x28E480u)) {
        auto targetFn = runtime->lookupFunction(0x28E480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266180u; }
        if (ctx->pc != 0x266180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoSetTreasureBox__FiPff_0x28e480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x266180u; }
        if (ctx->pc != 0x266180u) { return; }
    }
    ctx->pc = 0x266180u;
label_266180:
    // 0x266180: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x266180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_266184:
    // 0x266184: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266188: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x266188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26618c: 0x3e00008  jr          $ra
    ctx->pc = 0x26618Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26618Cu;
            // 0x266190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x266194u;
}
