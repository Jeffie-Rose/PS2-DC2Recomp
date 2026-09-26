#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__8CTornadoFv
// Address: 0x1c00e0 - 0x1c0218
void Draw__8CTornadoFv_0x1c00e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__8CTornadoFv_0x1c00e0");
#endif

    switch (ctx->pc) {
        case 0x1c00e0u: goto label_1c00e0;
        case 0x1c00e4u: goto label_1c00e4;
        case 0x1c00e8u: goto label_1c00e8;
        case 0x1c00ecu: goto label_1c00ec;
        case 0x1c00f0u: goto label_1c00f0;
        case 0x1c00f4u: goto label_1c00f4;
        case 0x1c00f8u: goto label_1c00f8;
        case 0x1c00fcu: goto label_1c00fc;
        case 0x1c0100u: goto label_1c0100;
        case 0x1c0104u: goto label_1c0104;
        case 0x1c0108u: goto label_1c0108;
        case 0x1c010cu: goto label_1c010c;
        case 0x1c0110u: goto label_1c0110;
        case 0x1c0114u: goto label_1c0114;
        case 0x1c0118u: goto label_1c0118;
        case 0x1c011cu: goto label_1c011c;
        case 0x1c0120u: goto label_1c0120;
        case 0x1c0124u: goto label_1c0124;
        case 0x1c0128u: goto label_1c0128;
        case 0x1c012cu: goto label_1c012c;
        case 0x1c0130u: goto label_1c0130;
        case 0x1c0134u: goto label_1c0134;
        case 0x1c0138u: goto label_1c0138;
        case 0x1c013cu: goto label_1c013c;
        case 0x1c0140u: goto label_1c0140;
        case 0x1c0144u: goto label_1c0144;
        case 0x1c0148u: goto label_1c0148;
        case 0x1c014cu: goto label_1c014c;
        case 0x1c0150u: goto label_1c0150;
        case 0x1c0154u: goto label_1c0154;
        case 0x1c0158u: goto label_1c0158;
        case 0x1c015cu: goto label_1c015c;
        case 0x1c0160u: goto label_1c0160;
        case 0x1c0164u: goto label_1c0164;
        case 0x1c0168u: goto label_1c0168;
        case 0x1c016cu: goto label_1c016c;
        case 0x1c0170u: goto label_1c0170;
        case 0x1c0174u: goto label_1c0174;
        case 0x1c0178u: goto label_1c0178;
        case 0x1c017cu: goto label_1c017c;
        case 0x1c0180u: goto label_1c0180;
        case 0x1c0184u: goto label_1c0184;
        case 0x1c0188u: goto label_1c0188;
        case 0x1c018cu: goto label_1c018c;
        case 0x1c0190u: goto label_1c0190;
        case 0x1c0194u: goto label_1c0194;
        case 0x1c0198u: goto label_1c0198;
        case 0x1c019cu: goto label_1c019c;
        case 0x1c01a0u: goto label_1c01a0;
        case 0x1c01a4u: goto label_1c01a4;
        case 0x1c01a8u: goto label_1c01a8;
        case 0x1c01acu: goto label_1c01ac;
        case 0x1c01b0u: goto label_1c01b0;
        case 0x1c01b4u: goto label_1c01b4;
        case 0x1c01b8u: goto label_1c01b8;
        case 0x1c01bcu: goto label_1c01bc;
        case 0x1c01c0u: goto label_1c01c0;
        case 0x1c01c4u: goto label_1c01c4;
        case 0x1c01c8u: goto label_1c01c8;
        case 0x1c01ccu: goto label_1c01cc;
        case 0x1c01d0u: goto label_1c01d0;
        case 0x1c01d4u: goto label_1c01d4;
        case 0x1c01d8u: goto label_1c01d8;
        case 0x1c01dcu: goto label_1c01dc;
        case 0x1c01e0u: goto label_1c01e0;
        case 0x1c01e4u: goto label_1c01e4;
        case 0x1c01e8u: goto label_1c01e8;
        case 0x1c01ecu: goto label_1c01ec;
        case 0x1c01f0u: goto label_1c01f0;
        case 0x1c01f4u: goto label_1c01f4;
        case 0x1c01f8u: goto label_1c01f8;
        case 0x1c01fcu: goto label_1c01fc;
        case 0x1c0200u: goto label_1c0200;
        case 0x1c0204u: goto label_1c0204;
        case 0x1c0208u: goto label_1c0208;
        case 0x1c020cu: goto label_1c020c;
        case 0x1c0210u: goto label_1c0210;
        case 0x1c0214u: goto label_1c0214;
        default: break;
    }

    ctx->pc = 0x1c00e0u;

