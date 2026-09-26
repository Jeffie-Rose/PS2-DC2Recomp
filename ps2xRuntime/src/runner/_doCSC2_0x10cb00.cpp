#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _doCSC2
// Address: 0x10cb00 - 0x10ccb0
void _doCSC2_0x10cb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_doCSC2_0x10cb00");
#endif

    switch (ctx->pc) {
        case 0x10cb70u: goto label_10cb70;
        case 0x10cba0u: goto label_10cba0;
        case 0x10cbbcu: goto label_10cbbc;
        case 0x10cbc4u: goto label_10cbc4;
        case 0x10cc00u: goto label_10cc00;
        case 0x10cc28u: goto label_10cc28;
        case 0x10cc30u: goto label_10cc30;
        case 0x10cc60u: goto label_10cc60;
        case 0x10cc68u: goto label_10cc68;
        case 0x10cc8cu: goto label_10cc8c;
        case 0x10cc98u: goto label_10cc98;
        default: break;
    }

    ctx->pc = 0x10cb00u;

    // 0x10cb00: 0x240703ff  addiu       $a3, $zero, 0x3FF
    ctx->pc = 0x10cb00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x10cb04: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10cb04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10cb08: 0xc7001a  div         $zero, $a2, $a3
    ctx->pc = 0x10cb08u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10cb0c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x10cb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x10cb10: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x10cb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x10cb14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10cb14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb18: 0x3442fc00  ori         $v0, $v0, 0xFC00
    ctx->pc = 0x10cb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64512);
    // 0x10cb1c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10cb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10cb20: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x10cb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x10cb24: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10cb24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10cb28: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10cb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x10cb2c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10cb30: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x10cb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x10cb34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10cb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10cb38: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10CB38u;
    {
        const bool branch_taken_0x10cb38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cb38) {
            ctx->pc = 0x10CB3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10CB38u;
            // 0x10cb3c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x10CB40u;
            goto label_10cb40;
        }
    }
    ctx->pc = 0x10CB40u;
label_10cb40:
    // 0x10cb40: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10cb44: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x10cb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x10cb48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10cb48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb4c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x10cb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x10cb50: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x10cb50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10cb54: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x10cb54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x10cb58: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10cb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10cb5c: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10cb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10cb60: 0x4012  mflo        $t0
    ctx->pc = 0x10cb60u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x10cb64: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x10cb64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x10cb68: 0xafa80030  sw          $t0, 0x30($sp)
    ctx->pc = 0x10cb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
    // 0x10cb6c: 0x0  nop
    ctx->pc = 0x10cb6cu;
    // NOP
label_10cb70:
    // 0x10cb70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10cb74: 0x0  nop
    ctx->pc = 0x10cb74u;
    // NOP
    // 0x10cb78: 0x0  nop
    ctx->pc = 0x10cb78u;
    // NOP
    // 0x10cb7c: 0x0  nop
    ctx->pc = 0x10cb7cu;
    // NOP
    // 0x10cb80: 0x0  nop
    ctx->pc = 0x10cb80u;
    // NOP
    // 0x10cb84: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10CB84u;
    {
        const bool branch_taken_0x10cb84 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10cb84) {
            ctx->pc = 0x10CB70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10cb70;
        }
    }
    ctx->pc = 0x10CB8Cu;
    // 0x10cb8c: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x10cb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x10cb90: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x10cb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10cb94: 0x24a5c988  addiu       $a1, $a1, -0x3678
    ctx->pc = 0x10cb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953352));
    // 0x10cb98: 0xc043f80  jal         func_10FE00
    ctx->pc = 0x10CB98u;
    SET_GPR_U32(ctx, 31, 0x10CBA0u);
    ctx->pc = 0x10CB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CB98u;
            // 0x10cb9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FE00u;
    if (runtime->hasFunction(0x10FE00u)) {
        auto targetFn = runtime->lookupFunction(0x10FE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CBA0u; }
        if (ctx->pc != 0x10CBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddDmacHandler2_0x10fe00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CBA0u; }
        if (ctx->pc != 0x10CBA0u) { return; }
    }
    ctx->pc = 0x10CBA0u;
label_10cba0:
    // 0x10cba0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10cba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cba4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x10cba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10cba8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10cba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10cbac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x10cbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10cbb0: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x10cbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x10cbb4: 0xc04433e  jal         func_110CF8
    ctx->pc = 0x10CBB4u;
    SET_GPR_U32(ctx, 31, 0x10CBBCu);
    ctx->pc = 0x10CBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CBB4u;
            // 0x10cbb8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110CF8u;
    if (runtime->hasFunction(0x110CF8u)) {
        auto targetFn = runtime->lookupFunction(0x110CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CBBCu; }
        if (ctx->pc != 0x10CBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableDmac_0x110cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CBBCu; }
        if (ctx->pc != 0x10CBBCu) { return; }
    }
    ctx->pc = 0x10CBBCu;
label_10cbbc:
    // 0x10cbbc: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x10CBBCu;
    SET_GPR_U32(ctx, 31, 0x10CBC4u);
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CBC4u; }
        if (ctx->pc != 0x10CBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CBC4u; }
        if (ctx->pc != 0x10CBC4u) { return; }
    }
    ctx->pc = 0x10CBC4u;
