#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mapFUNC_FIRE_DATA__FP9SPI_STACKi
// Address: 0x163790 - 0x1638b0
void mapFUNC_FIRE_DATA__FP9SPI_STACKi_0x163790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mapFUNC_FIRE_DATA__FP9SPI_STACKi_0x163790");
#endif

    switch (ctx->pc) {
        case 0x1637c4u: goto label_1637c4;
        case 0x163828u: goto label_163828;
        case 0x16384cu: goto label_16384c;
        case 0x163874u: goto label_163874;
        case 0x163890u: goto label_163890;
        default: break;
    }

    ctx->pc = 0x163790u;

    // 0x163790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x163790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x163794: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x163794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x163798: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x163798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16379c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16379cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1637a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1637a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1637a4: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x1637a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x1637a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1637A8u;
    {
        const bool branch_taken_0x1637a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1637ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1637A8u;
            // 0x1637ac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1637a8) {
            ctx->pc = 0x1637B8u;
            goto label_1637b8;
        }
    }
    ctx->pc = 0x1637B0u;
    // 0x1637b0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1637B0u;
    {
        const bool branch_taken_0x1637b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1637B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1637B0u;
            // 0x1637b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1637b0) {
            ctx->pc = 0x16389Cu;
            goto label_16389c;
        }
    }
    ctx->pc = 0x1637B8u;
label_1637b8:
    // 0x1637b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1637b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1637bc: 0xc051928  jal         func_1464A0
    ctx->pc = 0x1637BCu;
    SET_GPR_U32(ctx, 31, 0x1637C4u);
    ctx->pc = 0x1637C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1637BCu;
            // 0x1637c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1464A0u;
    if (runtime->hasFunction(0x1464A0u)) {
        auto targetFn = runtime->lookupFunction(0x1464A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1637C4u; }
        if (ctx->pc != 0x1637C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackVector__FPfP9SPI_STACK_0x1464a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1637C4u; }
        if (ctx->pc != 0x1637C4u) { return; }
    }
    ctx->pc = 0x1637C4u;
label_1637c4:
    // 0x1637c4: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x1637c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1637c8: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x1637c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x1637cc: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1637ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1637d0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1637d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1637d4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1637d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1637d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1637d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1637dc: 0x0  nop
    ctx->pc = 0x1637dcu;
    // NOP
    // 0x1637e0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1637e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1637e4: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x1637e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1637e8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1637e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1637ec: 0x0  nop
    ctx->pc = 0x1637ecu;
    // NOP
    // 0x1637f0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1637F0u;
    {
        const bool branch_taken_0x1637f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1637F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1637F0u;
            // 0x1637f4: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1637f0) {
            ctx->pc = 0x163814u;
            goto label_163814;
        }
    }
    ctx->pc = 0x1637F8u;
    // 0x1637f8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1637f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1637fc: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x1637fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x163800: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x163800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x163804: 0x3c024218  lui         $v0, 0x4218
    ctx->pc = 0x163804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16920 << 16));
    // 0x163808: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x163808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x16380c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16380Cu;
    {
        const bool branch_taken_0x16380c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16380Cu;
            // 0x163810: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16380c) {
            ctx->pc = 0x163828u;
            goto label_163828;
        }
    }
    ctx->pc = 0x163814u;
label_163814:
    // 0x163814: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x163814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x163818: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x163818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16381c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x16381cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x163820: 0xc041c4a  jal         func_107128
    ctx->pc = 0x163820u;
    SET_GPR_U32(ctx, 31, 0x163828u);
    ctx->pc = 0x163824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163820u;
            // 0x163824: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163828u; }
        if (ctx->pc != 0x163828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163828u; }
        if (ctx->pc != 0x163828u) { return; }
    }
    ctx->pc = 0x163828u;
label_163828:
    // 0x163828: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x163828u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x16382c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16382cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163830: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x163830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x163834: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x163834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x163838: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x163838u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16383c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x16383cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x163840: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x163840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x163844: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163844u;
    SET_GPR_U32(ctx, 31, 0x16384Cu);
    ctx->pc = 0x163848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163844u;
            // 0x163848: 0x7c430020  sq          $v1, 0x20($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16384Cu; }
        if (ctx->pc != 0x16384Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16384Cu; }
        if (ctx->pc != 0x16384Cu) { return; }
    }
    ctx->pc = 0x16384Cu;
label_16384c:
    // 0x16384c: 0x8f838940  lw          $v1, -0x76C0($gp)
    ctx->pc = 0x16384cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x163850: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x163850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x163854: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x163854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x163858: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x163858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x16385c: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x16385cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x163860: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x163860u;
    {
        const bool branch_taken_0x163860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163860u;
            // 0x163864: 0xac640030  sw          $a0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163860) {
            ctx->pc = 0x16387Cu;
            goto label_16387c;
        }
    }
    ctx->pc = 0x163868u;
    // 0x163868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x163868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16386c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x16386Cu;
    SET_GPR_U32(ctx, 31, 0x163874u);
    ctx->pc = 0x163870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16386Cu;
            // 0x163870: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163874u; }
        if (ctx->pc != 0x163874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163874u; }
        if (ctx->pc != 0x163874u) { return; }
    }
    ctx->pc = 0x163874u;
label_163874:
    // 0x163874: 0x8f838940  lw          $v1, -0x76C0($gp)
    ctx->pc = 0x163874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x163878: 0xac620034  sw          $v0, 0x34($v1)
    ctx->pc = 0x163878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
label_16387c:
    // 0x16387c: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x16387cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x163880: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x163880u;
    {
        const bool branch_taken_0x163880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x163884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x163880u;
            // 0x163884: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163880) {
            ctx->pc = 0x16389Cu;
            goto label_16389c;
        }
    }
    ctx->pc = 0x163888u;
    // 0x163888: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x163888u;
    SET_GPR_U32(ctx, 31, 0x163890u);
    ctx->pc = 0x16388Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x163888u;
            // 0x16388c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163890u; }
        if (ctx->pc != 0x163890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x163890u; }
        if (ctx->pc != 0x163890u) { return; }
    }
    ctx->pc = 0x163890u;
label_163890:
    // 0x163890: 0x8f838940  lw          $v1, -0x76C0($gp)
    ctx->pc = 0x163890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x163894: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x163894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    // 0x163898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x163898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16389c:
    // 0x16389c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16389cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1638a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1638a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1638a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1638a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1638a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1638A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1638ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1638A8u;
            // 0x1638ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1638B0u;
}
