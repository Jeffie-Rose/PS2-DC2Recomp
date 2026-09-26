#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetNextRoomPos__11CDngFreeMapFP9GLID_INFO
// Address: 0x1eaa60 - 0x1eaae8
void SetNextRoomPos__11CDngFreeMapFP9GLID_INFO_0x1eaa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetNextRoomPos__11CDngFreeMapFP9GLID_INFO_0x1eaa60");
#endif

    switch (ctx->pc) {
        case 0x1eaa88u: goto label_1eaa88;
        case 0x1eaa90u: goto label_1eaa90;
        case 0x1eaa9cu: goto label_1eaa9c;
        case 0x1eaab4u: goto label_1eaab4;
        default: break;
    }

    ctx->pc = 0x1eaa60u;

    // 0x1eaa60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eaa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eaa64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eaa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eaa68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eaa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eaa6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eaa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eaa70: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1EAA70u;
    {
        const bool branch_taken_0x1eaa70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAA74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA70u;
            // 0x1eaa74: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaa70) {
            ctx->pc = 0x1EAAD4u;
            goto label_1eaad4;
        }
    }
    ctx->pc = 0x1EAA78u;
    // 0x1eaa78: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1eaa78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1eaa7c: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x1eaa7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1eaa80: 0xc07aa24  jal         func_1EA890
    ctx->pc = 0x1EAA80u;
    SET_GPR_U32(ctx, 31, 0x1EAA88u);
    ctx->pc = 0x1EAA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA80u;
            // 0x1eaa84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA890u;
    if (runtime->hasFunction(0x1EA890u)) {
        auto targetFn = runtime->lookupFunction(0x1EA890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA88u; }
        if (ctx->pc != 0x1EAA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcGlidPutPos__11CDngFreeMapFP9GLID_INFORfRfi_0x1ea890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA88u; }
        if (ctx->pc != 0x1EAA88u) { return; }
    }
    ctx->pc = 0x1EAA88u;
label_1eaa88:
    // 0x1eaa88: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EAA88u;
    SET_GPR_U32(ctx, 31, 0x1EAA90u);
    ctx->pc = 0x1EAA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA88u;
            // 0x1eaa8c: 0xc7ac0030  lwc1        $f12, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA90u; }
        if (ctx->pc != 0x1EAA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA90u; }
        if (ctx->pc != 0x1EAA90u) { return; }
    }
    ctx->pc = 0x1EAA90u;
label_1eaa90:
    // 0x1eaa90: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x1eaa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eaa94: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EAA94u;
    SET_GPR_U32(ctx, 31, 0x1EAA9Cu);
    ctx->pc = 0x1EAA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAA94u;
            // 0x1eaa98: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA9Cu; }
        if (ctx->pc != 0x1EAA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAA9Cu; }
        if (ctx->pc != 0x1EAA9Cu) { return; }
    }
    ctx->pc = 0x1EAA9Cu;
label_1eaa9c:
    // 0x1eaa9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1eaa9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaaa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1eaaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaaa4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1eaaa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaaa8: 0x27a70038  addiu       $a3, $sp, 0x38
    ctx->pc = 0x1eaaa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1eaaac: 0xc07aa48  jal         func_1EA920
    ctx->pc = 0x1EAAACu;
    SET_GPR_U32(ctx, 31, 0x1EAAB4u);
    ctx->pc = 0x1EAAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAAACu;
            // 0x1eaab0: 0x27a8003c  addiu       $t0, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA920u;
    if (runtime->hasFunction(0x1EA920u)) {
        auto targetFn = runtime->lookupFunction(0x1EA920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAAB4u; }
        if (ctx->pc != 0x1EAAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckIsViewMove__11CDngFreeMapFiiRfRf_0x1ea920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAAB4u; }
        if (ctx->pc != 0x1EAAB4u) { return; }
    }
    ctx->pc = 0x1EAAB4u;
label_1eaab4:
    // 0x1eaab4: 0xc6210100  lwc1        $f1, 0x100($s1)
    ctx->pc = 0x1eaab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eaab8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1eaab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eaabc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eaabcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eaac0: 0xe6200108  swc1        $f0, 0x108($s1)
    ctx->pc = 0x1eaac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 264), bits); }
    // 0x1eaac4: 0xc6210104  lwc1        $f1, 0x104($s1)
    ctx->pc = 0x1eaac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eaac8: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1eaac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eaacc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eaaccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eaad0: 0xe620010c  swc1        $f0, 0x10C($s1)
    ctx->pc = 0x1eaad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 268), bits); }
label_1eaad4:
    // 0x1eaad4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eaad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eaad8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eaad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eaadc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eaadcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eaae0: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAAE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAAE0u;
            // 0x1eaae4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EAAE8u;
}
