#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NextAction__FP14ActionIterator
// Address: 0x101ca0 - 0x101fb4
void NextAction__FP14ActionIterator_0x101ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NextAction__FP14ActionIterator_0x101ca0");
#endif

    switch (ctx->pc) {
        case 0x101cb8u: goto label_101cb8;
        case 0x101ce4u: goto label_101ce4;
        case 0x101cf0u: goto label_101cf0;
        case 0x101d04u: goto label_101d04;
        case 0x101d14u: goto label_101d14;
        case 0x101d58u: goto label_101d58;
        case 0x101d70u: goto label_101d70;
        case 0x101d7cu: goto label_101d7c;
        case 0x101d94u: goto label_101d94;
        case 0x101dacu: goto label_101dac;
        case 0x101db8u: goto label_101db8;
        case 0x101dc4u: goto label_101dc4;
        case 0x101ddcu: goto label_101ddc;
        case 0x101de8u: goto label_101de8;
        case 0x101e00u: goto label_101e00;
        case 0x101e0cu: goto label_101e0c;
        case 0x101e24u: goto label_101e24;
        case 0x101e30u: goto label_101e30;
        case 0x101e3cu: goto label_101e3c;
        case 0x101e54u: goto label_101e54;
        case 0x101e60u: goto label_101e60;
        case 0x101e6cu: goto label_101e6c;
        case 0x101e78u: goto label_101e78;
        case 0x101e90u: goto label_101e90;
        case 0x101ea8u: goto label_101ea8;
        case 0x101eb4u: goto label_101eb4;
        case 0x101efcu: goto label_101efc;
        case 0x101f08u: goto label_101f08;
        case 0x101f1cu: goto label_101f1c;
        case 0x101f30u: goto label_101f30;
        case 0x101f3cu: goto label_101f3c;
        case 0x101f48u: goto label_101f48;
        case 0x101f64u: goto label_101f64;
        case 0x101f6cu: goto label_101f6c;
        case 0x101f78u: goto label_101f78;
        default: break;
    }

    ctx->pc = 0x101ca0u;

    // 0x101ca0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x101ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x101ca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x101ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x101ca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x101cac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x101cb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101cb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101cb4: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x101cb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_101cb8:
    // 0x101cb8: 0x8e290008  lw          $t1, 0x8($s1)
    ctx->pc = 0x101cb8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x101cbc: 0x11200005  beqz        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x101CBCu;
    {
        const bool branch_taken_0x101cbc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x101cbc) {
            ctx->pc = 0x101CD4u;
            goto label_101cd4;
        }
    }
    ctx->pc = 0x101CC4u;
    // 0x101cc4: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x101cc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x101cc8: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x101cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x101ccc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x101CCCu;
    {
        const bool branch_taken_0x101ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101CCCu;
            // 0x101cd0: 0x3062001f  andi        $v0, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x101ccc) {
            ctx->pc = 0x101D28u;
            goto label_101d28;
        }
    }
    ctx->pc = 0x101CD4u;
label_101cd4:
    // 0x101cd4: 0x0  nop
    ctx->pc = 0x101cd4u;
    // NOP
    // 0x101cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101cdc: 0xc0408e8  jal         func_1023A0
    ctx->pc = 0x101CDCu;
    SET_GPR_U32(ctx, 31, 0x101CE4u);
    ctx->pc = 0x101CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101CDCu;
            // 0x101ce0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1023A0u;
    if (runtime->hasFunction(0x1023A0u)) {
        auto targetFn = runtime->lookupFunction(0x1023A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101CE4u; }
        if (ctx->pc != 0x101CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___PopStackFrame__FP12ThrowContextP13ExceptionInfo_0x1023a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101CE4u; }
        if (ctx->pc != 0x101CE4u) { return; }
    }
    ctx->pc = 0x101CE4u;
label_101ce4:
    // 0x101ce4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ce8: 0xc0407f0  jal         func_101FC0
    ctx->pc = 0x101CE8u;
    SET_GPR_U32(ctx, 31, 0x101CF0u);
    ctx->pc = 0x101CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101CE8u;
            // 0x101cec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FC0u;
    if (runtime->hasFunction(0x101FC0u)) {
        auto targetFn = runtime->lookupFunction(0x101FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101CF0u; }
        if (ctx->pc != 0x101CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FindExceptionRecord__FPcP13ExceptionInfo_0x101fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101CF0u; }
        if (ctx->pc != 0x101CF0u) { return; }
    }
    ctx->pc = 0x101CF0u;
