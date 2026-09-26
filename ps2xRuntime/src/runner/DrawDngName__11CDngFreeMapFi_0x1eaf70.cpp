#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawDngName__11CDngFreeMapFi
// Address: 0x1eaf70 - 0x1eb024
void DrawDngName__11CDngFreeMapFi_0x1eaf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawDngName__11CDngFreeMapFi_0x1eaf70");
#endif

    switch (ctx->pc) {
        case 0x1eafa8u: goto label_1eafa8;
        case 0x1eafc4u: goto label_1eafc4;
        case 0x1eafecu: goto label_1eafec;
        case 0x1eb010u: goto label_1eb010;
        default: break;
    }

    ctx->pc = 0x1eaf70u;

    // 0x1eaf70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1eaf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1eaf74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1eaf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1eaf78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eaf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eaf7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eaf7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eaf80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eaf80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaf84: 0x8c8300d4  lw          $v1, 0xD4($a0)
    ctx->pc = 0x1eaf84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
    // 0x1eaf88: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EAF88u;
    {
        const bool branch_taken_0x1eaf88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAF88u;
            // 0x1eaf8c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eaf88) {
            ctx->pc = 0x1EB010u;
            goto label_1eb010;
        }
    }
    ctx->pc = 0x1EAF90u;
    // 0x1eaf90: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1eaf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1eaf94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1eaf94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaf98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1eaf98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaf9c: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x1eaf9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1eafa0: 0xc04f8e4  jal         func_13E390
    ctx->pc = 0x1EAFA0u;
    SET_GPR_U32(ctx, 31, 0x1EAFA8u);
    ctx->pc = 0x1EAFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAFA0u;
            // 0x1eafa4: 0x24080060  addiu       $t0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAFA8u; }
        if (ctx->pc != 0x1EAFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAFA8u; }
        if (ctx->pc != 0x1EAFA8u) { return; }
    }
    ctx->pc = 0x1EAFA8u;
label_1eafa8:
    // 0x1eafa8: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1eafa8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eafac: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1eafacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x1eafb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eafb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eafb4: 0x0  nop
    ctx->pc = 0x1eafb4u;
    // NOP
    // 0x1eafb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1eafb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1eafbc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1EAFBCu;
    SET_GPR_U32(ctx, 31, 0x1EAFC4u);
    ctx->pc = 0x1EAFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAFBCu;
            // 0x1eafc0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAFC4u; }
        if (ctx->pc != 0x1EAFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAFC4u; }
        if (ctx->pc != 0x1EAFC4u) { return; }
    }
    ctx->pc = 0x1EAFC4u;
label_1eafc4:
    // 0x1eafc4: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x1eafc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x1eafc8: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1eafc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1eafcc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1eafccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eafd0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1eafd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1eafd4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1eafd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1eafd8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1eafd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eafdc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1eafdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eafe0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1eafe0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eafe4: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x1EAFE4u;
    SET_GPR_U32(ctx, 31, 0x1EAFECu);
    ctx->pc = 0x1EAFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EAFE4u;
            // 0x1eafe8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAFECu; }
        if (ctx->pc != 0x1EAFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EAFECu; }
        if (ctx->pc != 0x1EAFECu) { return; }
    }
    ctx->pc = 0x1EAFECu;
label_1eafec:
    // 0x1eafec: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x1eafecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x1eaff0: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1eaff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eaff4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1eaff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eaff8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1eaff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1eaffc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1eaffcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb000: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x1eb000u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb004: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1eb004u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1eb008: 0xc087fcc  jal         func_21FF30
    ctx->pc = 0x1EB008u;
    SET_GPR_U32(ctx, 31, 0x1EB010u);
    ctx->pc = 0x1EB00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB008u;
            // 0x1eb00c: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FF30u;
    if (runtime->hasFunction(0x21FF30u)) {
        auto targetFn = runtime->lookupFunction(0x21FF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB010u; }
        if (ctx->pc != 0x1EB010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EB010u; }
        if (ctx->pc != 0x1EB010u) { return; }
    }
    ctx->pc = 0x1EB010u;
label_1eb010:
    // 0x1eb010: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1eb010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eb014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1eb014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1eb018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb01c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB01Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EB01Cu;
            // 0x1eb020: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB024u;
}
