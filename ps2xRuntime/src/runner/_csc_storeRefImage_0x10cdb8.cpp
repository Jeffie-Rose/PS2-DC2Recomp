#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _csc_storeRefImage
// Address: 0x10cdb8 - 0x10d02c
void _csc_storeRefImage_0x10cdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_csc_storeRefImage_0x10cdb8");
#endif

    switch (ctx->pc) {
        case 0x10ce00u: goto label_10ce00;
        case 0x10ce30u: goto label_10ce30;
        case 0x10ce58u: goto label_10ce58;
        case 0x10ce68u: goto label_10ce68;
        case 0x10cec4u: goto label_10cec4;
        case 0x10cee0u: goto label_10cee0;
        case 0x10cee8u: goto label_10cee8;
        case 0x10cf18u: goto label_10cf18;
        case 0x10cf50u: goto label_10cf50;
        case 0x10cf68u: goto label_10cf68;
        case 0x10cf70u: goto label_10cf70;
        case 0x10cf7cu: goto label_10cf7c;
        case 0x10cf8cu: goto label_10cf8c;
        case 0x10cfc4u: goto label_10cfc4;
        case 0x10cfdcu: goto label_10cfdc;
        case 0x10cff4u: goto label_10cff4;
        case 0x10d008u: goto label_10d008;
        default: break;
    }

    ctx->pc = 0x10cdb8u;

    // 0x10cdb8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x10cdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10cdbc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x10cdbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10cdc0: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x10cdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x10cdc4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x10cdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x10cdc8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x10cdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x10cdcc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10cdccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cdd0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x10cdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x10cdd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10cdd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cdd8: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x10cdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x10cddc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10cddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cde0: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x10cde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x10cde4: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x10cde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x10cde8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x10cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x10cdec: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x10cdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10cdf0: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x10cdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
    // 0x10cdf4: 0x629818  mult        $s3, $v1, $v0
    ctx->pc = 0x10cdf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x10cdf8: 0xc04394a  jal         func_10E528
    ctx->pc = 0x10CDF8u;
    SET_GPR_U32(ctx, 31, 0x10CE00u);
    ctx->pc = 0x10CDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CDF8u;
            // 0x10cdfc: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E528u;
    if (runtime->hasFunction(0x10E528u)) {
        auto targetFn = runtime->lookupFunction(0x10E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CE00u; }
        if (ctx->pc != 0x10CE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x10e528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CE00u; }
        if (ctx->pc != 0x10CE00u) { return; }
    }
    ctx->pc = 0x10CE00u;
label_10ce00:
    // 0x10ce00: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10ce04: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10ce04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10ce08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10ce0c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x10ce0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x10ce10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CE10u;
    {
        const bool branch_taken_0x10ce10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CE10u;
            // 0x10ce14: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ce10) {
            ctx->pc = 0x10CE20u;
            goto label_10ce20;
        }
    }
    ctx->pc = 0x10CE18u;
    // 0x10ce18: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x10ce18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x10ce1c: 0xac222010  sw          $v0, 0x2010($at)
    ctx->pc = 0x10ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8208), GPR_U32(ctx, 2));
label_10ce20:
    // 0x10ce20: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10ce20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10ce24: 0x2a750400  slti        $s5, $s3, 0x400
    ctx->pc = 0x10ce24u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x10ce28: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x10ce28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x10ce2c: 0x0  nop
    ctx->pc = 0x10ce2cu;
    // NOP
label_10ce30:
    // 0x10ce30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10ce30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10ce34: 0x0  nop
    ctx->pc = 0x10ce34u;
    // NOP
    // 0x10ce38: 0x0  nop
    ctx->pc = 0x10ce38u;
    // NOP
    // 0x10ce3c: 0x0  nop
    ctx->pc = 0x10ce3cu;
    // NOP
    // 0x10ce40: 0x0  nop
    ctx->pc = 0x10ce40u;
    // NOP
    // 0x10ce44: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10CE44u;
    {
        const bool branch_taken_0x10ce44 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10ce44) {
            ctx->pc = 0x10CE30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ce30;
        }
    }
    ctx->pc = 0x10CE4Cu;
    // 0x10ce4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ce4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ce50: 0xc042acc  jal         func_10AB30
    ctx->pc = 0x10CE50u;
    SET_GPR_U32(ctx, 31, 0x10CE58u);
    ctx->pc = 0x10CE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CE50u;
            // 0x10ce54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB30u;
    if (runtime->hasFunction(0x10AB30u)) {
        auto targetFn = runtime->lookupFunction(0x10AB30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CE58u; }
        if (ctx->pc != 0x10CE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x10ab30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CE58u; }
        if (ctx->pc != 0x10CE58u) { return; }
    }
    ctx->pc = 0x10CE58u;
