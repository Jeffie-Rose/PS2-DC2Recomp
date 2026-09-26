#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFUNC_FLAG__FP9SPI_STACKi
// Address: 0x163710 - 0x16378c
void mapFUNC_FLAG__FP9SPI_STACKi_0x163710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFUNC_FLAG__FP9SPI_STACKi_0x163710");
#endif

    switch (ctx->pc) {
        case 0x163738u: goto label_163738;
        case 0x16374cu: goto label_16374c;
        case 0x163760u: goto label_163760;
        case 0x163770u: goto label_163770;
        default: break;
    }

    ctx->pc = 0x163710u;

    // 0x163710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x163710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x163714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x163714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x163718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x163718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16371c: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x16371cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x163720: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163720u;
    {
        const bool branch_taken_0x163720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163720u;
            // 0x163724: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163720) {
            ctx->pc = 0x163730u;
            goto label_163730;
        }
    }
    ctx->pc = 0x163728u;
    // 0x163728: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x163728u;
    {
        const bool branch_taken_0x163728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16372Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163728u;
            // 0x16372c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163728) {
            ctx->pc = 0x16377Cu;
            goto label_16377c;
        }
    }
    ctx->pc = 0x163730u;
label_163730:
    // 0x163730: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163730u;
    SET_GPR_U32(ctx, 31, 0x163738u);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163738u; }
        if (ctx->pc != 0x163738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163738u; }
        if (ctx->pc != 0x163738u) { return; }
    }
    ctx->pc = 0x163738u;
label_163738:
    // 0x163738: 0x8f838940  lw          $v1, -0x76C0($gp)
    ctx->pc = 0x163738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x16373c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16373cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163740: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x163740u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x163744: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163744u;
    SET_GPR_U32(ctx, 31, 0x16374Cu);
    ctx->pc = 0x163748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163744u;
            // 0x163748: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16374Cu; }
        if (ctx->pc != 0x16374Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16374Cu; }
        if (ctx->pc != 0x16374Cu) { return; }
    }
    ctx->pc = 0x16374Cu;
label_16374c:
    // 0x16374c: 0x8f838940  lw          $v1, -0x76C0($gp)
    ctx->pc = 0x16374cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x163750: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163754: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x163754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x163758: 0xc05190c  jal         func_146430
    ctx->pc = 0x163758u;
    SET_GPR_U32(ctx, 31, 0x163760u);
    ctx->pc = 0x16375Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163758u;
            // 0x16375c: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163760u; }
        if (ctx->pc != 0x163760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163760u; }
        if (ctx->pc != 0x163760u) { return; }
    }
    ctx->pc = 0x163760u;
label_163760:
    // 0x163760: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x163760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x163764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163768: 0xc05190c  jal         func_146430
    ctx->pc = 0x163768u;
    SET_GPR_U32(ctx, 31, 0x163770u);
    ctx->pc = 0x16376Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163768u;
            // 0x16376c: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x146430u;
    if (runtime->hasFunction(0x146430u)) {
        auto targetFn = runtime->lookupFunction(0x146430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163770u; }
        if (ctx->pc != 0x163770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackFloat__FP9SPI_STACK_0x146430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163770u; }
        if (ctx->pc != 0x163770u) { return; }
    }
    ctx->pc = 0x163770u;
label_163770:
    // 0x163770: 0x8f838940  lw          $v1, -0x76C0($gp)
    ctx->pc = 0x163770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x163774: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x163778: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x163778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_16377c:
    // 0x16377c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16377cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163780: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x163780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x163784: 0x3e00008  jr          $ra
    ctx->pc = 0x163784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163784u;
            // 0x163788: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16378Cu;
}