label_1c00e0:
    // 0x1c00e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1c00e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1c00e4:
    // 0x1c00e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c00e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1c00e8:
    // 0x1c00e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c00e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1c00ec:
    // 0x1c00ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c00ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1c00f0:
    // 0x1c00f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c00f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c00f4:
    // 0x1c00f4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c00f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c00f8:
    // 0x1c00f8: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_1c00fc:
    if (ctx->pc == 0x1C00FCu) {
        ctx->pc = 0x1C00FCu;
            // 0x1c00fc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C0100u;
        goto label_1c0100;
    }
    ctx->pc = 0x1C00F8u;
    {
        const bool branch_taken_0x1c00f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C00FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C00F8u;
            // 0x1c00fc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00f8) {
            ctx->pc = 0x1C0200u;
            goto label_1c0200;
        }
    }
    ctx->pc = 0x1C0100u;
label_1c0100:
    // 0x1c0100: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1c0100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c0104:
    // 0x1c0104: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_1c0108:
    if (ctx->pc == 0x1C0108u) {
        ctx->pc = 0x1C0108u;
            // 0x1c0108: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1C010Cu;
        goto label_1c010c;
    }
    ctx->pc = 0x1C0104u;
    {
        const bool branch_taken_0x1c0104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0104u;
            // 0x1c0108: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0104) {
            ctx->pc = 0x1C0200u;
            goto label_1c0200;
        }
    }
    ctx->pc = 0x1C010Cu;
label_1c010c:
    // 0x1c010c: 0xc04d6d8  jal         func_135B60
label_1c0110:
    if (ctx->pc == 0x1C0110u) {
        ctx->pc = 0x1C0114u;
        goto label_1c0114;
    }
    ctx->pc = 0x1C010Cu;
    SET_GPR_U32(ctx, 31, 0x1C0114u);
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0114u; }
        if (ctx->pc != 0x1C0114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0114u; }
        if (ctx->pc != 0x1C0114u) { return; }
    }
    ctx->pc = 0x1C0114u;
label_1c0114:
    // 0x1c0114: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c0114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0118:
    // 0x1c0118: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1c0118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c011c:
    // 0x1c011c: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1c011cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_1c0120:
    // 0x1c0120: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x1c0120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_1c0124:
    // 0x1c0124: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c0124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c0128:
    // 0x1c0128: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x1c0128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_1c012c:
    // 0x1c012c: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x1c012cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_1c0130:
    // 0x1c0130: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c0130u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0134:
    // 0x1c0134: 0x82030020  lb          $v1, 0x20($s0)
    ctx->pc = 0x1c0134u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
label_1c0138:
    // 0x1c0138: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
label_1c013c:
    if (ctx->pc == 0x1C013Cu) {
        ctx->pc = 0x1C0140u;
        goto label_1c0140;
    }
    ctx->pc = 0x1C0138u;
    {
        const bool branch_taken_0x1c0138 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c0138) {
            ctx->pc = 0x1C0148u;
            goto label_1c0148;
        }
    }
    ctx->pc = 0x1C0140u;
label_1c0140:
    // 0x1c0140: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1c0144:
    if (ctx->pc == 0x1C0144u) {
        ctx->pc = 0x1C0144u;
            // 0x1c0144: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x1C0148u;
        goto label_1c0148;
    }
    ctx->pc = 0x1C0140u;
    {
        const bool branch_taken_0x1c0140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0140u;
            // 0x1c0144: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0140) {
            ctx->pc = 0x1C01F0u;
            goto label_1c01f0;
        }
    }
    ctx->pc = 0x1C0148u;
label_1c0148:
    // 0x1c0148: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c0148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c014c:
    // 0x1c014c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1c014cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c0150:
    // 0x1c0150: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1c0150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1c0154:
    // 0x1c0154: 0x320f809  jalr        $t9
label_1c0158:
    if (ctx->pc == 0x1C0158u) {
        ctx->pc = 0x1C0158u;
            // 0x1c0158: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C015Cu;
        goto label_1c015c;
    }
    ctx->pc = 0x1C0154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C015Cu);
        ctx->pc = 0x1C0158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0154u;
            // 0x1c0158: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C015Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C015Cu; }
            if (ctx->pc != 0x1C015Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C015Cu;
label_1c015c:
    // 0x1c015c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c015cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c0160:
    // 0x1c0160: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c0160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1c0164:
    // 0x1c0164: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c0164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c0168:
    // 0x1c0168: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x1c0168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c016c:
    // 0x1c016c: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x1c016cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1c0170:
    // 0x1c0170: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1c0170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_1c0174:
    // 0x1c0174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c0174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c0178:
    // 0x1c0178: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1c0178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c017c:
    // 0x1c017c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1c017cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1c0180:
    // 0x1c0180: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1c0180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1c0184:
    // 0x1c0184: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x1c0184u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c0188:
    // 0x1c0188: 0x320f809  jalr        $t9
label_1c018c:
    if (ctx->pc == 0x1C018Cu) {
        ctx->pc = 0x1C018Cu;
            // 0x1c018c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1C0190u;
        goto label_1c0190;
    }
    ctx->pc = 0x1C0188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C0190u);
        ctx->pc = 0x1C018Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0188u;
            // 0x1c018c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C0190u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C0190u; }
            if (ctx->pc != 0x1C0190u) { return; }
        }
        }
    }
    ctx->pc = 0x1C0190u;
