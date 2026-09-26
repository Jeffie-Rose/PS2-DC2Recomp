#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadBGNPCModel__15CMenuChrCngMenuFi
// Address: 0x2b0e00 - 0x2b0fe0
void LoadBGNPCModel__15CMenuChrCngMenuFi_0x2b0e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadBGNPCModel__15CMenuChrCngMenuFi_0x2b0e00");
#endif

    switch (ctx->pc) {
        case 0x2b0e00u: goto label_2b0e00;
        case 0x2b0e04u: goto label_2b0e04;
        case 0x2b0e08u: goto label_2b0e08;
        case 0x2b0e0cu: goto label_2b0e0c;
        case 0x2b0e10u: goto label_2b0e10;
        case 0x2b0e14u: goto label_2b0e14;
        case 0x2b0e18u: goto label_2b0e18;
        case 0x2b0e1cu: goto label_2b0e1c;
        case 0x2b0e20u: goto label_2b0e20;
        case 0x2b0e24u: goto label_2b0e24;
        case 0x2b0e28u: goto label_2b0e28;
        case 0x2b0e2cu: goto label_2b0e2c;
        case 0x2b0e30u: goto label_2b0e30;
        case 0x2b0e34u: goto label_2b0e34;
        case 0x2b0e38u: goto label_2b0e38;
        case 0x2b0e3cu: goto label_2b0e3c;
        case 0x2b0e40u: goto label_2b0e40;
        case 0x2b0e44u: goto label_2b0e44;
        case 0x2b0e48u: goto label_2b0e48;
        case 0x2b0e4cu: goto label_2b0e4c;
        case 0x2b0e50u: goto label_2b0e50;
        case 0x2b0e54u: goto label_2b0e54;
        case 0x2b0e58u: goto label_2b0e58;
        case 0x2b0e5cu: goto label_2b0e5c;
        case 0x2b0e60u: goto label_2b0e60;
        case 0x2b0e64u: goto label_2b0e64;
        case 0x2b0e68u: goto label_2b0e68;
        case 0x2b0e6cu: goto label_2b0e6c;
        case 0x2b0e70u: goto label_2b0e70;
        case 0x2b0e74u: goto label_2b0e74;
        case 0x2b0e78u: goto label_2b0e78;
        case 0x2b0e7cu: goto label_2b0e7c;
        case 0x2b0e80u: goto label_2b0e80;
        case 0x2b0e84u: goto label_2b0e84;
        case 0x2b0e88u: goto label_2b0e88;
        case 0x2b0e8cu: goto label_2b0e8c;
        case 0x2b0e90u: goto label_2b0e90;
        case 0x2b0e94u: goto label_2b0e94;
        case 0x2b0e98u: goto label_2b0e98;
        case 0x2b0e9cu: goto label_2b0e9c;
        case 0x2b0ea0u: goto label_2b0ea0;
        case 0x2b0ea4u: goto label_2b0ea4;
        case 0x2b0ea8u: goto label_2b0ea8;
        case 0x2b0eacu: goto label_2b0eac;
        case 0x2b0eb0u: goto label_2b0eb0;
        case 0x2b0eb4u: goto label_2b0eb4;
        case 0x2b0eb8u: goto label_2b0eb8;
        case 0x2b0ebcu: goto label_2b0ebc;
        case 0x2b0ec0u: goto label_2b0ec0;
        case 0x2b0ec4u: goto label_2b0ec4;
        case 0x2b0ec8u: goto label_2b0ec8;
        case 0x2b0eccu: goto label_2b0ecc;
        case 0x2b0ed0u: goto label_2b0ed0;
        case 0x2b0ed4u: goto label_2b0ed4;
        case 0x2b0ed8u: goto label_2b0ed8;
        case 0x2b0edcu: goto label_2b0edc;
        case 0x2b0ee0u: goto label_2b0ee0;
        case 0x2b0ee4u: goto label_2b0ee4;
        case 0x2b0ee8u: goto label_2b0ee8;
        case 0x2b0eecu: goto label_2b0eec;
        case 0x2b0ef0u: goto label_2b0ef0;
        case 0x2b0ef4u: goto label_2b0ef4;
        case 0x2b0ef8u: goto label_2b0ef8;
        case 0x2b0efcu: goto label_2b0efc;
        case 0x2b0f00u: goto label_2b0f00;
        case 0x2b0f04u: goto label_2b0f04;
        case 0x2b0f08u: goto label_2b0f08;
        case 0x2b0f0cu: goto label_2b0f0c;
        case 0x2b0f10u: goto label_2b0f10;
        case 0x2b0f14u: goto label_2b0f14;
        case 0x2b0f18u: goto label_2b0f18;
        case 0x2b0f1cu: goto label_2b0f1c;
        case 0x2b0f20u: goto label_2b0f20;
        case 0x2b0f24u: goto label_2b0f24;
        case 0x2b0f28u: goto label_2b0f28;
        case 0x2b0f2cu: goto label_2b0f2c;
        case 0x2b0f30u: goto label_2b0f30;
        case 0x2b0f34u: goto label_2b0f34;
        case 0x2b0f38u: goto label_2b0f38;
        case 0x2b0f3cu: goto label_2b0f3c;
        case 0x2b0f40u: goto label_2b0f40;
        case 0x2b0f44u: goto label_2b0f44;
        case 0x2b0f48u: goto label_2b0f48;
        case 0x2b0f4cu: goto label_2b0f4c;
        case 0x2b0f50u: goto label_2b0f50;
        case 0x2b0f54u: goto label_2b0f54;
        case 0x2b0f58u: goto label_2b0f58;
        case 0x2b0f5cu: goto label_2b0f5c;
        case 0x2b0f60u: goto label_2b0f60;
        case 0x2b0f64u: goto label_2b0f64;
        case 0x2b0f68u: goto label_2b0f68;
        case 0x2b0f6cu: goto label_2b0f6c;
        case 0x2b0f70u: goto label_2b0f70;
        case 0x2b0f74u: goto label_2b0f74;
        case 0x2b0f78u: goto label_2b0f78;
        case 0x2b0f7cu: goto label_2b0f7c;
        case 0x2b0f80u: goto label_2b0f80;
        case 0x2b0f84u: goto label_2b0f84;
        case 0x2b0f88u: goto label_2b0f88;
        case 0x2b0f8cu: goto label_2b0f8c;
        case 0x2b0f90u: goto label_2b0f90;
        case 0x2b0f94u: goto label_2b0f94;
        case 0x2b0f98u: goto label_2b0f98;
        case 0x2b0f9cu: goto label_2b0f9c;
        case 0x2b0fa0u: goto label_2b0fa0;
        case 0x2b0fa4u: goto label_2b0fa4;
        case 0x2b0fa8u: goto label_2b0fa8;
        case 0x2b0facu: goto label_2b0fac;
        case 0x2b0fb0u: goto label_2b0fb0;
        case 0x2b0fb4u: goto label_2b0fb4;
        case 0x2b0fb8u: goto label_2b0fb8;
        case 0x2b0fbcu: goto label_2b0fbc;
        case 0x2b0fc0u: goto label_2b0fc0;
        case 0x2b0fc4u: goto label_2b0fc4;
        case 0x2b0fc8u: goto label_2b0fc8;
        case 0x2b0fccu: goto label_2b0fcc;
        case 0x2b0fd0u: goto label_2b0fd0;
        case 0x2b0fd4u: goto label_2b0fd4;
        case 0x2b0fd8u: goto label_2b0fd8;
        case 0x2b0fdcu: goto label_2b0fdc;
        default: break;
    }

    ctx->pc = 0x2b0e00u;

