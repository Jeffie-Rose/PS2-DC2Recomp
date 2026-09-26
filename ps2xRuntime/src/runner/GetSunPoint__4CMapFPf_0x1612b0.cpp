#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSunPoint__4CMapFPf
// Address: 0x1612b0 - 0x161360
void GetSunPoint__4CMapFPf_0x1612b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSunPoint__4CMapFPf_0x1612b0");
#endif

    switch (ctx->pc) {
        case 0x1612e4u: goto label_1612e4;
        case 0x1612ecu: goto label_1612ec;
        case 0x16131cu: goto label_16131c;
        case 0x16132cu: goto label_16132c;
        case 0x16133cu: goto label_16133c;
        case 0x16134cu: goto label_16134c;
        default: break;
    }

    ctx->pc = 0x1612b0u;

    // 0x1612b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1612b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1612b4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1612b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1612b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1612b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1612bc: 0x24424720  addiu       $v0, $v0, 0x4720
    ctx->pc = 0x1612bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18208));
    // 0x1612c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1612c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1612c4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1612c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1612c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1612c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1612cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1612ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612d0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1612d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1612d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1612d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612d8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1612d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1612dc: 0xc04c050  jal         func_130140
    ctx->pc = 0x1612DCu;
    SET_GPR_U32(ctx, 31, 0x1612E4u);
    ctx->pc = 0x1612E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1612DCu;
            // 0x1612e0: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1612E4u; }
        if (ctx->pc != 0x1612E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1612E4u; }
        if (ctx->pc != 0x1612E4u) { return; }
    }
    ctx->pc = 0x1612E4u;
label_1612e4:
    // 0x1612e4: 0xc05834c  jal         func_160D30
    ctx->pc = 0x1612E4u;
    SET_GPR_U32(ctx, 31, 0x1612ECu);
    ctx->pc = 0x1612E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1612E4u;
            // 0x1612e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160D30u;
    if (runtime->hasFunction(0x160D30u)) {
        auto targetFn = runtime->lookupFunction(0x160D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1612ECu; }
        if (ctx->pc != 0x1612ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTime__4CMapFv_0x160d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1612ECu; }
        if (ctx->pc != 0x1612ECu) { return; }
    }
    ctx->pc = 0x1612ECu;
label_1612ec:
    // 0x1612ec: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1612ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x1612f0: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x1612f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x1612f4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1612f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1612f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1612f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1612fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1612fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x161300: 0x0  nop
    ctx->pc = 0x161300u;
    // NOP
    // 0x161304: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x161304u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x161308: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x161308u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x16130c: 0x0  nop
    ctx->pc = 0x16130cu;
    // NOP
    // 0x161310: 0x0  nop
    ctx->pc = 0x161310u;
    // NOP
    // 0x161314: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x161314u;
    SET_GPR_U32(ctx, 31, 0x16131Cu);
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16131Cu; }
        if (ctx->pc != 0x16131Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16131Cu; }
        if (ctx->pc != 0x16131Cu) { return; }
    }
    ctx->pc = 0x16131Cu;
label_16131c:
    // 0x16131c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16131cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x161320: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x161320u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x161324: 0xc041ca2  jal         func_107288
    ctx->pc = 0x161324u;
    SET_GPR_U32(ctx, 31, 0x16132Cu);
    ctx->pc = 0x161328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161324u;
            // 0x161328: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107288u;
    if (runtime->hasFunction(0x107288u)) {
        auto targetFn = runtime->lookupFunction(0x107288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16132Cu; }
        if (ctx->pc != 0x16132Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x107288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16132Cu; }
        if (ctx->pc != 0x16132Cu) { return; }
    }
    ctx->pc = 0x16132Cu;
label_16132c:
    // 0x16132c: 0xc62c00e0  lwc1        $f12, 0xE0($s1)
    ctx->pc = 0x16132cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x161330: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x161330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x161334: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x161334u;
    SET_GPR_U32(ctx, 31, 0x16133Cu);
    ctx->pc = 0x161338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161334u;
            // 0x161338: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16133Cu; }
        if (ctx->pc != 0x16133Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16133Cu; }
        if (ctx->pc != 0x16133Cu) { return; }
    }
    ctx->pc = 0x16133Cu;
label_16133c:
    // 0x16133c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16133cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161340: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x161340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x161344: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x161344u;
    SET_GPR_U32(ctx, 31, 0x16134Cu);
    ctx->pc = 0x161348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161344u;
            // 0x161348: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16134Cu; }
        if (ctx->pc != 0x16134Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16134Cu; }
        if (ctx->pc != 0x16134Cu) { return; }
    }
    ctx->pc = 0x16134Cu;
label_16134c:
    // 0x16134c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x16134cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161350: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161358: 0x3e00008  jr          $ra
    ctx->pc = 0x161358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16135Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161358u;
            // 0x16135c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161360u;
}