label_101cf0:
    // 0x101cf0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x101cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x101cf4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x101CF4u;
    {
        const bool branch_taken_0x101cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101cf4) {
            ctx->pc = 0x101D04u;
            goto label_101d04;
        }
    }
    ctx->pc = 0x101CFCu;
    // 0x101cfc: 0xc040248  jal         func_100920
    ctx->pc = 0x101CFCu;
    SET_GPR_U32(ctx, 31, 0x101D04u);
    ctx->pc = 0x100920u;
    if (runtime->hasFunction(0x100920u)) {
        auto targetFn = runtime->lookupFunction(0x100920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D04u; }
        if (ctx->pc != 0x101D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        terminate__3stdFv_0x100920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D04u; }
        if (ctx->pc != 0x101D04u) { return; }
    }
    ctx->pc = 0x101D04u;
label_101d04:
    // 0x101d04: 0x0  nop
    ctx->pc = 0x101d04u;
    // NOP
    // 0x101d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x101d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d0c: 0xc0408bc  jal         func_1022F0
    ctx->pc = 0x101D0Cu;
    SET_GPR_U32(ctx, 31, 0x101D14u);
    ctx->pc = 0x101D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101D0Cu;
            // 0x101d10: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1022F0u;
    if (runtime->hasFunction(0x1022F0u)) {
        auto targetFn = runtime->lookupFunction(0x1022F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D14u; }
        if (ctx->pc != 0x101D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___SetupFrameInfo__FP12ThrowContextP13ExceptionInfo_0x1022f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D14u; }
        if (ctx->pc != 0x101D14u) { return; }
    }
    ctx->pc = 0x101D14u;
label_101d14:
    // 0x101d14: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x101d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x101d18: 0x1040ffe7  beqz        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x101D18u;
    {
        const bool branch_taken_0x101d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101d18) {
            ctx->pc = 0x101CB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101cb8;
        }
    }
    ctx->pc = 0x101D20u;
    // 0x101d20: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x101D20u;
    {
        const bool branch_taken_0x101d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101d20) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101D28u;
label_101d28:
    // 0x101d28: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x101d28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x101d2c: 0x1020008b  beqz        $at, . + 4 + (0x8B << 2)
    ctx->pc = 0x101D2Cu;
    {
        const bool branch_taken_0x101d2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x101D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101D2Cu;
            // 0x101d30: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d2c) {
            ctx->pc = 0x101F5Cu;
            goto label_101f5c;
        }
    }
    ctx->pc = 0x101D34u;
    // 0x101d34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x101d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x101d38: 0x2463ef70  addiu       $v1, $v1, -0x1090
    ctx->pc = 0x101d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963056));
    // 0x101d3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x101d40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x101d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x101d44: 0x400008  jr          $v0
    ctx->pc = 0x101D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x101D4Cu: goto label_101d4c;
            case 0x101D64u: goto label_101d64;
            case 0x101D88u: goto label_101d88;
            case 0x101DA0u: goto label_101da0;
            case 0x101DD0u: goto label_101dd0;
            case 0x101DF4u: goto label_101df4;
            case 0x101E18u: goto label_101e18;
            case 0x101E48u: goto label_101e48;
            case 0x101E84u: goto label_101e84;
            case 0x101E9Cu: goto label_101e9c;
            case 0x101EC0u: goto label_101ec0;
            case 0x101F10u: goto label_101f10;
            case 0x101F24u: goto label_101f24;
            case 0x101F5Cu: goto label_101f5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x101D4Cu;
label_101d4c:
    // 0x101d4c: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x101d50: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101D50u;
    SET_GPR_U32(ctx, 31, 0x101D58u);
    ctx->pc = 0x101D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101D50u;
            // 0x101d54: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D58u; }
        if (ctx->pc != 0x101D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D58u; }
        if (ctx->pc != 0x101D58u) { return; }
    }
    ctx->pc = 0x101D58u;