label_1c0190:
    // 0x1c0190: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c0190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c0194:
    // 0x1c0194: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c0194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c0198:
    // 0x1c0198: 0xc60d0014  lwc1        $f13, 0x14($s0)
    ctx->pc = 0x1c0198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1c019c:
    // 0x1c019c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1c019cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c01a0:
    // 0x1c01a0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1c01a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1c01a4:
    // 0x1c01a4: 0x320f809  jalr        $t9
label_1c01a8:
    if (ctx->pc == 0x1C01A8u) {
        ctx->pc = 0x1C01A8u;
            // 0x1c01a8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1C01ACu;
        goto label_1c01ac;
    }
    ctx->pc = 0x1C01A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1C01ACu);
        ctx->pc = 0x1C01A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C01A4u;
            // 0x1c01a8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C01ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C01ACu; }
            if (ctx->pc != 0x1C01ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1C01ACu;
label_1c01ac:
    // 0x1c01ac: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x1c01acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_1c01b0:
    // 0x1c01b0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x1c01b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_1c01b4:
    // 0x1c01b4: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x1c01b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_1c01b8:
    // 0x1c01b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c01b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c01bc:
    // 0x1c01bc: 0xafa300b4  sw          $v1, 0xB4($sp)
    ctx->pc = 0x1c01bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 3));
label_1c01c0:
    // 0x1c01c0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1c01c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1c01c4:
    // 0x1c01c4: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x1c01c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
label_1c01c8:
    // 0x1c01c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c01c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c01cc:
    // 0x1c01cc: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x1c01ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c01d0:
    // 0x1c01d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c01d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1c01d4:
    // 0x1c01d4: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1c01d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1c01d8:
    // 0x1c01d8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1c01d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c01dc:
    // 0x1c01dc: 0xc04de54  jal         func_137950
label_1c01e0:
    if (ctx->pc == 0x1C01E0u) {
        ctx->pc = 0x1C01E0u;
            // 0x1c01e0: 0x3c070001  lui         $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1C01E4u;
        goto label_1c01e4;
    }
    ctx->pc = 0x1C01DCu;
    SET_GPR_U32(ctx, 31, 0x1C01E4u);
    ctx->pc = 0x1C01E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C01DCu;
            // 0x1c01e0: 0x3c070001  lui         $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C01E4u; }
        if (ctx->pc != 0x1C01E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C01E4u; }
        if (ctx->pc != 0x1C01E4u) { return; }
    }
    ctx->pc = 0x1C01E4u;
label_1c01e4:
    // 0x1c01e4: 0xc050bf4  jal         func_142FD0
label_1c01e8:
    if (ctx->pc == 0x1C01E8u) {
        ctx->pc = 0x1C01E8u;
            // 0x1c01e8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x1C01ECu;
        goto label_1c01ec;
    }
    ctx->pc = 0x1C01E4u;
    SET_GPR_U32(ctx, 31, 0x1C01ECu);
    ctx->pc = 0x1C01E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C01E4u;
            // 0x1c01e8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C01ECu; }
        if (ctx->pc != 0x1C01ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C01ECu; }
        if (ctx->pc != 0x1C01ECu) { return; }
    }
    ctx->pc = 0x1C01ECu;
label_1c01ec:
    // 0x1c01ec: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1c01ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1c01f0:
    // 0x1c01f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c01f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c01f4:
    // 0x1c01f4: 0x2a230012  slti        $v1, $s1, 0x12
    ctx->pc = 0x1c01f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)18) ? 1 : 0);
label_1c01f8:
    // 0x1c01f8: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
label_1c01fc:
    if (ctx->pc == 0x1C01FCu) {
        ctx->pc = 0x1C0200u;
        goto label_1c0200;
    }
    ctx->pc = 0x1C01F8u;
    {
        const bool branch_taken_0x1c01f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c01f8) {
            ctx->pc = 0x1C0134u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c0134;
        }
    }
    ctx->pc = 0x1C0200u;
label_1c0200:
    // 0x1c0200: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c0200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c0204:
    // 0x1c0204: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c0204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c0208:
    // 0x1c0208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c020c:
    // 0x1c020c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c020cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0210:
    // 0x1c0210: 0x3e00008  jr          $ra
label_1c0214:
    if (ctx->pc == 0x1C0214u) {
        ctx->pc = 0x1C0214u;
            // 0x1c0214: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1C0218u;
        goto label_fallthrough_0x1c0210;
    }
    ctx->pc = 0x1C0210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0210u;
            // 0x1c0214: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1c0210:
    ctx->pc = 0x1C0218u;
}