label_10ce58:
    // 0x10ce58: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10ce5c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x10ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10ce60: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x10ce60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x10ce64: 0x0  nop
    ctx->pc = 0x10ce64u;
    // NOP
label_10ce68:
    // 0x10ce68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10ce68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10ce6c: 0x0  nop
    ctx->pc = 0x10ce6cu;
    // NOP
    // 0x10ce70: 0x0  nop
    ctx->pc = 0x10ce70u;
    // NOP
    // 0x10ce74: 0x0  nop
    ctx->pc = 0x10ce74u;
    // NOP
    // 0x10ce78: 0x0  nop
    ctx->pc = 0x10ce78u;
    // NOP
    // 0x10ce7c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10CE7Cu;
    {
        const bool branch_taken_0x10ce7c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10ce7c) {
            ctx->pc = 0x10CE68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ce68;
        }
    }
    ctx->pc = 0x10CE84u;
    // 0x10ce84: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x10ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x10ce88: 0x3c110fff  lui         $s1, 0xFFF
    ctx->pc = 0x10ce88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4095 << 16));
    // 0x10ce8c: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x10ce8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10ce90: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x10ce90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x10ce94: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x10ce94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x10ce98: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x10ce98u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x10ce9c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x10ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x10cea0: 0x282202b  sltu        $a0, $s4, $v0
    ctx->pc = 0x10cea0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10cea4: 0x10800037  beqz        $a0, . + 4 + (0x37 << 2)
    ctx->pc = 0x10CEA4u;
    {
        const bool branch_taken_0x10cea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CEA4u;
            // 0x10cea8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cea4) {
            ctx->pc = 0x10CF84u;
            goto label_10cf84;
        }
    }
    ctx->pc = 0x10CEACu;
    // 0x10ceac: 0x3c050011  lui         $a1, 0x11
    ctx->pc = 0x10ceacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17 << 16));
    // 0x10ceb0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10ceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10ceb4: 0x24a5ccb0  addiu       $a1, $a1, -0x3350
    ctx->pc = 0x10ceb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954160));
    // 0x10ceb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10ceb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cebc: 0xc043f80  jal         func_10FE00
    ctx->pc = 0x10CEBCu;
    SET_GPR_U32(ctx, 31, 0x10CEC4u);
    ctx->pc = 0x10CEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CEBCu;
            // 0x10cec0: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FE00u;
    if (runtime->hasFunction(0x10FE00u)) {
        auto targetFn = runtime->lookupFunction(0x10FE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CEC4u; }
        if (ctx->pc != 0x10CEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddDmacHandler2_0x10fe00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CEC4u; }
        if (ctx->pc != 0x10CEC4u) { return; }
    }
    ctx->pc = 0x10CEC4u;
label_10cec4:
    // 0x10cec4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x10cec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cec8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x10cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x10cecc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10ced0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10ced0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10ced4: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x10ced4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x10ced8: 0xc04433e  jal         func_110CF8
    ctx->pc = 0x10CED8u;
    SET_GPR_U32(ctx, 31, 0x10CEE0u);
    ctx->pc = 0x10CEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CED8u;
            // 0x10cedc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110CF8u;
    if (runtime->hasFunction(0x110CF8u)) {
        auto targetFn = runtime->lookupFunction(0x110CF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CEE0u; }
        if (ctx->pc != 0x10CEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableDmac_0x110cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CEE0u; }
        if (ctx->pc != 0x10CEE0u) { return; }
    }
    ctx->pc = 0x10CEE0u;
label_10cee0:
    // 0x10cee0: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x10CEE0u;
    SET_GPR_U32(ctx, 31, 0x10CEE8u);
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CEE8u; }
        if (ctx->pc != 0x10CEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CEE8u; }
        if (ctx->pc != 0x10CEE8u) { return; }
    }
    ctx->pc = 0x10CEE8u;
