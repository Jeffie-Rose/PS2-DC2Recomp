#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_NEXT_POS__FP12RS_STACKDATAi
// Address: 0x1e4130 - 0x1e4230
void ps2__SET_NEXT_POS__FP12RS_STACKDATAi_0x1e4130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_NEXT_POS__FP12RS_STACKDATAi_0x1e4130");
#endif

    switch (ctx->pc) {
        case 0x1e4130u: goto label_1e4130;
        case 0x1e4134u: goto label_1e4134;
        case 0x1e4138u: goto label_1e4138;
        case 0x1e413cu: goto label_1e413c;
        case 0x1e4140u: goto label_1e4140;
        case 0x1e4144u: goto label_1e4144;
        case 0x1e4148u: goto label_1e4148;
        case 0x1e414cu: goto label_1e414c;
        case 0x1e4150u: goto label_1e4150;
        case 0x1e4154u: goto label_1e4154;
        case 0x1e4158u: goto label_1e4158;
        case 0x1e415cu: goto label_1e415c;
        case 0x1e4160u: goto label_1e4160;
        case 0x1e4164u: goto label_1e4164;
        case 0x1e4168u: goto label_1e4168;
        case 0x1e416cu: goto label_1e416c;
        case 0x1e4170u: goto label_1e4170;
        case 0x1e4174u: goto label_1e4174;
        case 0x1e4178u: goto label_1e4178;
        case 0x1e417cu: goto label_1e417c;
        case 0x1e4180u: goto label_1e4180;
        case 0x1e4184u: goto label_1e4184;
        case 0x1e4188u: goto label_1e4188;
        case 0x1e418cu: goto label_1e418c;
        case 0x1e4190u: goto label_1e4190;
        case 0x1e4194u: goto label_1e4194;
        case 0x1e4198u: goto label_1e4198;
        case 0x1e419cu: goto label_1e419c;
        case 0x1e41a0u: goto label_1e41a0;
        case 0x1e41a4u: goto label_1e41a4;
        case 0x1e41a8u: goto label_1e41a8;
        case 0x1e41acu: goto label_1e41ac;
        case 0x1e41b0u: goto label_1e41b0;
        case 0x1e41b4u: goto label_1e41b4;
        case 0x1e41b8u: goto label_1e41b8;
        case 0x1e41bcu: goto label_1e41bc;
        case 0x1e41c0u: goto label_1e41c0;
        case 0x1e41c4u: goto label_1e41c4;
        case 0x1e41c8u: goto label_1e41c8;
        case 0x1e41ccu: goto label_1e41cc;
        case 0x1e41d0u: goto label_1e41d0;
        case 0x1e41d4u: goto label_1e41d4;
        case 0x1e41d8u: goto label_1e41d8;
        case 0x1e41dcu: goto label_1e41dc;
        case 0x1e41e0u: goto label_1e41e0;
        case 0x1e41e4u: goto label_1e41e4;
        case 0x1e41e8u: goto label_1e41e8;
        case 0x1e41ecu: goto label_1e41ec;
        case 0x1e41f0u: goto label_1e41f0;
        case 0x1e41f4u: goto label_1e41f4;
        case 0x1e41f8u: goto label_1e41f8;
        case 0x1e41fcu: goto label_1e41fc;
        case 0x1e4200u: goto label_1e4200;
        case 0x1e4204u: goto label_1e4204;
        case 0x1e4208u: goto label_1e4208;
        case 0x1e420cu: goto label_1e420c;
        case 0x1e4210u: goto label_1e4210;
        case 0x1e4214u: goto label_1e4214;
        case 0x1e4218u: goto label_1e4218;
        case 0x1e421cu: goto label_1e421c;
        case 0x1e4220u: goto label_1e4220;
        case 0x1e4224u: goto label_1e4224;
        case 0x1e4228u: goto label_1e4228;
        case 0x1e422cu: goto label_1e422c;
        default: break;
    }

    ctx->pc = 0x1e4130u;

label_1e4130:
    // 0x1e4130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e4130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e4134:
    // 0x1e4134: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x1e4134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_1e4138:
    // 0x1e4138: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1e413c:
    if (ctx->pc == 0x1E413Cu) {
        ctx->pc = 0x1E413Cu;
            // 0x1e413c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1E4140u;
        goto label_1e4140;
    }
    ctx->pc = 0x1E4138u;
    {
        const bool branch_taken_0x1e4138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E413Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4138u;
            // 0x1e413c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4138) {
            ctx->pc = 0x1E414Cu;
            goto label_1e414c;
        }
    }
    ctx->pc = 0x1E4140u;
label_1e4140:
    // 0x1e4140: 0x28a10006  slti        $at, $a1, 0x6
    ctx->pc = 0x1e4140u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
label_1e4144:
    // 0x1e4144: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1e4148:
    if (ctx->pc == 0x1E4148u) {
        ctx->pc = 0x1E4148u;
            // 0x1e4148: 0x24870008  addiu       $a3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E414Cu;
        goto label_1e414c;
    }
    ctx->pc = 0x1E4144u;
    {
        const bool branch_taken_0x1e4144 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4144u;
            // 0x1e4148: 0x24870008  addiu       $a3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4144) {
            ctx->pc = 0x1E4154u;
            goto label_1e4154;
        }
    }
    ctx->pc = 0x1E414Cu;
