#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Copy__13CCollisionMDTFR13CCollisionMDTP9mgCMemory
// Address: 0x147480 - 0x147620
void Copy__13CCollisionMDTFR13CCollisionMDTP9mgCMemory_0x147480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Copy__13CCollisionMDTFR13CCollisionMDTP9mgCMemory_0x147480");
#endif

    switch (ctx->pc) {
        case 0x1474acu: goto label_1474ac;
        case 0x1474fcu: goto label_1474fc;
        case 0x147514u: goto label_147514;
        case 0x14752cu: goto label_14752c;
        default: break;
    }

    ctx->pc = 0x147480u;

    // 0x147480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x147480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x147484: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x147484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x147488: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x147488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14748c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14748cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x147490: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x147490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147494: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x147494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x147498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14749c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x14749cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1474a0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1474a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1474a4: 0xc04e624  jal         func_139890
    ctx->pc = 0x1474A4u;
    SET_GPR_U32(ctx, 31, 0x1474ACu);
    ctx->pc = 0x1474A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1474A4u;
            // 0x1474a8: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139890u;
    if (runtime->hasFunction(0x139890u)) {
        auto targetFn = runtime->lookupFunction(0x139890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1474ACu; }
        if (ctx->pc != 0x1474ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgVu0FBOXFR9mgVu0FBOX_0x139890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1474ACu; }
        if (ctx->pc != 0x1474ACu) { return; }
    }
    ctx->pc = 0x1474ACu;
label_1474ac:
    // 0x1474ac: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x1474acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x1474b0: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x1474b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x1474b4: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1474b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1474b8: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1474B8u;
    {
        const bool branch_taken_0x1474b8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1474b8) {
            ctx->pc = 0x1474C8u;
            goto label_1474c8;
        }
    }
    ctx->pc = 0x1474C0u;
    // 0x1474c0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1474C0u;
    {
        const bool branch_taken_0x1474c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1474C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1474C0u;
            // 0x1474c4: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1474c0) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x1474C8u;
label_1474c8:
    // 0x1474c8: 0x1200004d  beqz        $s0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1474C8u;
    {
        const bool branch_taken_0x1474c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1474c8) {
            ctx->pc = 0x147600u;
            goto label_147600;
        }
    }
    ctx->pc = 0x1474D0u;
    // 0x1474d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1474d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1474d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1474d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1474d8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1474d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1474dc: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1474dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1474e0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1474E0u;
    {
        const bool branch_taken_0x1474e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1474E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1474E0u;
            // 0x1474e4: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1474e0) {
            ctx->pc = 0x1474F0u;
            goto label_1474f0;
        }
    }
    ctx->pc = 0x1474E8u;
    // 0x1474e8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1474e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1474ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1474ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1474f0:
    // 0x1474f0: 0x24450002  addiu       $a1, $v0, 0x2
    ctx->pc = 0x1474f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1474f4: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1474F4u;
    SET_GPR_U32(ctx, 31, 0x1474FCu);
    ctx->pc = 0x1474F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1474F4u;
            // 0x1474f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1474FCu; }
        if (ctx->pc != 0x1474FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1474FCu; }
        if (ctx->pc != 0x1474FCu) { return; }
    }
    ctx->pc = 0x1474FCu;
label_1474fc:
    // 0x1474fc: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1474fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x147500: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x147500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147504: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x147504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x147508: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x147508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14750c: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x14750Cu;
    SET_GPR_U32(ctx, 31, 0x147514u);
    ctx->pc = 0x147510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14750Cu;
            // 0x147510: 0x22100  sll         $a0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147514u; }
        if (ctx->pc != 0x147514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147514u; }
        if (ctx->pc != 0x147514u) { return; }
    }
    ctx->pc = 0x147514u;
label_147514:
    // 0x147514: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x147514u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x147518: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x147518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x14751c: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x14751Cu;
    {
        const bool branch_taken_0x14751c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x147520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14751Cu;
            // 0x147520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14751c) {
            ctx->pc = 0x147608u;
            goto label_147608;
        }
    }
    ctx->pc = 0x147524u;
    // 0x147524: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x147524u;
    {
        const bool branch_taken_0x147524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147524u;
            // 0x147528: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147524) {
            ctx->pc = 0x1475E4u;
            goto label_1475e4;
        }
    }
    ctx->pc = 0x14752Cu;