label_2b0e00:
    // 0x2b0e00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b0e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2b0e04:
    // 0x2b0e04: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b0e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b0e08:
    // 0x2b0e08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2b0e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2b0e0c:
    // 0x2b0e0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b0e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2b0e10:
    // 0x2b0e10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b0e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2b0e14:
    // 0x2b0e14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b0e14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b0e18:
    // 0x2b0e18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b0e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b0e1c:
    // 0x2b0e1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b0e1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b0e20:
    // 0x2b0e20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b0e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b0e24:
    // 0x2b0e24: 0x24050105  addiu       $a1, $zero, 0x105
    ctx->pc = 0x2b0e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_2b0e28:
    // 0x2b0e28: 0x3c1001ed  lui         $s0, 0x1ED
    ctx->pc = 0x2b0e28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)493 << 16));
label_2b0e2c:
    // 0x2b0e2c: 0xac20dc14  sw          $zero, -0x23EC($at)
    ctx->pc = 0x2b0e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958100), GPR_U32(ctx, 0));
label_2b0e30:
    // 0x2b0e30: 0x2610dbf0  addiu       $s0, $s0, -0x2410
    ctx->pc = 0x2b0e30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958064));
label_2b0e34:
    // 0x2b0e34: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b0e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2b0e38:
    // 0x2b0e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b0e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b0e3c:
    // 0x2b0e3c: 0xc04e748  jal         func_139D20
