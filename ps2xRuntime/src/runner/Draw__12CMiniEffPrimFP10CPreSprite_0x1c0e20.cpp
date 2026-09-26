#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__12CMiniEffPrimFP10CPreSprite
// Address: 0x1c0e20 - 0x1c0f68
void Draw__12CMiniEffPrimFP10CPreSprite_0x1c0e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__12CMiniEffPrimFP10CPreSprite_0x1c0e20");
#endif

    switch (ctx->pc) {
        case 0x1c0e78u: goto label_1c0e78;
        case 0x1c0e90u: goto label_1c0e90;
        case 0x1c0ec4u: goto label_1c0ec4;
        case 0x1c0edcu: goto label_1c0edc;
        case 0x1c0f08u: goto label_1c0f08;
        case 0x1c0f1cu: goto label_1c0f1c;
        case 0x1c0f28u: goto label_1c0f28;
        case 0x1c0f38u: goto label_1c0f38;
        case 0x1c0f44u: goto label_1c0f44;
        default: break;
    }

    ctx->pc = 0x1c0e20u;

    // 0x1c0e20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1c0e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1c0e24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c0e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c0e28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c0e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c0e2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c0e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c0e30: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1c0e30u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e34: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c0e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c0e38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c0e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c0e3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c0e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c0e40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c0e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c0e44: 0x80830010  lb          $v1, 0x10($a0)
    ctx->pc = 0x1c0e44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c0e48: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1C0E48u;
    {
        const bool branch_taken_0x1c0e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E48u;
            // 0x1c0e4c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0e48) {
            ctx->pc = 0x1C0F44u;
            goto label_1c0f44;
        }
    }
    ctx->pc = 0x1C0E50u;
    // 0x1c0e50: 0x1280003c  beqz        $s4, . + 4 + (0x3C << 2)
    ctx->pc = 0x1C0E50u;
    {
        const bool branch_taken_0x1c0e50 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e50) {
            ctx->pc = 0x1C0F44u;
            goto label_1c0f44;
        }
    }
    ctx->pc = 0x1C0E58u;
    // 0x1c0e58: 0x82a20011  lb          $v0, 0x11($s5)
    ctx->pc = 0x1c0e58u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 17)));
    // 0x1c0e5c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C0E5Cu;
    {
        const bool branch_taken_0x1c0e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0e5c) {
            ctx->pc = 0x1C0EA0u;
            goto label_1c0ea0;
        }
    }
    ctx->pc = 0x1C0E64u;
    // 0x1c0e64: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x1c0e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0e68: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1c0e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1c0e6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c0e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0e70: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C0E70u;
    SET_GPR_U32(ctx, 31, 0x1C0E78u);
    ctx->pc = 0x1C0E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E70u;
            // 0x1c0e74: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0E78u; }
        if (ctx->pc != 0x1C0E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0E78u; }
        if (ctx->pc != 0x1C0E78u) { return; }
    }
    ctx->pc = 0x1C0E78u;
label_1c0e78:
    // 0x1c0e78: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1c0e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1c0e7c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c0e7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c0e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0e84: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x1c0e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1c0e88: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C0E88u;
    SET_GPR_U32(ctx, 31, 0x1C0E90u);
    ctx->pc = 0x1C0E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0E88u;
            // 0x1c0e8c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0E90u; }
        if (ctx->pc != 0x1C0E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0E90u; }
        if (ctx->pc != 0x1C0E90u) { return; }
    }
    ctx->pc = 0x1C0E90u;
label_1c0e90:
    // 0x1c0e90: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x1c0e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c0e94: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x1c0e94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c0e98: 0x2412002f  addiu       $s2, $zero, 0x2F
    ctx->pc = 0x1c0e98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1c0e9c: 0x2413004f  addiu       $s3, $zero, 0x4F
    ctx->pc = 0x1c0e9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_1c0ea0:
    // 0x1c0ea0: 0x82a30011  lb          $v1, 0x11($s5)
    ctx->pc = 0x1c0ea0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 17)));
    // 0x1c0ea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0ea8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C0EA8u;
    {
        const bool branch_taken_0x1c0ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c0ea8) {
            ctx->pc = 0x1C0EECu;
            goto label_1c0eec;
        }
    }
    ctx->pc = 0x1C0EB0u;
    // 0x1c0eb0: 0xc6a00014  lwc1        $f0, 0x14($s5)
    ctx->pc = 0x1c0eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0eb4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1c0eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1c0eb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c0eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0ebc: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C0EBCu;
    SET_GPR_U32(ctx, 31, 0x1C0EC4u);
    ctx->pc = 0x1C0EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0EBCu;
            // 0x1c0ec0: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0EC4u; }
        if (ctx->pc != 0x1C0EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0EC4u; }
        if (ctx->pc != 0x1C0EC4u) { return; }
    }
    ctx->pc = 0x1C0EC4u;