label_101d58:
    // 0x101d58: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x101d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x101d5c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x101D5Cu;
    {
        const bool branch_taken_0x101d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101D5Cu;
            // 0x101d60: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d5c) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101D64u;
label_101d64:
    // 0x101d64: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x101d68: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101D68u;
    SET_GPR_U32(ctx, 31, 0x101D70u);
    ctx->pc = 0x101D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101D68u;
            // 0x101d6c: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D70u; }
        if (ctx->pc != 0x101D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D70u; }
        if (ctx->pc != 0x101D70u) { return; }
    }
    ctx->pc = 0x101D70u;
label_101d70:
    // 0x101d70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101d74: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101D74u;
    SET_GPR_U32(ctx, 31, 0x101D7Cu);
    ctx->pc = 0x101D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101D74u;
            // 0x101d78: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D7Cu; }
        if (ctx->pc != 0x101D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D7Cu; }
        if (ctx->pc != 0x101D7Cu) { return; }
    }
    ctx->pc = 0x101D7Cu;
label_101d7c:
    // 0x101d7c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x101d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x101d80: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x101D80u;
    {
        const bool branch_taken_0x101d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101D80u;
            // 0x101d84: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d80) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101D88u;
label_101d88:
    // 0x101d88: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x101d8c: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101D8Cu;
    SET_GPR_U32(ctx, 31, 0x101D94u);
    ctx->pc = 0x101D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101D8Cu;
            // 0x101d90: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D94u; }
        if (ctx->pc != 0x101D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101D94u; }
        if (ctx->pc != 0x101D94u) { return; }
    }
    ctx->pc = 0x101D94u;
label_101d94:
    // 0x101d94: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x101d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x101d98: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x101D98u;
    {
        const bool branch_taken_0x101d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101D98u;
            // 0x101d9c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101d98) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101DA0u;
label_101da0:
    // 0x101da0: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x101da4: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101DA4u;
    SET_GPR_U32(ctx, 31, 0x101DACu);
    ctx->pc = 0x101DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101DA4u;
            // 0x101da8: 0x27a50054  addiu       $a1, $sp, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DACu; }
        if (ctx->pc != 0x101DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DACu; }
        if (ctx->pc != 0x101DACu) { return; }
    }
    ctx->pc = 0x101DACu;
label_101dac:
    // 0x101dac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101db0: 0xc04028c  jal         func_100A30
    ctx->pc = 0x101DB0u;
    SET_GPR_U32(ctx, 31, 0x101DB8u);
    ctx->pc = 0x101DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101DB0u;
            // 0x101db4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DB8u; }
        if (ctx->pc != 0x101DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DB8u; }
        if (ctx->pc != 0x101DB8u) { return; }
    }
    ctx->pc = 0x101DB8u;
label_101db8:
    // 0x101db8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101dbc: 0xc04028c  jal         func_100A30
    ctx->pc = 0x101DBCu;
    SET_GPR_U32(ctx, 31, 0x101DC4u);
    ctx->pc = 0x101DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101DBCu;
            // 0x101dc0: 0x27a5004c  addiu       $a1, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DC4u; }
        if (ctx->pc != 0x101DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DC4u; }
        if (ctx->pc != 0x101DC4u) { return; }
    }
    ctx->pc = 0x101DC4u;
label_101dc4:
    // 0x101dc4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x101dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x101dc8: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x101DC8u;
    {
        const bool branch_taken_0x101dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101DC8u;
            // 0x101dcc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101dc8) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101DD0u;
label_101dd0:
    // 0x101dd0: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x101dd4: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101DD4u;
    SET_GPR_U32(ctx, 31, 0x101DDCu);
    ctx->pc = 0x101DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101DD4u;
            // 0x101dd8: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DDCu; }
        if (ctx->pc != 0x101DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DDCu; }
        if (ctx->pc != 0x101DDCu) { return; }
    }
    ctx->pc = 0x101DDCu;
label_101ddc:
    // 0x101ddc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101de0: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101DE0u;
    SET_GPR_U32(ctx, 31, 0x101DE8u);
    ctx->pc = 0x101DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101DE0u;
            // 0x101de4: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DE8u; }
        if (ctx->pc != 0x101DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101DE8u; }
        if (ctx->pc != 0x101DE8u) { return; }
    }
    ctx->pc = 0x101DE8u;