label_2b0e40:
    if (ctx->pc == 0x2B0E40u) {
        ctx->pc = 0x2B0E40u;
            // 0x2b0e40: 0xac20dc0c  sw          $zero, -0x23F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
        ctx->pc = 0x2B0E44u;
        goto label_2b0e44;
    }
    ctx->pc = 0x2B0E3Cu;
    SET_GPR_U32(ctx, 31, 0x2B0E44u);
    ctx->pc = 0x2B0E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0E3Cu;
            // 0x2b0e40: 0xac20dc0c  sw          $zero, -0x23F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0E44u; }
        if (ctx->pc != 0x2B0E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0E44u; }
        if (ctx->pc != 0x2B0E44u) { return; }
    }
    ctx->pc = 0x2B0E44u;
label_2b0e44:
    // 0x2b0e44: 0x24041030  addiu       $a0, $zero, 0x1030
    ctx->pc = 0x2b0e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4144));
label_2b0e48:
    // 0x2b0e48: 0xc04e638  jal         func_1398E0
label_2b0e4c:
    if (ctx->pc == 0x2B0E4Cu) {
        ctx->pc = 0x2B0E4Cu;
            // 0x2b0e4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E50u;
        goto label_2b0e50;
    }
    ctx->pc = 0x2B0E48u;
    SET_GPR_U32(ctx, 31, 0x2B0E50u);
    ctx->pc = 0x2B0E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0E48u;
            // 0x2b0e4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0E50u; }
        if (ctx->pc != 0x2B0E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0E50u; }
        if (ctx->pc != 0x2B0E50u) { return; }
    }
    ctx->pc = 0x2B0E50u;
label_2b0e50:
    // 0x2b0e50: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_2b0e54:
    if (ctx->pc == 0x2B0E54u) {
        ctx->pc = 0x2B0E54u;
            // 0x2b0e54: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E58u;
        goto label_2b0e58;
    }
    ctx->pc = 0x2B0E50u;
    {
        const bool branch_taken_0x2b0e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0E50u;
            // 0x2b0e54: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e50) {
            ctx->pc = 0x2B0EF8u;
            goto label_2b0ef8;
        }
    }
    ctx->pc = 0x2B0E58u;
label_2b0e58:
    // 0x2b0e58: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b0e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2b0e5c:
    // 0x2b0e5c: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2b0e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2b0e60:
    // 0x2b0e60: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b0e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b0e64:
    // 0x2b0e64: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2b0e64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b0e68:
    // 0x2b0e68: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2b0e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2b0e6c:
    // 0x2b0e6c: 0x320f809  jalr        $t9
label_2b0e70:
    if (ctx->pc == 0x2B0E70u) {
        ctx->pc = 0x2B0E70u;
            // 0x2b0e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E74u;
        goto label_2b0e74;
    }
    ctx->pc = 0x2B0E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B0E74u);
        ctx->pc = 0x2B0E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0E6Cu;
            // 0x2b0e70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B0E74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B0E74u; }
            if (ctx->pc != 0x2B0E74u) { return; }
        }
        }
    }
    ctx->pc = 0x2B0E74u;
label_2b0e74:
    // 0x2b0e74: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b0e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2b0e78:
    // 0x2b0e78: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2b0e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2b0e7c:
    // 0x2b0e7c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b0e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b0e80:
    // 0x2b0e80: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2b0e80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b0e84:
    // 0x2b0e84: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2b0e84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2b0e88:
    // 0x2b0e88: 0x320f809  jalr        $t9
label_2b0e8c:
    if (ctx->pc == 0x2B0E8Cu) {
        ctx->pc = 0x2B0E8Cu;
            // 0x2b0e8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E90u;
        goto label_2b0e90;
    }
    ctx->pc = 0x2B0E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B0E90u);
        ctx->pc = 0x2B0E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0E88u;
            // 0x2b0e8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B0E90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B0E90u; }
            if (ctx->pc != 0x2B0E90u) { return; }
        }
        }
    }
    ctx->pc = 0x2B0E90u;