label_1e414c:
    // 0x1e414c: 0x10000035  b           . + 4 + (0x35 << 2)
label_1e4150:
    if (ctx->pc == 0x1E4150u) {
        ctx->pc = 0x1E4150u;
            // 0x1e4150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E4154u;
        goto label_1e4154;
    }
    ctx->pc = 0x1E414Cu;
    {
        const bool branch_taken_0x1e414c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E414Cu;
            // 0x1e4150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e414c) {
            ctx->pc = 0x1E4224u;
            goto label_1e4224;
        }
    }
    ctx->pc = 0x1E4154u;
label_1e4154:
    // 0x1e4154: 0xc0781ac  jal         func_1E06B0
label_1e4158:
    if (ctx->pc == 0x1E4158u) {
        ctx->pc = 0x1E415Cu;
        goto label_1e415c;
    }
    ctx->pc = 0x1E4154u;
    SET_GPR_U32(ctx, 31, 0x1E415Cu);
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E415Cu; }
        if (ctx->pc != 0x1E415Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E415Cu; }
        if (ctx->pc != 0x1E415Cu) { return; }
    }
    ctx->pc = 0x1E415Cu;
label_1e415c:
    // 0x1e415c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1e415cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e4160:
    // 0x1e4160: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1e4160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1e4164:
    // 0x1e4164: 0xc0781ac  jal         func_1E06B0
label_1e4168:
    if (ctx->pc == 0x1E4168u) {
        ctx->pc = 0x1E4168u;
            // 0x1e4168: 0x24870008  addiu       $a3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E416Cu;
        goto label_1e416c;
    }
    ctx->pc = 0x1E4164u;
    SET_GPR_U32(ctx, 31, 0x1E416Cu);
    ctx->pc = 0x1E4168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4164u;
            // 0x1e4168: 0x24870008  addiu       $a3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E416Cu; }
        if (ctx->pc != 0x1E416Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E416Cu; }
        if (ctx->pc != 0x1E416Cu) { return; }
    }
    ctx->pc = 0x1E416Cu;
label_1e416c:
    // 0x1e416c: 0x27a30014  addiu       $v1, $sp, 0x14
    ctx->pc = 0x1e416cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_1e4170:
    // 0x1e4170: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1e4170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e4174:
    // 0x1e4174: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1e4174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1e4178:
    // 0x1e4178: 0xc0781ac  jal         func_1E06B0
label_1e417c:
    if (ctx->pc == 0x1E417Cu) {
        ctx->pc = 0x1E417Cu;
            // 0x1e417c: 0x24870008  addiu       $a3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E4180u;
        goto label_1e4180;
    }
    ctx->pc = 0x1E4178u;
    SET_GPR_U32(ctx, 31, 0x1E4180u);
    ctx->pc = 0x1E417Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4178u;
            // 0x1e417c: 0x24870008  addiu       $a3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4180u; }
        if (ctx->pc != 0x1E4180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4180u; }
        if (ctx->pc != 0x1E4180u) { return; }
    }
    ctx->pc = 0x1E4180u;
label_1e4180:
    // 0x1e4180: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x1e4180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_1e4184:
    // 0x1e4184: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1e4184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e4188:
    // 0x1e4188: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1e4188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_1e418c:
    // 0x1e418c: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x1e418cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1e4190:
    // 0x1e4190: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1e4190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e4194:
    // 0x1e4194: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e4194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e4198:
    // 0x1e4198: 0xe4401470  swc1        $f0, 0x1470($v0)
    ctx->pc = 0x1e4198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5232), bits); }
label_1e419c:
    // 0x1e419c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e419cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e41a0:
    // 0x1e41a0: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e41a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e41a4:
    // 0x1e41a4: 0xe4401474  swc1        $f0, 0x1474($v0)
    ctx->pc = 0x1e41a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5236), bits); }
label_1e41a8:
    // 0x1e41a8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1e41a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e41ac:
    // 0x1e41ac: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e41acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e41b0:
    // 0x1e41b0: 0xc0781ac  jal         func_1E06B0
label_1e41b4:
    if (ctx->pc == 0x1E41B4u) {
        ctx->pc = 0x1E41B4u;
            // 0x1e41b4: 0xe4401478  swc1        $f0, 0x1478($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5240), bits); }
        ctx->pc = 0x1E41B8u;
        goto label_1e41b8;
    }
    ctx->pc = 0x1E41B0u;
    SET_GPR_U32(ctx, 31, 0x1E41B8u);
    ctx->pc = 0x1E41B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E41B0u;
            // 0x1e41b4: 0xe4401478  swc1        $f0, 0x1478($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5240), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E41B8u; }
        if (ctx->pc != 0x1E41B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E41B8u; }
        if (ctx->pc != 0x1E41B8u) { return; }
    }
    ctx->pc = 0x1E41B8u;
label_1e41b8:
    // 0x1e41b8: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e41b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e41bc:
    // 0x1e41bc: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x1e41bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