label_10cee8:
    // 0x10cee8: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x10cee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10ceec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10cef0: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x10cef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x10cef4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10cef8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x10cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x10cefc: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x10cefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x10cf00: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x10cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x10cf04: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10cf08: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x10cf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x10cf0c: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x10cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10cf10: 0xc04630a  jal         func_118C28
    ctx->pc = 0x10CF10u;
    SET_GPR_U32(ctx, 31, 0x10CF18u);
    ctx->pc = 0x10CF14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CF10u;
            // 0x10cf14: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CF18u; }
        if (ctx->pc != 0x10CF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x118c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CF18u; }
        if (ctx->pc != 0x10CF18u) { return; }
    }
    ctx->pc = 0x10CF18u;
label_10cf18:
    // 0x10cf18: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x10cf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10cf1c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x10cf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x10cf20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10cf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cf24: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x10cf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x10cf28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10cf2c: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x10cf2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x10cf30: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x10cf30u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x10cf34: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x10cf34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x10cf38: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x10CF38u;
    {
        const bool branch_taken_0x10cf38 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CF38u;
            // 0x10cf3c: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cf38) {
            ctx->pc = 0x10CF58u;
            goto label_10cf58;
        }
    }
    ctx->pc = 0x10CF40u;
    // 0x10cf40: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x10cf40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x10cf44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x10cf44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf48: 0xc04321c  jal         func_10C870
    ctx->pc = 0x10CF48u;
    SET_GPR_U32(ctx, 31, 0x10CF50u);
    ctx->pc = 0x10CF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CF48u;
            // 0x10cf4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C870u;
    if (runtime->hasFunction(0x10C870u)) {
        auto targetFn = runtime->lookupFunction(0x10C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CF50u; }
        if (ctx->pc != 0x10CF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _doCSC_0x10c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CF50u; }
        if (ctx->pc != 0x10CF50u) { return; }
    }
    ctx->pc = 0x10CF50u;
label_10cf50:
    // 0x10cf50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10CF50u;
    {
        const bool branch_taken_0x10cf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cf50) {
            ctx->pc = 0x10CF68u;
            goto label_10cf68;
        }
    }
    ctx->pc = 0x10CF58u;
label_10cf58:
    // 0x10cf58: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x10cf58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x10cf5c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x10cf5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf60: 0xc0432c0  jal         func_10CB00
    ctx->pc = 0x10CF60u;
    SET_GPR_U32(ctx, 31, 0x10CF68u);
    ctx->pc = 0x10CF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CF60u;
            // 0x10cf64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB00u;
    if (runtime->hasFunction(0x10CB00u)) {
        auto targetFn = runtime->lookupFunction(0x10CB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CF68u; }
        if (ctx->pc != 0x10CF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _doCSC2_0x10cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CF68u; }
        if (ctx->pc != 0x10CF68u) { return; }
    }
    ctx->pc = 0x10CF68u;
label_10cf68:
    // 0x10cf68: 0xc044324  jal         func_110C90
    ctx->pc = 0x10CF68u;
    SET_GPR_U32(ctx, 31, 0x10CF70u);
    ctx->pc = 0x10CF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CF68u;
            // 0x10cf6c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110C90u;
    if (runtime->hasFunction(0x110C90u)) {
        auto targetFn = runtime->lookupFunction(0x110C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CF70u; }
        if (ctx->pc != 0x10CF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DisableDmac_0x110c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CF70u; }
        if (ctx->pc != 0x10CF70u) { return; }
    }
    ctx->pc = 0x10CF70u;
label_10cf70:
    // 0x10cf70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10cf70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf74: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x10CF74u;
    SET_GPR_U32(ctx, 31, 0x10CF7Cu);
    ctx->pc = 0x10CF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CF74u;
            // 0x10cf78: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (runtime->hasFunction(0x10FE10u)) {
        auto targetFn = runtime->lookupFunction(0x10FE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CF7Cu; }
        if (ctx->pc != 0x10CF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RemoveDmacHandler_0x10fe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CF7Cu; }
        if (ctx->pc != 0x10CF7Cu) { return; }
    }
    ctx->pc = 0x10CF7Cu;
label_10cf7c:
    // 0x10cf7c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x10CF7Cu;
    {
        const bool branch_taken_0x10cf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CF7Cu;
            // 0x10cf80: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cf7c) {
            ctx->pc = 0x10CFF8u;
            goto label_10cff8;
        }
    }
    ctx->pc = 0x10CF84u;