label_1c0ec4:
    // 0x1c0ec4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1c0ec4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ec8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c0ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ecc: 0x240500fa  addiu       $a1, $zero, 0xFA
    ctx->pc = 0x1c0eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1c0ed0: 0x240600dc  addiu       $a2, $zero, 0xDC
    ctx->pc = 0x1c0ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    // 0x1c0ed4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1C0ED4u;
    SET_GPR_U32(ctx, 31, 0x1C0EDCu);
    ctx->pc = 0x1C0ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0ED4u;
            // 0x1c0ed8: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0EDCu; }
        if (ctx->pc != 0x1C0EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0EDCu; }
        if (ctx->pc != 0x1C0EDCu) { return; }
    }
    ctx->pc = 0x1C0EDCu;
label_1c0edc:
    // 0x1c0edc: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x1c0edcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c0ee0: 0x24110040  addiu       $s1, $zero, 0x40
    ctx->pc = 0x1c0ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c0ee4: 0x2412002f  addiu       $s2, $zero, 0x2F
    ctx->pc = 0x1c0ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1c0ee8: 0x2413004f  addiu       $s3, $zero, 0x4F
    ctx->pc = 0x1c0ee8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_1c0eec:
    // 0x1c0eec: 0xc6ac0018  lwc1        $f12, 0x18($s5)
    ctx->pc = 0x1c0eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0ef0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1c0ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0ef4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1c0ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c0ef8: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1c0ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c0efc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c0efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f00: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1C0F00u;
    SET_GPR_U32(ctx, 31, 0x1C0F08u);
    ctx->pc = 0x1C0F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F00u;
            // 0x1c0f04: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0F08u; }
        if (ctx->pc != 0x1C0F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0F08u; }
        if (ctx->pc != 0x1C0F08u) { return; }
    }
    ctx->pc = 0x1C0F08u;
label_1c0f08:
    // 0x1c0f08: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C0F08u;
    {
        const bool branch_taken_0x1c0f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F08u;
            // 0x1c0f0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f08) {
            ctx->pc = 0x1C0F44u;
            goto label_1c0f44;
        }
    }
    ctx->pc = 0x1C0F10u;
    // 0x1c0f10: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c0f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f14: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C0F14u;
    SET_GPR_U32(ctx, 31, 0x1C0F1Cu);
    ctx->pc = 0x1C0F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F14u;
            // 0x1c0f18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0F1Cu; }
        if (ctx->pc != 0x1C0F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0F1Cu; }
        if (ctx->pc != 0x1C0F1Cu) { return; }
    }
    ctx->pc = 0x1C0F1Cu;
label_1c0f1c:
    // 0x1c0f1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c0f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f20: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C0F20u;
    SET_GPR_U32(ctx, 31, 0x1C0F28u);
    ctx->pc = 0x1C0F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F20u;
            // 0x1c0f24: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0F28u; }
        if (ctx->pc != 0x1C0F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0F28u; }
        if (ctx->pc != 0x1C0F28u) { return; }
    }
    ctx->pc = 0x1C0F28u;
label_1c0f28:
    // 0x1c0f28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c0f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f2c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1c0f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f30: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x1C0F30u;
    SET_GPR_U32(ctx, 31, 0x1C0F38u);
    ctx->pc = 0x1C0F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F30u;
            // 0x1c0f34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0F38u; }
        if (ctx->pc != 0x1C0F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0F38u; }
        if (ctx->pc != 0x1C0F38u) { return; }
    }
    ctx->pc = 0x1C0F38u;
label_1c0f38:
    // 0x1c0f38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c0f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f3c: 0xc04d318  jal         func_134C60
    ctx->pc = 0x1C0F3Cu;
    SET_GPR_U32(ctx, 31, 0x1C0F44u);
    ctx->pc = 0x1C0F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F3Cu;
            // 0x1c0f40: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0F44u; }
        if (ctx->pc != 0x1C0F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0F44u; }
        if (ctx->pc != 0x1C0F44u) { return; }
    }
    ctx->pc = 0x1C0F44u;
label_1c0f44:
    // 0x1c0f44: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c0f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c0f48: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c0f48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c0f4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c0f4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c0f50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c0f50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c0f54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c0f54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c0f58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0f58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0f5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c0f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0f60: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F60u;
            // 0x1c0f64: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0F68u;
}