label_101de8:
    // 0x101de8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x101de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x101dec: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x101DECu;
    {
        const bool branch_taken_0x101dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101DECu;
            // 0x101df0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101dec) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101DF4u;
label_101df4:
    // 0x101df4: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x101df8: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101DF8u;
    SET_GPR_U32(ctx, 31, 0x101E00u);
    ctx->pc = 0x101DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101DF8u;
            // 0x101dfc: 0x27a50064  addiu       $a1, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E00u; }
        if (ctx->pc != 0x101E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E00u; }
        if (ctx->pc != 0x101E00u) { return; }
    }
    ctx->pc = 0x101E00u;
label_101e00:
    // 0x101e00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e04: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101E04u;
    SET_GPR_U32(ctx, 31, 0x101E0Cu);
    ctx->pc = 0x101E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101E04u;
            // 0x101e08: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E0Cu; }
        if (ctx->pc != 0x101E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E0Cu; }
        if (ctx->pc != 0x101E0Cu) { return; }
    }
    ctx->pc = 0x101E0Cu;
label_101e0c:
    // 0x101e0c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x101e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x101e10: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x101E10u;
    {
        const bool branch_taken_0x101e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101E10u;
            // 0x101e14: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e10) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101E18u;
label_101e18:
    // 0x101e18: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x101e1c: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101E1Cu;
    SET_GPR_U32(ctx, 31, 0x101E24u);
    ctx->pc = 0x101E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101E1Cu;
            // 0x101e20: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E24u; }
        if (ctx->pc != 0x101E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E24u; }
        if (ctx->pc != 0x101E24u) { return; }
    }
    ctx->pc = 0x101E24u;
label_101e24:
    // 0x101e24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e28: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101E28u;
    SET_GPR_U32(ctx, 31, 0x101E30u);
    ctx->pc = 0x101E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101E28u;
            // 0x101e2c: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E30u; }
        if (ctx->pc != 0x101E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E30u; }
        if (ctx->pc != 0x101E30u) { return; }
    }
    ctx->pc = 0x101E30u;
label_101e30:
    // 0x101e30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e34: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101E34u;
    SET_GPR_U32(ctx, 31, 0x101E3Cu);
    ctx->pc = 0x101E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101E34u;
            // 0x101e38: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E3Cu; }
        if (ctx->pc != 0x101E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E3Cu; }
        if (ctx->pc != 0x101E3Cu) { return; }
    }
    ctx->pc = 0x101E3Cu;
label_101e3c:
    // 0x101e3c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x101e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x101e40: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x101E40u;
    {
        const bool branch_taken_0x101e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101E40u;
            // 0x101e44: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e40) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101E48u;
label_101e48:
    // 0x101e48: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x101e4c: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101E4Cu;
    SET_GPR_U32(ctx, 31, 0x101E54u);
    ctx->pc = 0x101E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101E4Cu;
            // 0x101e50: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E54u; }
        if (ctx->pc != 0x101E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E54u; }
        if (ctx->pc != 0x101E54u) { return; }
    }
    ctx->pc = 0x101E54u;
label_101e54:
    // 0x101e54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e58: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101E58u;
    SET_GPR_U32(ctx, 31, 0x101E60u);
    ctx->pc = 0x101E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101E58u;
            // 0x101e5c: 0x27a5007c  addiu       $a1, $sp, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E60u; }
        if (ctx->pc != 0x101E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E60u; }
        if (ctx->pc != 0x101E60u) { return; }
    }
    ctx->pc = 0x101E60u;
label_101e60:
    // 0x101e60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e64: 0xc04028c  jal         func_100A30
    ctx->pc = 0x101E64u;
    SET_GPR_U32(ctx, 31, 0x101E6Cu);
    ctx->pc = 0x101E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101E64u;
            // 0x101e68: 0x27a50078  addiu       $a1, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E6Cu; }
        if (ctx->pc != 0x101E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E6Cu; }
        if (ctx->pc != 0x101E6Cu) { return; }
    }
    ctx->pc = 0x101E6Cu;
label_101e6c:
    // 0x101e6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101e70: 0xc04028c  jal         func_100A30
    ctx->pc = 0x101E70u;
    SET_GPR_U32(ctx, 31, 0x101E78u);
    ctx->pc = 0x101E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101E70u;
            // 0x101e74: 0x27a50074  addiu       $a1, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E78u; }
        if (ctx->pc != 0x101E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E78u; }
        if (ctx->pc != 0x101E78u) { return; }
    }
    ctx->pc = 0x101E78u;