label_2b0e90:
    // 0x2b0e90: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b0e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2b0e94:
    // 0x2b0e94: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2b0e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2b0e98:
    // 0x2b0e98: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b0e98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b0e9c:
    // 0x2b0e9c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2b0e9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b0ea0:
    // 0x2b0ea0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2b0ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2b0ea4:
    // 0x2b0ea4: 0x320f809  jalr        $t9
label_2b0ea8:
    if (ctx->pc == 0x2B0EA8u) {
        ctx->pc = 0x2B0EA8u;
            // 0x2b0ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0EACu;
        goto label_2b0eac;
    }
    ctx->pc = 0x2B0EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B0EACu);
        ctx->pc = 0x2B0EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0EA4u;
            // 0x2b0ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B0EACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B0EACu; }
            if (ctx->pc != 0x2B0EACu) { return; }
        }
        }
    }
    ctx->pc = 0x2B0EACu;
label_2b0eac:
    // 0x2b0eac: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b0eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2b0eb0:
    // 0x2b0eb0: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2b0eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2b0eb4:
    // 0x2b0eb4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b0eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b0eb8:
    // 0x2b0eb8: 0xae20035c  sw          $zero, 0x35C($s1)
    ctx->pc = 0x2b0eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
label_2b0ebc:
    // 0x2b0ebc: 0xae200364  sw          $zero, 0x364($s1)
    ctx->pc = 0x2b0ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 0));
label_2b0ec0:
    // 0x2b0ec0: 0xae200360  sw          $zero, 0x360($s1)
    ctx->pc = 0x2b0ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 0));
label_2b0ec4:
    // 0x2b0ec4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2b0ec4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b0ec8:
    // 0x2b0ec8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2b0ec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2b0ecc:
    // 0x2b0ecc: 0x320f809  jalr        $t9
label_2b0ed0:
    if (ctx->pc == 0x2B0ED0u) {
        ctx->pc = 0x2B0ED0u;
            // 0x2b0ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0ED4u;
        goto label_2b0ed4;
    }
    ctx->pc = 0x2B0ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B0ED4u);
        ctx->pc = 0x2B0ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0ECCu;
            // 0x2b0ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B0ED4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B0ED4u; }
            if (ctx->pc != 0x2B0ED4u) { return; }
        }
        }
    }
    ctx->pc = 0x2B0ED4u;
label_2b0ed4:
    // 0x2b0ed4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2b0ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2b0ed8:
    // 0x2b0ed8: 0x262406bc  addiu       $a0, $s1, 0x6BC
    ctx->pc = 0x2b0ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1724));
label_2b0edc:
    // 0x2b0edc: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x2b0edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_2b0ee0:
    // 0x2b0ee0: 0xc061b34  jal         func_186CD0
label_2b0ee4:
    if (ctx->pc == 0x2B0EE4u) {
        ctx->pc = 0x2B0EE4u;
            // 0x2b0ee4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2B0EE8u;
        goto label_2b0ee8;
    }
    ctx->pc = 0x2B0EE0u;
    SET_GPR_U32(ctx, 31, 0x2B0EE8u);
    ctx->pc = 0x2B0EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0EE0u;
            // 0x2b0ee4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0EE8u; }
        if (ctx->pc != 0x2B0EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0EE8u; }
        if (ctx->pc != 0x2B0EE8u) { return; }
    }
    ctx->pc = 0x2B0EE8u;
label_2b0ee8:
    // 0x2b0ee8: 0x26240910  addiu       $a0, $s1, 0x910
    ctx->pc = 0x2b0ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2320));
label_2b0eec:
    // 0x2b0eec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b0eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0ef0:
    // 0x2b0ef0: 0xc049c86  jal         func_127218
label_2b0ef4:
    if (ctx->pc == 0x2B0EF4u) {
        ctx->pc = 0x2B0EF4u;
            // 0x2b0ef4: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x2B0EF8u;
        goto label_2b0ef8;
    }
    ctx->pc = 0x2B0EF0u;
    SET_GPR_U32(ctx, 31, 0x2B0EF8u);
    ctx->pc = 0x2B0EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0EF0u;
            // 0x2b0ef4: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0EF8u; }
        if (ctx->pc != 0x2B0EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0EF8u; }
        if (ctx->pc != 0x2B0EF8u) { return; }
    }
    ctx->pc = 0x2B0EF8u;
