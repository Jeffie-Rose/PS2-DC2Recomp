#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SKY_MDS__FP9SPI_STACKi
// Address: 0x183d70 - 0x183e20
void ps2__SKY_MDS__FP9SPI_STACKi_0x183d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SKY_MDS__FP9SPI_STACKi_0x183d70");
#endif

    switch (ctx->pc) {
        case 0x183d88u: goto label_183d88;
        case 0x183d94u: goto label_183d94;
        case 0x183dacu: goto label_183dac;
        case 0x183dccu: goto label_183dcc;
        case 0x183dd8u: goto label_183dd8;
        default: break;
    }

    ctx->pc = 0x183d70u;

    // 0x183d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183d74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x183d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x183d78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x183d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x183d7c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x183d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x183d80: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x183D80u;
    SET_GPR_U32(ctx, 31, 0x183D88u);
    ctx->pc = 0x183D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183D80u;
            // 0x183d84: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D88u; }
        if (ctx->pc != 0x183D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D88u; }
        if (ctx->pc != 0x183D88u) { return; }
    }
    ctx->pc = 0x183D88u;
label_183d88:
    // 0x183d88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x183d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d8c: 0xc060f38  jal         func_183CE0
    ctx->pc = 0x183D8Cu;
    SET_GPR_U32(ctx, 31, 0x183D94u);
    ctx->pc = 0x183D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183D8Cu;
            // 0x183d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183CE0u;
    if (runtime->hasFunction(0x183CE0u)) {
        auto targetFn = runtime->lookupFunction(0x183CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D94u; }
        if (ctx->pc != 0x183D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSkyID__Fi_0x183ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D94u; }
        if (ctx->pc != 0x183D94u) { return; }
    }
    ctx->pc = 0x183D94u;
label_183d94:
    // 0x183d94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183D94u;
    {
        const bool branch_taken_0x183d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183D94u;
            // 0x183d98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d94) {
            ctx->pc = 0x183DA4u;
            goto label_183da4;
        }
    }
    ctx->pc = 0x183D9Cu;
    // 0x183d9c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x183D9Cu;
    {
        const bool branch_taken_0x183d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183D9Cu;
            // 0x183da0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d9c) {
            ctx->pc = 0x183E0Cu;
            goto label_183e0c;
        }
    }
    ctx->pc = 0x183DA4u;
label_183da4:
    // 0x183da4: 0xc05191c  jal         func_146470
    ctx->pc = 0x183DA4u;
    SET_GPR_U32(ctx, 31, 0x183DACu);
    ctx->pc = 0x183DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183DA4u;
            // 0x183da8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183DACu; }
        if (ctx->pc != 0x183DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183DACu; }
        if (ctx->pc != 0x183DACu) { return; }
    }
    ctx->pc = 0x183DACu;
label_183dac:
    // 0x183dac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x183DACu;
    {
        const bool branch_taken_0x183dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183DACu;
            // 0x183db0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183dac) {
            ctx->pc = 0x183DD0u;
            goto label_183dd0;
        }
    }
    ctx->pc = 0x183DB4u;
    // 0x183db4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x183db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183db8: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x183db8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x183dbc: 0x8f828a64  lw          $v0, -0x759C($gp)
    ctx->pc = 0x183dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x183dc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x183dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x183dc4: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x183DC4u;
    SET_GPR_U32(ctx, 31, 0x183DCCu);
    ctx->pc = 0x183DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183DC4u;
            // 0x183dc8: 0x24440080  addiu       $a0, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183DCCu; }
        if (ctx->pc != 0x183DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183DCCu; }
        if (ctx->pc != 0x183DCCu) { return; }
    }
    ctx->pc = 0x183DCCu;
label_183dcc:
    // 0x183dcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x183dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_183dd0:
    // 0x183dd0: 0xc05190c  jal         func_146430
    ctx->pc = 0x183DD0u;
    SET_GPR_U32(ctx, 31, 0x183DD8u);
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183DD8u; }
        if (ctx->pc != 0x183DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183DD8u; }
        if (ctx->pc != 0x183DD8u) { return; }
    }
    ctx->pc = 0x183DD8u;
label_183dd8:
    // 0x183dd8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x183dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x183ddc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x183ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x183de0: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x183de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x183de4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x183de4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x183de8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x183de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x183dec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x183decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x183df0: 0x0  nop
    ctx->pc = 0x183df0u;
    // NOP
    // 0x183df4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x183df4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x183df8: 0x8f848a64  lw          $a0, -0x759C($gp)
    ctx->pc = 0x183df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937188)));
    // 0x183dfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x183dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183e00: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x183e00u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x183e04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x183e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x183e08: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x183e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
label_183e0c:
    // 0x183e0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x183e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x183e10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x183e10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183e14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183e14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183e18: 0x3e00008  jr          $ra
    ctx->pc = 0x183E18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183E18u;
            // 0x183e1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183E20u;
}
