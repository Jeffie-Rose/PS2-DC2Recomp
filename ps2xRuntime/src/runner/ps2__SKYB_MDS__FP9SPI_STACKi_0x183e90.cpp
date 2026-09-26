#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SKYB_MDS__FP9SPI_STACKi
// Address: 0x183e90 - 0x183f40
void ps2__SKYB_MDS__FP9SPI_STACKi_0x183e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SKYB_MDS__FP9SPI_STACKi_0x183e90");
#endif

    switch (ctx->pc) {
        case 0x183ea8u: goto label_183ea8;
        case 0x183eb4u: goto label_183eb4;
        case 0x183eccu: goto label_183ecc;
        case 0x183eecu: goto label_183eec;
        case 0x183ef8u: goto label_183ef8;
        default: break;
    }

    ctx->pc = 0x183e90u;

    // 0x183e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183e94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x183e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x183e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x183e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x183e9c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x183e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x183ea0: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x183EA0u;
    SET_GPR_U32(ctx, 31, 0x183EA8u);
    ctx->pc = 0x183EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183EA0u;
            // 0x183ea4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183EA8u; }
        if (ctx->pc != 0x183EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183EA8u; }
        if (ctx->pc != 0x183EA8u) { return; }
    }
    ctx->pc = 0x183EA8u;
label_183ea8:
    // 0x183ea8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x183ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183eac: 0xc060f38  jal         func_183CE0
    ctx->pc = 0x183EACu;
    SET_GPR_U32(ctx, 31, 0x183EB4u);
    ctx->pc = 0x183EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183EACu;
            // 0x183eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183CE0u;
    if (runtime->hasFunction(0x183CE0u)) {
        auto targetFn = runtime->lookupFunction(0x183CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183EB4u; }
        if (ctx->pc != 0x183EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSkyID__Fi_0x183ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183EB4u; }
        if (ctx->pc != 0x183EB4u) { return; }
    }
    ctx->pc = 0x183EB4u;
label_183eb4:
    // 0x183eb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183EB4u;
    {
        const bool branch_taken_0x183eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183EB4u;
            // 0x183eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183eb4) {
            ctx->pc = 0x183EC4u;
            goto label_183ec4;
        }
    }
    ctx->pc = 0x183EBCu;
    // 0x183ebc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x183EBCu;
    {
        const bool branch_taken_0x183ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183EBCu;
            // 0x183ec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ebc) {
            ctx->pc = 0x183F2Cu;
            goto label_183f2c;
        }
    }
    ctx->pc = 0x183EC4u;
label_183ec4:
    // 0x183ec4: 0xc05191c  jal         func_146470
    ctx->pc = 0x183EC4u;
    SET_GPR_U32(ctx, 31, 0x183ECCu);
    ctx->pc = 0x183EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183EC4u;
            // 0x183ec8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183ECCu; }
        if (ctx->pc != 0x183ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183ECCu; }
        if (ctx->pc != 0x183ECCu) { return; }
    }
    ctx->pc = 0x183ECCu;
label_183ecc:
    // 0x183ecc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x183ECCu;
    {
        const bool branch_taken_0x183ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183ECCu;
            // 0x183ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ecc) {
            ctx->pc = 0x183EF0u;
            goto label_183ef0;
        }
    }
    ctx->pc = 0x183ED4u;
    // 0x183ed4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x183ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183ed8: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x183ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x183edc: 0x8f828a64  lw          $v0, -0x759C($gp)
    ctx->pc = 0x183edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x183ee0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183ee4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x183EE4u;
    SET_GPR_U32(ctx, 31, 0x183EECu);
    ctx->pc = 0x183EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183EE4u;
            // 0x183ee8: 0x24440190  addiu       $a0, $v0, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183EECu; }
        if (ctx->pc != 0x183EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183EECu; }
        if (ctx->pc != 0x183EECu) { return; }
    }
    ctx->pc = 0x183EECu;
label_183eec:
    // 0x183eec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_183ef0:
    // 0x183ef0: 0xc05190c  jal         func_146430
    ctx->pc = 0x183EF0u;
    SET_GPR_U32(ctx, 31, 0x183EF8u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183EF8u; }
        if (ctx->pc != 0x183EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183EF8u; }
        if (ctx->pc != 0x183EF8u) { return; }
    }
    ctx->pc = 0x183EF8u;
label_183ef8:
    // 0x183ef8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x183ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x183efc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x183efcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x183f00: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x183f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x183f04: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x183f04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x183f08: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x183f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x183f0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x183f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183f10: 0x0  nop
    ctx->pc = 0x183f10u;
    // NOP
    // 0x183f14: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x183f14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x183f18: 0x8f848a64  lw          $a0, -0x759C($gp)
    ctx->pc = 0x183f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x183f1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183f20: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x183f20u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x183f24: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x183f28: 0xe4600210  swc1        $f0, 0x210($v1)
    ctx->pc = 0x183f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 528), bits); }
label_183f2c:
    // 0x183f2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x183f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183f30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183f30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183f34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183f38: 0x3e00008  jr          $ra
    ctx->pc = 0x183F38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183F38u;
            // 0x183f3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183F40u;
}