label_2b0ef8:
    // 0x2b0ef8: 0xae71020c  sw          $s1, 0x20C($s3)
    ctx->pc = 0x2b0ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 524), GPR_U32(ctx, 17));
label_2b0efc:
    // 0x2b0efc: 0x8e64020c  lw          $a0, 0x20C($s3)
    ctx->pc = 0x2b0efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
label_2b0f00:
    // 0x2b0f00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b0f00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b0f04:
    // 0x2b0f04: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2b0f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2b0f08:
    // 0x2b0f08: 0x320f809  jalr        $t9
label_2b0f0c:
    if (ctx->pc == 0x2B0F0Cu) {
        ctx->pc = 0x2B0F0Cu;
            // 0x2b0f0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F10u;
        goto label_2b0f10;
    }
    ctx->pc = 0x2B0F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B0F10u);
        ctx->pc = 0x2B0F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0F08u;
            // 0x2b0f0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B0F10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B0F10u; }
            if (ctx->pc != 0x2B0F10u) { return; }
        }
        }
    }
    ctx->pc = 0x2B0F10u;
label_2b0f10:
    // 0x2b0f10: 0xc04e780  jal         func_139E00
label_2b0f14:
    if (ctx->pc == 0x2B0F14u) {
        ctx->pc = 0x2B0F14u;
            // 0x2b0f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F18u;
        goto label_2b0f18;
    }
    ctx->pc = 0x2B0F10u;
    SET_GPR_U32(ctx, 31, 0x2B0F18u);
    ctx->pc = 0x2B0F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0F10u;
            // 0x2b0f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0F18u; }
        if (ctx->pc != 0x2B0F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0F18u; }
        if (ctx->pc != 0x2B0F18u) { return; }
    }
    ctx->pc = 0x2B0F18u;
label_2b0f18:
    // 0x2b0f18: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2b0f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2b0f1c:
    // 0x2b0f1c: 0x3406cd00  ori         $a2, $zero, 0xCD00
    ctx->pc = 0x2b0f1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52480);
label_2b0f20:
    // 0x2b0f20: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2b0f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2b0f24:
    // 0x2b0f24: 0x266401c4  addiu       $a0, $s3, 0x1C4
    ctx->pc = 0x2b0f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 452));
label_2b0f28:
    // 0x2b0f28: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b0f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2b0f2c:
    // 0x2b0f2c: 0xc04e79c  jal         func_139E70
label_2b0f30:
    if (ctx->pc == 0x2B0F30u) {
        ctx->pc = 0x2B0F30u;
            // 0x2b0f30: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2B0F34u;
        goto label_2b0f34;
    }
    ctx->pc = 0x2B0F2Cu;
    SET_GPR_U32(ctx, 31, 0x2B0F34u);
    ctx->pc = 0x2B0F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0F2Cu;
            // 0x2b0f30: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0F34u; }
        if (ctx->pc != 0x2B0F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0F34u; }
        if (ctx->pc != 0x2B0F34u) { return; }
    }
    ctx->pc = 0x2B0F34u;
label_2b0f34:
    // 0x2b0f34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b0f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b0f38:
    // 0x2b0f38: 0xc04e748  jal         func_139D20
label_2b0f3c:
    if (ctx->pc == 0x2B0F3Cu) {
        ctx->pc = 0x2B0F3Cu;
            // 0x2b0f3c: 0x3405cd00  ori         $a1, $zero, 0xCD00 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52480);
        ctx->pc = 0x2B0F40u;
        goto label_2b0f40;
    }
    ctx->pc = 0x2B0F38u;
    SET_GPR_U32(ctx, 31, 0x2B0F40u);
    ctx->pc = 0x2B0F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0F38u;
            // 0x2b0f3c: 0x3405cd00  ori         $a1, $zero, 0xCD00 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52480);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0F40u; }
        if (ctx->pc != 0x2B0F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0F40u; }
        if (ctx->pc != 0x2B0F40u) { return; }
    }
    ctx->pc = 0x2B0F40u;
label_2b0f40:
    // 0x2b0f40: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2b0f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2b0f44:
    // 0x2b0f44: 0x26640194  addiu       $a0, $s3, 0x194
    ctx->pc = 0x2b0f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 404));