label_101e78:
    // 0x101e78: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x101e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x101e7c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x101E7Cu;
    {
        const bool branch_taken_0x101e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101E7Cu;
            // 0x101e80: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e7c) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101E84u;
label_101e84:
    // 0x101e84: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x101e88: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101E88u;
    SET_GPR_U32(ctx, 31, 0x101E90u);
    ctx->pc = 0x101E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101E88u;
            // 0x101e8c: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E90u; }
        if (ctx->pc != 0x101E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101E90u; }
        if (ctx->pc != 0x101E90u) { return; }
    }
    ctx->pc = 0x101E90u;
label_101e90:
    // 0x101e90: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x101e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x101e94: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x101E94u;
    {
        const bool branch_taken_0x101e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101E94u;
            // 0x101e98: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101e94) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101E9Cu;
label_101e9c:
    // 0x101e9c: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x101ea0: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101EA0u;
    SET_GPR_U32(ctx, 31, 0x101EA8u);
    ctx->pc = 0x101EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101EA0u;
            // 0x101ea4: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101EA8u; }
        if (ctx->pc != 0x101EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101EA8u; }
        if (ctx->pc != 0x101EA8u) { return; }
    }
    ctx->pc = 0x101EA8u;
label_101ea8:
    // 0x101ea8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101eac: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101EACu;
    SET_GPR_U32(ctx, 31, 0x101EB4u);
    ctx->pc = 0x101EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101EACu;
            // 0x101eb0: 0x27a50088  addiu       $a1, $sp, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101EB4u; }
        if (ctx->pc != 0x101EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101EB4u; }
        if (ctx->pc != 0x101EB4u) { return; }
    }
    ctx->pc = 0x101EB4u;
label_101eb4:
    // 0x101eb4: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x101eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x101eb8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x101EB8u;
    {
        const bool branch_taken_0x101eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101EB8u;
            // 0x101ebc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101eb8) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101EC0u;
label_101ec0:
    // 0x101ec0: 0x91280002  lbu         $t0, 0x2($t1)
    ctx->pc = 0x101ec0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x101ec4: 0x27a20098  addiu       $v0, $sp, 0x98
    ctx->pc = 0x101ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x101ec8: 0x91260003  lbu         $a2, 0x3($t1)
    ctx->pc = 0x101ec8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x101ecc: 0x25240005  addiu       $a0, $t1, 0x5
    ctx->pc = 0x101eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x101ed0: 0x91230004  lbu         $v1, 0x4($t1)
    ctx->pc = 0x101ed0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x101ed4: 0x27a50094  addiu       $a1, $sp, 0x94
    ctx->pc = 0x101ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    // 0x101ed8: 0x91270001  lbu         $a3, 0x1($t1)
    ctx->pc = 0x101ed8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x101edc: 0x84200  sll         $t0, $t0, 8
    ctx->pc = 0x101edcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
    // 0x101ee0: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x101ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x101ee4: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x101ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x101ee8: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x101ee8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x101eec: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x101eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x101ef0: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x101ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x101ef4: 0xc04028c  jal         func_100A30
    ctx->pc = 0x101EF4u;
    SET_GPR_U32(ctx, 31, 0x101EFCu);
    ctx->pc = 0x101EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101EF4u;
            // 0x101ef8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101EFCu; }
        if (ctx->pc != 0x101EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101EFCu; }
        if (ctx->pc != 0x101EFCu) { return; }
    }
    ctx->pc = 0x101EFCu;
label_101efc:
    // 0x101efc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f00: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101F00u;
    SET_GPR_U32(ctx, 31, 0x101F08u);
    ctx->pc = 0x101F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101F00u;
            // 0x101f04: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F08u; }
        if (ctx->pc != 0x101F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F08u; }
        if (ctx->pc != 0x101F08u) { return; }
    }
    ctx->pc = 0x101F08u;
label_101f08:
    // 0x101f08: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x101F08u;
    {
        const bool branch_taken_0x101f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F08u;
            // 0x101f0c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f08) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101F10u;
label_101f10:
    // 0x101f10: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x101f14: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101F14u;
    SET_GPR_U32(ctx, 31, 0x101F1Cu);
    ctx->pc = 0x101F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101F14u;
            // 0x101f18: 0x27a5009c  addiu       $a1, $sp, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F1Cu; }
        if (ctx->pc != 0x101F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F1Cu; }
        if (ctx->pc != 0x101F1Cu) { return; }
    }
    ctx->pc = 0x101F1Cu;