label_10cf84:
    // 0x10cf84: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x10CF84u;
    SET_GPR_U32(ctx, 31, 0x10CF8Cu);
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CF8Cu; }
        if (ctx->pc != 0x10CF8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CF8Cu; }
        if (ctx->pc != 0x10CF8Cu) { return; }
    }
    ctx->pc = 0x10CF8Cu;
label_10cf8c:
    // 0x10cf8c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x10cf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10cf90: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10cf94: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x10cf94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x10cf98: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x10cf98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10cf9c: 0x912024  and         $a0, $a0, $s1
    ctx->pc = 0x10cf9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 17));
    // 0x10cfa0: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x10cfa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x10cfa4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x10cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x10cfa8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10cfac: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x10cfacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x10cfb0: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x10cfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10cfb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cfb8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x10cfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x10cfbc: 0xc04630a  jal         func_118C28
    ctx->pc = 0x10CFBCu;
    SET_GPR_U32(ctx, 31, 0x10CFC4u);
    ctx->pc = 0x10CFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CFBCu;
            // 0x10cfc0: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CFC4u; }
        if (ctx->pc != 0x10CFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x118c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CFC4u; }
        if (ctx->pc != 0x10CFC4u) { return; }
    }
    ctx->pc = 0x10CFC4u;
label_10cfc4:
    // 0x10cfc4: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x10CFC4u;
    {
        const bool branch_taken_0x10cfc4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CFC4u;
            // 0x10cfc8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cfc4) {
            ctx->pc = 0x10CFE4u;
            goto label_10cfe4;
        }
    }
    ctx->pc = 0x10CFCCu;
    // 0x10cfcc: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x10cfccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x10cfd0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x10cfd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cfd4: 0xc04321c  jal         func_10C870
    ctx->pc = 0x10CFD4u;
    SET_GPR_U32(ctx, 31, 0x10CFDCu);
    ctx->pc = 0x10CFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CFD4u;
            // 0x10cfd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C870u;
    if (runtime->hasFunction(0x10C870u)) {
        auto targetFn = runtime->lookupFunction(0x10C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CFDCu; }
        if (ctx->pc != 0x10CFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _doCSC_0x10c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CFDCu; }
        if (ctx->pc != 0x10CFDCu) { return; }
    }
    ctx->pc = 0x10CFDCu;
label_10cfdc:
    // 0x10cfdc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10CFDCu;
    {
        const bool branch_taken_0x10cfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CFDCu;
            // 0x10cfe0: 0x8e040858  lw          $a0, 0x858($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cfdc) {
            ctx->pc = 0x10CFF8u;
            goto label_10cff8;
        }
    }
    ctx->pc = 0x10CFE4u;
label_10cfe4:
    // 0x10cfe4: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x10cfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x10cfe8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x10cfe8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cfec: 0xc0432c0  jal         func_10CB00
    ctx->pc = 0x10CFECu;
    SET_GPR_U32(ctx, 31, 0x10CFF4u);
    ctx->pc = 0x10CFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CFECu;
            // 0x10cff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CB00u;
    if (runtime->hasFunction(0x10CB00u)) {
        auto targetFn = runtime->lookupFunction(0x10CB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CFF4u; }
        if (ctx->pc != 0x10CFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _doCSC2_0x10cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CFF4u; }
        if (ctx->pc != 0x10CFF4u) { return; }
    }
    ctx->pc = 0x10CFF4u;
label_10cff4:
    // 0x10cff4: 0x8e040858  lw          $a0, 0x858($s0)
    ctx->pc = 0x10cff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2136)));
label_10cff8:
    // 0x10cff8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10cff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10cffc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10cffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10d000: 0xc04394a  jal         func_10E528
    ctx->pc = 0x10D000u;
    SET_GPR_U32(ctx, 31, 0x10D008u);
    ctx->pc = 0x10D004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D000u;
            // 0x10d004: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E528u;
    if (runtime->hasFunction(0x10E528u)) {
        auto targetFn = runtime->lookupFunction(0x10E528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D008u; }
        if (ctx->pc != 0x10D008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x10e528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D008u; }
        if (ctx->pc != 0x10D008u) { return; }
    }
    ctx->pc = 0x10D008u;
label_10d008:
    // 0x10d008: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x10d008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10d00c: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x10d00cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10d010: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x10d010u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10d014: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x10d014u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10d018: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x10d018u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10d01c: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x10d01cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10d020: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x10d020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d024: 0x3e00008  jr          $ra
    ctx->pc = 0x10D024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D024u;
            // 0x10d028: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D02Cu;
}