label_2b0f48:
    // 0x2b0f48: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x2b0f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2b0f4c:
    // 0x2b0f4c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2b0f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2b0f50:
    // 0x2b0f50: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2b0f50u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2b0f54:
    // 0x2b0f54: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2b0f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2b0f58:
    // 0x2b0f58: 0xc04e79c  jal         func_139E70
label_2b0f5c:
    if (ctx->pc == 0x2B0F5Cu) {
        ctx->pc = 0x2B0F5Cu;
            // 0x2b0f5c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2B0F60u;
        goto label_2b0f60;
    }
    ctx->pc = 0x2B0F58u;
    SET_GPR_U32(ctx, 31, 0x2B0F60u);
    ctx->pc = 0x2B0F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0F58u;
            // 0x2b0f5c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0F60u; }
        if (ctx->pc != 0x2B0F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0F60u; }
        if (ctx->pc != 0x2B0F60u) { return; }
    }
    ctx->pc = 0x2B0F60u;
label_2b0f60:
    // 0x2b0f60: 0xa2600208  sb          $zero, 0x208($s3)
    ctx->pc = 0x2b0f60u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 520), (uint8_t)GPR_U32(ctx, 0));
label_2b0f64:
    // 0x2b0f64: 0xa2600209  sb          $zero, 0x209($s3)
    ctx->pc = 0x2b0f64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 521), (uint8_t)GPR_U32(ctx, 0));
label_2b0f68:
    // 0x2b0f68: 0xae600210  sw          $zero, 0x210($s3)
    ctx->pc = 0x2b0f68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 528), GPR_U32(ctx, 0));
label_2b0f6c:
    // 0x2b0f6c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2b0f70:
    if (ctx->pc == 0x2B0F70u) {
        ctx->pc = 0x2B0F70u;
            // 0x2b0f70: 0xae600214  sw          $zero, 0x214($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 532), GPR_U32(ctx, 0));
        ctx->pc = 0x2B0F74u;
        goto label_2b0f74;
    }
    ctx->pc = 0x2B0F6Cu;
    {
        const bool branch_taken_0x2b0f6c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0F6Cu;
            // 0x2b0f70: 0xae600214  sw          $zero, 0x214($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 532), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f6c) {
            ctx->pc = 0x2B0F84u;
            goto label_2b0f84;
        }
    }
    ctx->pc = 0x2B0F74u;
label_2b0f74:
    // 0x2b0f74: 0xc0523b8  jal         func_148EE0
label_2b0f78:
    if (ctx->pc == 0x2B0F78u) {
        ctx->pc = 0x2B0F7Cu;
        goto label_2b0f7c;
    }
    ctx->pc = 0x2B0F74u;
    SET_GPR_U32(ctx, 31, 0x2B0F7Cu);
    ctx->pc = 0x148EE0u;
    if (runtime->hasFunction(0x148EE0u)) {
        auto targetFn = runtime->lookupFunction(0x148EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0F7Cu; }
        if (ctx->pc != 0x2B0F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BreakReadBG__Fv_0x148ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0F7Cu; }
        if (ctx->pc != 0x2B0F7Cu) { return; }
    }
    ctx->pc = 0x2B0F7Cu;
label_2b0f7c:
    // 0x2b0f7c: 0xc052330  jal         func_148CC0
label_2b0f80:
    if (ctx->pc == 0x2B0F80u) {
        ctx->pc = 0x2B0F84u;
        goto label_2b0f84;
    }
    ctx->pc = 0x2B0F7Cu;
    SET_GPR_U32(ctx, 31, 0x2B0F84u);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0F84u; }
        if (ctx->pc != 0x2B0F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0F84u; }
        if (ctx->pc != 0x2B0F84u) { return; }
    }
    ctx->pc = 0x2B0F84u;
label_2b0f84:
    // 0x2b0f84: 0x86650202  lh          $a1, 0x202($s3)
    ctx->pc = 0x2b0f84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 514)));
label_2b0f88:
    // 0x2b0f88: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2b0f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b0f8c:
    // 0x2b0f8c: 0xc0af0d4  jal         func_2BC350