label_101f1c:
    // 0x101f1c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x101F1Cu;
    {
        const bool branch_taken_0x101f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F1Cu;
            // 0x101f20: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f1c) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101F24u;
label_101f24:
    // 0x101f24: 0x25240001  addiu       $a0, $t1, 0x1
    ctx->pc = 0x101f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x101f28: 0xc04028c  jal         func_100A30
    ctx->pc = 0x101F28u;
    SET_GPR_U32(ctx, 31, 0x101F30u);
    ctx->pc = 0x101F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101F28u;
            // 0x101f2c: 0x27a500a8  addiu       $a1, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F30u; }
        if (ctx->pc != 0x101F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F30u; }
        if (ctx->pc != 0x101F30u) { return; }
    }
    ctx->pc = 0x101F30u;
label_101f30:
    // 0x101f30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f34: 0xc04028c  jal         func_100A30
    ctx->pc = 0x101F34u;
    SET_GPR_U32(ctx, 31, 0x101F3Cu);
    ctx->pc = 0x101F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101F34u;
            // 0x101f38: 0x27a500a4  addiu       $a1, $sp, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A30u;
    if (runtime->hasFunction(0x100A30u)) {
        auto targetFn = runtime->lookupFunction(0x100A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F3Cu; }
        if (ctx->pc != 0x101F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeUnsignedNumber__FPcPUi_0x100a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F3Cu; }
        if (ctx->pc != 0x101F3Cu) { return; }
    }
    ctx->pc = 0x101F3Cu;
label_101f3c:
    // 0x101f3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101f40: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101F40u;
    SET_GPR_U32(ctx, 31, 0x101F48u);
    ctx->pc = 0x101F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101F40u;
            // 0x101f44: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F48u; }
        if (ctx->pc != 0x101F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F48u; }
        if (ctx->pc != 0x101F48u) { return; }
    }
    ctx->pc = 0x101F48u;
label_101f48:
    // 0x101f48: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x101f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x101f4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x101f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x101f50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x101f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x101f54: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x101F54u;
    {
        const bool branch_taken_0x101f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101F54u;
            // 0x101f58: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101f54) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101F5Cu;
label_101f5c:
    // 0x101f5c: 0xc040248  jal         func_100920
    ctx->pc = 0x101F5Cu;
    SET_GPR_U32(ctx, 31, 0x101F64u);
    ctx->pc = 0x100920u;
    if (runtime->hasFunction(0x100920u)) {
        auto targetFn = runtime->lookupFunction(0x100920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F64u; }
        if (ctx->pc != 0x101F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        terminate__3stdFv_0x100920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F64u; }
        if (ctx->pc != 0x101F64u) { return; }
    }
    ctx->pc = 0x101F64u;
label_101f64:
    // 0x101f64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x101F64u;
    {
        const bool branch_taken_0x101f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x101f64) {
            ctx->pc = 0x101F88u;
            goto label_101f88;
        }
    }
    ctx->pc = 0x101F6Cu;
label_101f6c:
    // 0x101f6c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x101f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x101f70: 0xc0402b4  jal         func_100AD0
    ctx->pc = 0x101F70u;
    SET_GPR_U32(ctx, 31, 0x101F78u);
    ctx->pc = 0x101F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101F70u;
            // 0x101f74: 0x27a500ac  addiu       $a1, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AD0u;
    if (runtime->hasFunction(0x100AD0u)) {
        auto targetFn = runtime->lookupFunction(0x100AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F78u; }
        if (ctx->pc != 0x101F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___DecodeSignedNumber__FPcPi_0x100ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101F78u; }
        if (ctx->pc != 0x101F78u) { return; }
    }
    ctx->pc = 0x101F78u;
label_101f78:
    // 0x101f78: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x101f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x101f7c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x101f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x101f80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x101f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x101f84: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x101f84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_101f88:
    // 0x101f88: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x101f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x101f8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x101f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101f90: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x101f90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x101f94: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x101f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x101f98: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x101F98u;
    {
        const bool branch_taken_0x101f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x101f98) {
            ctx->pc = 0x101F6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101f6c;
        }
    }
    ctx->pc = 0x101FA0u;
    // 0x101fa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x101fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101fa4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101fa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101fac: 0x3e00008  jr          $ra
    ctx->pc = 0x101FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101FACu;
            // 0x101fb0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101FB4u;
}