label_1e41c0:
    // 0x1e41c0: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x1e41c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
label_1e41c4:
    // 0x1e41c4: 0xe4601480  swc1        $f0, 0x1480($v1)
    ctx->pc = 0x1e41c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 5248), bits); }
label_1e41c8:
    // 0x1e41c8: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e41c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e41cc:
    // 0x1e41cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1e41d0:
    if (ctx->pc == 0x1E41D0u) {
        ctx->pc = 0x1E41D0u;
            // 0x1e41d0: 0xac641484  sw          $a0, 0x1484($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5252), GPR_U32(ctx, 4));
        ctx->pc = 0x1E41D4u;
        goto label_1e41d4;
    }
    ctx->pc = 0x1E41CCu;
    {
        const bool branch_taken_0x1e41cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E41D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E41CCu;
            // 0x1e41d0: 0xac641484  sw          $a0, 0x1484($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 5252), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e41cc) {
            ctx->pc = 0x1E41E4u;
            goto label_1e41e4;
        }
    }
    ctx->pc = 0x1E41D4u;
label_1e41d4:
    // 0x1e41d4: 0xc0781ac  jal         func_1E06B0
label_1e41d8:
    if (ctx->pc == 0x1E41D8u) {
        ctx->pc = 0x1E41D8u;
            // 0x1e41d8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E41DCu;
        goto label_1e41dc;
    }
    ctx->pc = 0x1E41D4u;
    SET_GPR_U32(ctx, 31, 0x1E41DCu);
    ctx->pc = 0x1E41D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E41D4u;
            // 0x1e41d8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E41DCu; }
        if (ctx->pc != 0x1E41DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E41DCu; }
        if (ctx->pc != 0x1E41DCu) { return; }
    }
    ctx->pc = 0x1E41DCu;
label_1e41dc:
    // 0x1e41dc: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e41dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e41e0:
    // 0x1e41e0: 0xe4401484  swc1        $f0, 0x1484($v0)
    ctx->pc = 0x1e41e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5252), bits); }
label_1e41e4:
    // 0x1e41e4: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e41e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e41e8:
    // 0x1e41e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e41e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e41ec:
    // 0x1e41ec: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e41ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e41f0:
    // 0x1e41f0: 0x320f809  jalr        $t9
label_1e41f4:
    if (ctx->pc == 0x1E41F4u) {
        ctx->pc = 0x1E41F4u;
            // 0x1e41f4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E41F8u;
        goto label_1e41f8;
    }
    ctx->pc = 0x1E41F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E41F8u);
        ctx->pc = 0x1E41F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E41F0u;
            // 0x1e41f4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E41F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E41F8u; }
            if (ctx->pc != 0x1E41F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E41F8u;
label_1e41f8:
    // 0x1e41f8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1e41f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1e41fc:
    // 0x1e41fc: 0xc04c018  jal         func_130060
label_1e4200:
    if (ctx->pc == 0x1E4200u) {
        ctx->pc = 0x1E4200u;
            // 0x1e4200: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E4204u;
        goto label_1e4204;
    }
    ctx->pc = 0x1E41FCu;
    SET_GPR_U32(ctx, 31, 0x1E4204u);
    ctx->pc = 0x1E4200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E41FCu;
            // 0x1e4200: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4204u; }
        if (ctx->pc != 0x1E4204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4204u; }
        if (ctx->pc != 0x1E4204u) { return; }
    }
    ctx->pc = 0x1E4204u;
label_1e4204:
    // 0x1e4204: 0x8f828e70  lw          $v0, -0x7190($gp)
    ctx->pc = 0x1e4204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e4208:
    // 0x1e4208: 0xc4411484  lwc1        $f1, 0x1484($v0)
    ctx->pc = 0x1e4208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e420c:
    // 0x1e420c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e420cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e4210:
    // 0x1e4210: 0x0  nop
    ctx->pc = 0x1e4210u;
    // NOP
label_1e4214:
    // 0x1e4214: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1e4218:
    if (ctx->pc == 0x1E4218u) {
        ctx->pc = 0x1E421Cu;
        goto label_1e421c;
    }
    ctx->pc = 0x1E4214u;
    {
        const bool branch_taken_0x1e4214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4214) {
            ctx->pc = 0x1E4220u;
            goto label_1e4220;
        }
    }
    ctx->pc = 0x1E421Cu;
label_1e421c:
    // 0x1e421c: 0xac401480  sw          $zero, 0x1480($v0)
    ctx->pc = 0x1e421cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5248), GPR_U32(ctx, 0));
label_1e4220:
    // 0x1e4220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e4224:
    // 0x1e4224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4228:
    // 0x1e4228: 0x3e00008  jr          $ra
label_1e422c:
    if (ctx->pc == 0x1E422Cu) {
        ctx->pc = 0x1E422Cu;
            // 0x1e422c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E4230u;
        goto label_fallthrough_0x1e4228;
    }
    ctx->pc = 0x1E4228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E422Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4228u;
            // 0x1e422c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e4228:
    ctx->pc = 0x1E4230u;
}