label_2b0f90:
    if (ctx->pc == 0x2B0F90u) {
        ctx->pc = 0x2B0F90u;
            // 0x2b0f90: 0x26640194  addiu       $a0, $s3, 0x194 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 404));
        ctx->pc = 0x2B0F94u;
        goto label_2b0f94;
    }
    ctx->pc = 0x2B0F8Cu;
    SET_GPR_U32(ctx, 31, 0x2B0F94u);
    ctx->pc = 0x2B0F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0F8Cu;
            // 0x2b0f90: 0x26640194  addiu       $a0, $s3, 0x194 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 404));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BC350u;
    if (runtime->hasFunction(0x2BC350u)) {
        auto targetFn = runtime->lookupFunction(0x2BC350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0F94u; }
        if (ctx->pc != 0x2B0F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuNPCModelLoad__FP9mgCMemoryii_0x2bc350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0F94u; }
        if (ctx->pc != 0x2B0F94u) { return; }
    }
    ctx->pc = 0x2B0F94u;
label_2b0f94:
    // 0x2b0f94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b0f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0f98:
    // 0x2b0f98: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
label_2b0f9c:
    if (ctx->pc == 0x2B0F9Cu) {
        ctx->pc = 0x2B0F9Cu;
            // 0x2b0f9c: 0xae600218  sw          $zero, 0x218($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 536), GPR_U32(ctx, 0));
        ctx->pc = 0x2B0FA0u;
        goto label_2b0fa0;
    }
    ctx->pc = 0x2B0F98u;
    {
        const bool branch_taken_0x2b0f98 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2B0F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0F98u;
            // 0x2b0f9c: 0xae600218  sw          $zero, 0x218($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f98) {
            ctx->pc = 0x2B0FACu;
            goto label_2b0fac;
        }
    }
    ctx->pc = 0x2B0FA0u;
label_2b0fa0:
    // 0x2b0fa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0fa4:
    // 0x2b0fa4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b0fa8:
    if (ctx->pc == 0x2B0FA8u) {
        ctx->pc = 0x2B0FA8u;
            // 0x2b0fa8: 0xa2620208  sb          $v0, 0x208($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 520), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B0FACu;
        goto label_2b0fac;
    }
    ctx->pc = 0x2B0FA4u;
    {
        const bool branch_taken_0x2b0fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0FA4u;
            // 0x2b0fa8: 0xa2620208  sb          $v0, 0x208($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 520), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0fa4) {
            ctx->pc = 0x2B0FB0u;
            goto label_2b0fb0;
        }
    }
    ctx->pc = 0x2B0FACu;
label_2b0fac:
    // 0x2b0fac: 0xae60020c  sw          $zero, 0x20C($s3)
    ctx->pc = 0x2b0facu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 524), GPR_U32(ctx, 0));
label_2b0fb0:
    // 0x2b0fb0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b0fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b0fb4:
    // 0x2b0fb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b0fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b0fb8:
    // 0x2b0fb8: 0xc08e7cc  jal         func_239F30
label_2b0fbc:
    if (ctx->pc == 0x2B0FBCu) {
        ctx->pc = 0x2B0FBCu;
            // 0x2b0fbc: 0x24a5eb68  addiu       $a1, $a1, -0x1498 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962024));
        ctx->pc = 0x2B0FC0u;
        goto label_2b0fc0;
    }
    ctx->pc = 0x2B0FB8u;
    SET_GPR_U32(ctx, 31, 0x2B0FC0u);
    ctx->pc = 0x2B0FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0FB8u;
            // 0x2b0fbc: 0x24a5eb68  addiu       $a1, $a1, -0x1498 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0FC0u; }
        if (ctx->pc != 0x2B0FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B0FC0u; }
        if (ctx->pc != 0x2B0FC0u) { return; }
    }
    ctx->pc = 0x2B0FC0u;
label_2b0fc0:
    // 0x2b0fc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b0fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b0fc4:
    // 0x2b0fc4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2b0fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2b0fc8:
    // 0x2b0fc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b0fc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b0fcc:
    // 0x2b0fcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b0fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b0fd0:
    // 0x2b0fd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b0fd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b0fd4:
    // 0x2b0fd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b0fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b0fd8:
    // 0x2b0fd8: 0x3e00008  jr          $ra
label_2b0fdc:
    if (ctx->pc == 0x2B0FDCu) {
        ctx->pc = 0x2B0FDCu;
            // 0x2b0fdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2B0FE0u;
        goto label_fallthrough_0x2b0fd8;
    }
    ctx->pc = 0x2B0FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B0FD8u;
            // 0x2b0fdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b0fd8:
    ctx->pc = 0x2B0FE0u;
}