label_10cbc4:
    // 0x10cbc4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10cbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10cbc8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10cbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10cbcc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10cbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10cbd0: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x10cbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x10cbd4: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x10cbd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x10cbd8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10cbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10cbdc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10cbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10cbe0: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x10cbe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x10cbe4: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x10cbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x10cbe8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10cbec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x10cbecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x10cbf0: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x10cbf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x10cbf4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x10cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10cbf8: 0xc04630a  jal         func_118C28
    ctx->pc = 0x10CBF8u;
    SET_GPR_U32(ctx, 31, 0x10CC00u);
    ctx->pc = 0x10CBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CBF8u;
            // 0x10cbfc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CC00u; }
        if (ctx->pc != 0x10CC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x118c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CC00u; }
        if (ctx->pc != 0x10CC00u) { return; }
    }
    ctx->pc = 0x10CC00u;
label_10cc00:
    // 0x10cc00: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10cc00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10cc04: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x10cc04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x10cc08: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x10cc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x10cc0c: 0x344203ff  ori         $v0, $v0, 0x3FF
    ctx->pc = 0x10cc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1023);
    // 0x10cc10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10cc14: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x10cc14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10cc18: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x10cc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x10cc1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10cc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc20: 0xc04394a  jal         func_10E528
    ctx->pc = 0x10CC20u;
    SET_GPR_U32(ctx, 31, 0x10CC28u);
    ctx->pc = 0x10CC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CC20u;
            // 0x10cc24: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E528u;
    if (runtime->hasFunction(0x10E528u)) {
        auto targetFn = runtime->lookupFunction(0x10E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CC28u; }
        if (ctx->pc != 0x10CC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x10e528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CC28u; }
        if (ctx->pc != 0x10CC28u) { return; }
    }
    ctx->pc = 0x10CC28u;
label_10cc28:
    // 0x10cc28: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x10cc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10cc2c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_10cc30:
    // 0x10cc30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cc34: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x10cc34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10cc38: 0x0  nop
    ctx->pc = 0x10cc38u;
    // NOP
    // 0x10cc3c: 0x0  nop
    ctx->pc = 0x10cc3cu;
    // NOP
    // 0x10cc40: 0x0  nop
    ctx->pc = 0x10cc40u;
    // NOP
    // 0x10cc44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10CC44u;
    {
        const bool branch_taken_0x10cc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10cc44) {
            ctx->pc = 0x10CC30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10cc30;
        }
    }
    ctx->pc = 0x10CC4Cu;
    // 0x10cc4c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CC4Cu;
    {
        const bool branch_taken_0x10cc4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CC4Cu;
            // 0x10cc50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cc4c) {
            ctx->pc = 0x10CC60u;
            goto label_10cc60;
        }
    }
    ctx->pc = 0x10CC54u;
    // 0x10cc54: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x10cc54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x10cc58: 0xc043b64  jal         func_10ED90
    ctx->pc = 0x10CC58u;
    SET_GPR_U32(ctx, 31, 0x10CC60u);
    ctx->pc = 0x10CC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CC58u;
            // 0x10cc5c: 0x24a50830  addiu       $a1, $a1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ED90u;
    if (runtime->hasFunction(0x10ED90u)) {
        auto targetFn = runtime->lookupFunction(0x10ED90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CC60u; }
        if (ctx->pc != 0x10CC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x10ed90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CC60u; }
        if (ctx->pc != 0x10CC60u) { return; }
    }
    ctx->pc = 0x10CC60u;
label_10cc60:
    // 0x10cc60: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10cc64: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10cc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_10cc68:
    // 0x10cc68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10cc6c: 0x0  nop
    ctx->pc = 0x10cc6cu;
    // NOP
    // 0x10cc70: 0x0  nop
    ctx->pc = 0x10cc70u;
    // NOP
    // 0x10cc74: 0x0  nop
    ctx->pc = 0x10cc74u;
    // NOP
    // 0x10cc78: 0x0  nop
    ctx->pc = 0x10cc78u;
    // NOP
    // 0x10cc7c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10CC7Cu;
    {
        const bool branch_taken_0x10cc7c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10cc7c) {
            ctx->pc = 0x10CC68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10cc68;
        }
    }
    ctx->pc = 0x10CC84u;
    // 0x10cc84: 0xc044324  jal         func_110C90
    ctx->pc = 0x10CC84u;
    SET_GPR_U32(ctx, 31, 0x10CC8Cu);
    ctx->pc = 0x10CC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CC84u;
            // 0x10cc88: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110C90u;
    if (runtime->hasFunction(0x110C90u)) {
        auto targetFn = runtime->lookupFunction(0x110C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CC8Cu; }
        if (ctx->pc != 0x10CC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DisableDmac_0x110c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CC8Cu; }
        if (ctx->pc != 0x10CC8Cu) { return; }
    }
    ctx->pc = 0x10CC8Cu;
label_10cc8c:
    // 0x10cc8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10cc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cc90: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x10CC90u;
    SET_GPR_U32(ctx, 31, 0x10CC98u);
    ctx->pc = 0x10CC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CC90u;
            // 0x10cc94: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (runtime->hasFunction(0x10FE10u)) {
        auto targetFn = runtime->lookupFunction(0x10FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CC98u; }
        if (ctx->pc != 0x10CC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveDmacHandler_0x10fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CC98u; }
        if (ctx->pc != 0x10CC98u) { return; }
    }
    ctx->pc = 0x10CC98u;
label_10cc98:
    // 0x10cc98: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x10cc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10cc9c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x10cc9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10cca0: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x10cca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10cca4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x10cca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10cca8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CCA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CCA8u;
            // 0x10ccac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CCB0u;
}