label_14752c:
    // 0x14752c: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x14752cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x147530: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x147530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x147534: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x147534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x147538: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x147538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x14753c: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x14753cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x147540: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x147540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x147544: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x147544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x147548: 0x24c60050  addiu       $a2, $a2, 0x50
    ctx->pc = 0x147548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x14754c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x14754cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147550: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x147550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147554: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x147554u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x147558: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x147558u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x14755c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x14755cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x147560: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x147560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x147564: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x147564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x147568: 0xc4820014  lwc1        $f2, 0x14($a0)
    ctx->pc = 0x147568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14756c: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x14756cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147570: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x147570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147574: 0xe4630010  swc1        $f3, 0x10($v1)
    ctx->pc = 0x147574u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x147578: 0xe4620014  swc1        $f2, 0x14($v1)
    ctx->pc = 0x147578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x14757c: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x14757cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x147580: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x147580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x147584: 0xc4830020  lwc1        $f3, 0x20($a0)
    ctx->pc = 0x147584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x147588: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x147588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14758c: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x14758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x147590: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x147590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x147594: 0xe4630020  swc1        $f3, 0x20($v1)
    ctx->pc = 0x147594u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x147598: 0xe4620024  swc1        $f2, 0x24($v1)
    ctx->pc = 0x147598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x14759c: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x14759cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x1475a0: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x1475a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x1475a4: 0xc4830030  lwc1        $f3, 0x30($a0)
    ctx->pc = 0x1475a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1475a8: 0xc4820034  lwc1        $f2, 0x34($a0)
    ctx->pc = 0x1475a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1475ac: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x1475acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1475b0: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x1475b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1475b4: 0xe4630030  swc1        $f3, 0x30($v1)
    ctx->pc = 0x1475b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x1475b8: 0xe4620034  swc1        $f2, 0x34($v1)
    ctx->pc = 0x1475b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x1475bc: 0xe4610038  swc1        $f1, 0x38($v1)
    ctx->pc = 0x1475bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x1475c0: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1475c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x1475c4: 0xc4830040  lwc1        $f3, 0x40($a0)
    ctx->pc = 0x1475c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1475c8: 0xc4820044  lwc1        $f2, 0x44($a0)
    ctx->pc = 0x1475c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1475cc: 0xc4810048  lwc1        $f1, 0x48($a0)
    ctx->pc = 0x1475ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1475d0: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x1475d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1475d4: 0xe4630040  swc1        $f3, 0x40($v1)
    ctx->pc = 0x1475d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x1475d8: 0xe4620044  swc1        $f2, 0x44($v1)
    ctx->pc = 0x1475d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x1475dc: 0xe4610048  swc1        $f1, 0x48($v1)
    ctx->pc = 0x1475dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x1475e0: 0xe460004c  swc1        $f0, 0x4C($v1)
    ctx->pc = 0x1475e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 76), bits); }
label_1475e4:
    // 0x1475e4: 0x0  nop
    ctx->pc = 0x1475e4u;
    // NOP
    // 0x1475e8: 0x8e230044  lw          $v1, 0x44($s1)
    ctx->pc = 0x1475e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x1475ec: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x1475ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1475f0: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1475F0u;
    {
        const bool branch_taken_0x1475f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1475f0) {
            ctx->pc = 0x14752Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14752c;
        }
    }
    ctx->pc = 0x1475F8u;
    // 0x1475f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1475F8u;
    {
        const bool branch_taken_0x1475f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1475FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1475F8u;
            // 0x1475fc: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1475f8) {
            ctx->pc = 0x14760Cu;
            goto label_14760c;
        }
    }
    ctx->pc = 0x147600u;
label_147600:
    // 0x147600: 0x8e430040  lw          $v1, 0x40($s2)
    ctx->pc = 0x147600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x147604: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x147604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
label_147608:
    // 0x147608: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x147608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_14760c:
    // 0x14760c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14760cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147610: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x147610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x147614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x147614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x147618: 0x3e00008  jr          $ra
    ctx->pc = 0x147618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14761Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147618u;
            // 0x14761c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147620u;
}
