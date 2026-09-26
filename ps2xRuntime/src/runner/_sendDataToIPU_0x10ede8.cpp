#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sendDataToIPU
// Address: 0x10ede8 - 0x10eed8
void _sendDataToIPU_0x10ede8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sendDataToIPU_0x10ede8");
#endif

    switch (ctx->pc) {
        case 0x10ee28u: goto label_10ee28;
        case 0x10ee8cu: goto label_10ee8c;
        case 0x10ee94u: goto label_10ee94;
        default: break;
    }

    ctx->pc = 0x10ede8u;

    // 0x10ede8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ede8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10edec: 0x2484088f  addiu       $a0, $a0, 0x88F
    ctx->pc = 0x10edecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2191));
    // 0x10edf0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10edf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10edf4: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x10edf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x10edf8: 0x48100  sll         $s0, $a0, 4
    ctx->pc = 0x10edf8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x10edfc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10edfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ee00: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x10ee00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee04: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x10ee04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee08: 0x1900001e  blez        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x10EE08u;
    {
        const bool branch_taken_0x10ee08 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x10EE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EE08u;
            // 0x10ee0c: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee08) {
            ctx->pc = 0x10EE84u;
            goto label_10ee84;
        }
    }
    ctx->pc = 0x10EE10u;
    // 0x10ee10: 0x3c09000f  lui         $t1, 0xF
    ctx->pc = 0x10ee10u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15 << 16));
    // 0x10ee14: 0x3c0c0fff  lui         $t4, 0xFFF
    ctx->pc = 0x10ee14u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4095 << 16));
    // 0x10ee18: 0x3529ff40  ori         $t1, $t1, 0xFF40
    ctx->pc = 0x10ee18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65344);
    // 0x10ee1c: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x10ee1cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x10ee20: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x10ee20u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10ee24: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x10ee24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10ee28:
    // 0x10ee28: 0x128102a  slt         $v0, $t1, $t0
    ctx->pc = 0x10ee28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x10ee2c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x10ee2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee30: 0x102380a  movz        $a3, $t0, $v0
    ctx->pc = 0x10ee30u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8));
    // 0x10ee34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10ee34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ee38: 0x24e6000f  addiu       $a2, $a3, 0xF
    ctx->pc = 0x10ee38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x10ee3c: 0x24e2001e  addiu       $v0, $a3, 0x1E
    ctx->pc = 0x10ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 30));
    // 0x10ee40: 0x1a6282a  slt         $a1, $t5, $a2
    ctx->pc = 0x10ee40u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x10ee44: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x10ee44u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x10ee48: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x10ee48u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6));
    // 0x10ee4c: 0x16c2024  and         $a0, $t3, $t4
    ctx->pc = 0x10ee4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
    // 0x10ee50: 0x1c8180b  movn        $v1, $t6, $t0
    ctx->pc = 0x10ee50u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14));
    // 0x10ee54: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x10ee54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x10ee58: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x10ee58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x10ee5c: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x10ee5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x10ee60: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10ee60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x10ee64: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10ee64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x10ee68: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x10ee68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x10ee6c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x10ee6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x10ee70: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x10ee70u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x10ee74: 0xf  sync
    ctx->pc = 0x10ee74u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10ee78: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x10ee78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x10ee7c: 0x1d00ffea  bgtz        $t0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x10EE7Cu;
    {
        const bool branch_taken_0x10ee7c = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x10EE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EE7Cu;
            // 0x10ee80: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ee7c) {
            ctx->pc = 0x10EE28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10ee28;
        }
    }
    ctx->pc = 0x10EE84u;
label_10ee84:
    // 0x10ee84: 0xc0440d8  jal         func_110360
    ctx->pc = 0x10EE84u;
    SET_GPR_U32(ctx, 31, 0x10EE8Cu);
    ctx->pc = 0x10EE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EE84u;
            // 0x10ee88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110360u;
    if (runtime->hasFunction(0x110360u)) {
        auto targetFn = runtime->lookupFunction(0x110360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EE8Cu; }
        if (ctx->pc != 0x10EE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x110360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EE8Cu; }
        if (ctx->pc != 0x10EE8Cu) { return; }
    }
    ctx->pc = 0x10EE8Cu;
label_10ee8c:
    // 0x10ee8c: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x10EE8Cu;
    SET_GPR_U32(ctx, 31, 0x10EE94u);
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EE94u; }
        if (ctx->pc != 0x10EE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EE94u; }
        if (ctx->pc != 0x10EE94u) { return; }
    }
    ctx->pc = 0x10EE94u;
label_10ee94:
    // 0x10ee94: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x10ee94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x10ee98: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10ee98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10ee9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10ee9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x10eea0: 0x3484b430  ori         $a0, $a0, 0xB430
    ctx->pc = 0x10eea0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46128);
    // 0x10eea4: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x10eea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x10eea8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10eea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10eeac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x10eeacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x10eeb0: 0x3442b420  ori         $v0, $v0, 0xB420
    ctx->pc = 0x10eeb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46112);
    // 0x10eeb4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x10eeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x10eeb8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10eebc: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x10eebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x10eec0: 0x24020105  addiu       $v0, $zero, 0x105
    ctx->pc = 0x10eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x10eec4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10eec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10eec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10eec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10eecc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10eeccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x10eed0: 0x804630a  j           func_118C28
    ctx->pc = 0x10EED0u;
    ctx->pc = 0x10EED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EED0u;
            // 0x10eed4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x118c28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10EED8u;
}
