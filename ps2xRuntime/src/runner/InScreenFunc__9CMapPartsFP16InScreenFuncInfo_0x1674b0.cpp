#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InScreenFunc__9CMapPartsFP16InScreenFuncInfo
// Address: 0x1674b0 - 0x16772c
void InScreenFunc__9CMapPartsFP16InScreenFuncInfo_0x1674b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InScreenFunc__9CMapPartsFP16InScreenFuncInfo_0x1674b0");
#endif

    switch (ctx->pc) {
        case 0x1674f4u: goto label_1674f4;
        case 0x16750cu: goto label_16750c;
        case 0x167524u: goto label_167524;
        case 0x16752cu: goto label_16752c;
        case 0x167538u: goto label_167538;
        case 0x167548u: goto label_167548;
        case 0x167554u: goto label_167554;
        case 0x167584u: goto label_167584;
        case 0x1675b0u: goto label_1675b0;
        case 0x1675bcu: goto label_1675bc;
        case 0x1675c8u: goto label_1675c8;
        case 0x1675d4u: goto label_1675d4;
        case 0x1675e0u: goto label_1675e0;
        case 0x1675f8u: goto label_1675f8;
        case 0x167600u: goto label_167600;
        case 0x16760cu: goto label_16760c;
        case 0x167628u: goto label_167628;
        case 0x16763cu: goto label_16763c;
        case 0x16764cu: goto label_16764c;
        case 0x16765cu: goto label_16765c;
        case 0x167674u: goto label_167674;
        case 0x167684u: goto label_167684;
        case 0x1676d8u: goto label_1676d8;
        case 0x1676e0u: goto label_1676e0;
        case 0x1676f0u: goto label_1676f0;
        default: break;
    }

    ctx->pc = 0x1674b0u;

    // 0x1674b0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x1674b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x1674b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1674b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1674b8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1674b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1674bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1674bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1674c0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1674c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1674c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1674c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1674c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1674cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1674ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1674d0: 0x268402b0  addiu       $a0, $s4, 0x2B0
    ctx->pc = 0x1674d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 688));
    // 0x1674d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1674d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1674d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1674d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1674dc: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1674dcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1674e0: 0x268602fc  addiu       $a2, $s4, 0x2FC
    ctx->pc = 0x1674e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 764));
    // 0x1674e4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1674e4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1674e8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1674e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1674ec: 0xc0a77f4  jal         func_29DFD0
    ctx->pc = 0x1674ECu;
    SET_GPR_U32(ctx, 31, 0x1674F4u);
    ctx->pc = 0x1674F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1674ECu;
            // 0x1674f0: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29DFD0u;
    if (runtime->hasFunction(0x29DFD0u)) {
        auto targetFn = runtime->lookupFunction(0x29DFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1674F4u; }
        if (ctx->pc != 0x1674F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateFlag__14CFuncPointMngrFiP15CFuncPointCheck_0x29dfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1674F4u; }
        if (ctx->pc != 0x1674F4u) { return; }
    }
    ctx->pc = 0x1674F4u;
label_1674f4:
    // 0x1674f4: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1674F4u;
    {
        const bool branch_taken_0x1674f4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1674F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1674F4u;
            // 0x1674f8: 0x268402b0  addiu       $a0, $s4, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674f4) {
            ctx->pc = 0x167504u;
            goto label_167504;
        }
    }
    ctx->pc = 0x1674FCu;
    // 0x1674fc: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1674FCu;
    {
        const bool branch_taken_0x1674fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1674FCu;
            // 0x167500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1674fc) {
            ctx->pc = 0x1676FCu;
            goto label_1676fc;
        }
    }
    ctx->pc = 0x167504u;
label_167504:
    // 0x167504: 0xc0a761c  jal         func_29D870
    ctx->pc = 0x167504u;
    SET_GPR_U32(ctx, 31, 0x16750Cu);
    ctx->pc = 0x167508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167504u;
            // 0x167508: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16750Cu; }
        if (ctx->pc != 0x16750Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16750Cu; }
        if (ctx->pc != 0x16750Cu) { return; }
    }
    ctx->pc = 0x16750Cu;
label_16750c:
    // 0x16750c: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x16750cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x167510: 0x268402b0  addiu       $a0, $s4, 0x2B0
    ctx->pc = 0x167510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 688));
    // 0x167514: 0x269200c0  addiu       $s2, $s4, 0xC0
    ctx->pc = 0x167514u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x167518: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x167518u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16751c: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x16751Cu;
    SET_GPR_U32(ctx, 31, 0x167524u);
    ctx->pc = 0x167520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16751Cu;
            // 0x167520: 0x4600bd06  mov.s       $f20, $f23 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167524u; }
        if (ctx->pc != 0x167524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167524u; }
        if (ctx->pc != 0x167524u) { return; }
    }
    ctx->pc = 0x167524u;
label_167524:
    // 0x167524: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x167524u;
    {
        const bool branch_taken_0x167524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167524u;
            // 0x167528: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167524) {
            ctx->pc = 0x1676E8u;
            goto label_1676e8;
        }
    }
    ctx->pc = 0x16752Cu;
label_16752c:
    // 0x16752c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16752cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167530: 0xc0a71b0  jal         func_29C6C0
    ctx->pc = 0x167530u;
    SET_GPR_U32(ctx, 31, 0x167538u);
    ctx->pc = 0x167534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167530u;
            // 0x167534: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C6C0u;
    if (runtime->hasFunction(0x29C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x29C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167538u; }
        if (ctx->pc != 0x167538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Check__10CFuncPointFP15CFuncPointCheck_0x29c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167538u; }
        if (ctx->pc != 0x167538u) { return; }
    }
    ctx->pc = 0x167538u;
label_167538:
    // 0x167538: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x167538u;
    {
        const bool branch_taken_0x167538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16753Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167538u;
            // 0x16753c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167538) {
            ctx->pc = 0x1676D8u;
            goto label_1676d8;
        }
    }
    ctx->pc = 0x167540u;
    // 0x167540: 0xc04db0c  jal         func_136C30
    ctx->pc = 0x167540u;
    SET_GPR_U32(ctx, 31, 0x167548u);
    ctx->pc = 0x167544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167540u;
            // 0x167544: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167548u; }
        if (ctx->pc != 0x167548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167548u; }
        if (ctx->pc != 0x167548u) { return; }
    }
    ctx->pc = 0x167548u;
label_167548:
    // 0x167548: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x167548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x16754c: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x16754Cu;
    SET_GPR_U32(ctx, 31, 0x167554u);
    ctx->pc = 0x167550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16754Cu;
            // 0x167550: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167554u; }
        if (ctx->pc != 0x167554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167554u; }
        if (ctx->pc != 0x167554u) { return; }
    }
    ctx->pc = 0x167554u;
label_167554:
    // 0x167554: 0xc6150028  lwc1        $f21, 0x28($s0)
    ctx->pc = 0x167554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x167558: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x167558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16755c: 0x0  nop
    ctx->pc = 0x16755cu;
    // NOP
    // 0x167560: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x167560u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167564: 0x0  nop
    ctx->pc = 0x167564u;
    // NOP
    // 0x167568: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x167568u;
    {
        const bool branch_taken_0x167568 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16756Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167568u;
            // 0x16756c: 0x3c0243c8  lui         $v0, 0x43C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167568) {
            ctx->pc = 0x167574u;
            goto label_167574;
        }
    }
    ctx->pc = 0x167570u;
    // 0x167570: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x167570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_167574:
    // 0x167574: 0x0  nop
    ctx->pc = 0x167574u;
    // NOP
    // 0x167578: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x167578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x16757c: 0xc0516cc  jal         func_145B30
    ctx->pc = 0x16757Cu;
    SET_GPR_U32(ctx, 31, 0x167584u);
    ctx->pc = 0x167580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16757Cu;
            // 0x167580: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145B30u;
    if (runtime->hasFunction(0x145B30u)) {
        auto targetFn = runtime->lookupFunction(0x145B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167584u; }
        if (ctx->pc != 0x167584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetDirFromCamera__FPfPf_0x145b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167584u; }
        if (ctx->pc != 0x167584u) { return; }
    }
    ctx->pc = 0x167584u;
label_167584:
    // 0x167584: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x167584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167588: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x167588u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16758c: 0x0  nop
    ctx->pc = 0x16758cu;
    // NOP
    // 0x167590: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x167590u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167594: 0x0  nop
    ctx->pc = 0x167594u;
    // NOP
    // 0x167598: 0x45010015  bc1t        . + 4 + (0x15 << 2)
    ctx->pc = 0x167598u;
    {
        const bool branch_taken_0x167598 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16759Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167598u;
            // 0x16759c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167598) {
            ctx->pc = 0x1675F0u;
            goto label_1675f0;
        }
    }
    ctx->pc = 0x1675A0u;
    // 0x1675a0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1675a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1675a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1675a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1675a8: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1675A8u;
    SET_GPR_U32(ctx, 31, 0x1675B0u);
    ctx->pc = 0x1675ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1675A8u;
            // 0x1675ac: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1675B0u; }
        if (ctx->pc != 0x1675B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1675B0u; }
        if (ctx->pc != 0x1675B0u) { return; }
    }
    ctx->pc = 0x1675B0u;
label_1675b0:
    // 0x1675b0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1675b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1675b4: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1675B4u;
    SET_GPR_U32(ctx, 31, 0x1675BCu);
    ctx->pc = 0x1675B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1675B4u;
            // 0x1675b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1675BCu; }
        if (ctx->pc != 0x1675BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1675BCu; }
        if (ctx->pc != 0x1675BCu) { return; }
    }
    ctx->pc = 0x1675BCu;
label_1675bc:
    // 0x1675bc: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1675bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1675c0: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1675C0u;
    SET_GPR_U32(ctx, 31, 0x1675C8u);
    ctx->pc = 0x1675C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1675C0u;
            // 0x1675c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1675C8u; }
        if (ctx->pc != 0x1675C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1675C8u; }
        if (ctx->pc != 0x1675C8u) { return; }
    }
    ctx->pc = 0x1675C8u;
label_1675c8:
    // 0x1675c8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1675c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1675cc: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x1675CCu;
    SET_GPR_U32(ctx, 31, 0x1675D4u);
    ctx->pc = 0x1675D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1675CCu;
            // 0x1675d0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1675D4u; }
        if (ctx->pc != 0x1675D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1675D4u; }
        if (ctx->pc != 0x1675D4u) { return; }
    }
    ctx->pc = 0x1675D4u;
label_1675d4:
    // 0x1675d4: 0xc60c002c  lwc1        $f12, 0x2C($s0)
    ctx->pc = 0x1675d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1675d8: 0xc047964  jal         func_11E590
    ctx->pc = 0x1675D8u;
    SET_GPR_U32(ctx, 31, 0x1675E0u);
    ctx->pc = 0x1675DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1675D8u;
            // 0x1675dc: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1675E0u; }
        if (ctx->pc != 0x1675E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1675E0u; }
        if (ctx->pc != 0x1675E0u) { return; }
    }
    ctx->pc = 0x1675E0u;
label_1675e0:
    // 0x1675e0: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x1675e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1675e4: 0x0  nop
    ctx->pc = 0x1675e4u;
    // NOP
    // 0x1675e8: 0x45010038  bc1t        . + 4 + (0x38 << 2)
    ctx->pc = 0x1675E8u;
    {
        const bool branch_taken_0x1675e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1675e8) {
            ctx->pc = 0x1676CCu;
            goto label_1676cc;
        }
    }
    ctx->pc = 0x1675F0u;
label_1675f0:
    // 0x1675f0: 0xc0516d0  jal         func_145B40
    ctx->pc = 0x1675F0u;
    SET_GPR_U32(ctx, 31, 0x1675F8u);
    ctx->pc = 0x1675F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1675F0u;
            // 0x1675f4: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145B40u;
    if (runtime->hasFunction(0x145B40u)) {
        auto targetFn = runtime->lookupFunction(0x145B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1675F8u; }
        if (ctx->pc != 0x1675F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetCameraPos__FPf_0x145b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1675F8u; }
        if (ctx->pc != 0x1675F8u) { return; }
    }
    ctx->pc = 0x1675F8u;
label_1675f8:
    // 0x1675f8: 0xc0516d8  jal         func_145B60
    ctx->pc = 0x1675F8u;
    SET_GPR_U32(ctx, 31, 0x167600u);
    ctx->pc = 0x1675FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1675F8u;
            // 0x1675fc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145B60u;
    if (runtime->hasFunction(0x145B60u)) {
        auto targetFn = runtime->lookupFunction(0x145B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167600u; }
        if (ctx->pc != 0x167600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetCameraPose__FPA4_f_0x145b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167600u; }
        if (ctx->pc != 0x167600u) { return; }
    }
    ctx->pc = 0x167600u;
label_167600:
    // 0x167600: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x167600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x167604: 0xc041be0  jal         func_106F80
    ctx->pc = 0x167604u;
    SET_GPR_U32(ctx, 31, 0x16760Cu);
    ctx->pc = 0x167608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167604u;
            // 0x167608: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16760Cu; }
        if (ctx->pc != 0x16760Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16760Cu; }
        if (ctx->pc != 0x16760Cu) { return; }
    }
    ctx->pc = 0x16760Cu;
label_16760c:
    // 0x16760c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x16760cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x167610: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x167610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x167614: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x167614u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x167618: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x167618u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x16761c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16761cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167620: 0xc041c4a  jal         func_107128
    ctx->pc = 0x167620u;
    SET_GPR_U32(ctx, 31, 0x167628u);
    ctx->pc = 0x167624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167620u;
            // 0x167624: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167628u; }
        if (ctx->pc != 0x167628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167628u; }
        if (ctx->pc != 0x167628u) { return; }
    }
    ctx->pc = 0x167628u;
label_167628:
    // 0x167628: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x167628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16762c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x16762cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x167630: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x167630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167634: 0xc041c4a  jal         func_107128
    ctx->pc = 0x167634u;
    SET_GPR_U32(ctx, 31, 0x16763Cu);
    ctx->pc = 0x167638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167634u;
            // 0x167638: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16763Cu; }
        if (ctx->pc != 0x16763Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16763Cu; }
        if (ctx->pc != 0x16763Cu) { return; }
    }
    ctx->pc = 0x16763Cu;
label_16763c:
    // 0x16763c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x16763cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x167640: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x167640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x167644: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x167644u;
    SET_GPR_U32(ctx, 31, 0x16764Cu);
    ctx->pc = 0x167648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167644u;
            // 0x167648: 0x27a60140  addiu       $a2, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16764Cu; }
        if (ctx->pc != 0x16764Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16764Cu; }
        if (ctx->pc != 0x16764Cu) { return; }
    }
    ctx->pc = 0x16764Cu;
label_16764c:
    // 0x16764c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x16764cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x167650: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x167650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x167654: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x167654u;
    SET_GPR_U32(ctx, 31, 0x16765Cu);
    ctx->pc = 0x167658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167654u;
            // 0x167658: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16765Cu; }
        if (ctx->pc != 0x16765Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16765Cu; }
        if (ctx->pc != 0x16765Cu) { return; }
    }
    ctx->pc = 0x16765Cu;
label_16765c:
    // 0x16765c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x16765cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x167660: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x167660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x167664: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x167664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x167668: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x167668u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16766c: 0xc0b7ac0  jal         func_2DEB00
    ctx->pc = 0x16766Cu;
    SET_GPR_U32(ctx, 31, 0x167674u);
    ctx->pc = 0x167670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16766Cu;
            // 0x167670: 0x27a80150  addiu       $t0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DEB00u;
    if (runtime->hasFunction(0x2DEB00u)) {
        auto targetFn = runtime->lookupFunction(0x2DEB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167674u; }
        if (ctx->pc != 0x167674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IntersectionBox__FPfPfP9mgVu0FBOXPA4_fPA4_f_0x2deb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167674u; }
        if (ctx->pc != 0x167674u) { return; }
    }
    ctx->pc = 0x167674u;
label_167674:
    // 0x167674: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x167674u;
    {
        const bool branch_taken_0x167674 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x167678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167674u;
            // 0x167678: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167674) {
            ctx->pc = 0x1676CCu;
            goto label_1676cc;
        }
    }
    ctx->pc = 0x16767Cu;
    // 0x16767c: 0xc04c018  jal         func_130060
    ctx->pc = 0x16767Cu;
    SET_GPR_U32(ctx, 31, 0x167684u);
    ctx->pc = 0x167680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16767Cu;
            // 0x167680: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167684u; }
        if (ctx->pc != 0x167684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167684u; }
        if (ctx->pc != 0x167684u) { return; }
    }
    ctx->pc = 0x167684u;
label_167684:
    // 0x167684: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x167684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x167688: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x167688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x16768c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16768cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x167690: 0x0  nop
    ctx->pc = 0x167690u;
    // NOP
    // 0x167694: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x167694u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x167698: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x167698u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16769c: 0x0  nop
    ctx->pc = 0x16769cu;
    // NOP
    // 0x1676a0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1676A0u;
    {
        const bool branch_taken_0x1676a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1676a0) {
            ctx->pc = 0x1676CCu;
            goto label_1676cc;
        }
    }
    ctx->pc = 0x1676A8u;
    // 0x1676a8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1676A8u;
    {
        const bool branch_taken_0x1676a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1676a8) {
            ctx->pc = 0x1676C0u;
            goto label_1676c0;
        }
    }
    ctx->pc = 0x1676B0u;
    // 0x1676b0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1676b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1676b4: 0x0  nop
    ctx->pc = 0x1676b4u;
    // NOP
    // 0x1676b8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1676B8u;
    {
        const bool branch_taken_0x1676b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1676b8) {
            ctx->pc = 0x1676CCu;
            goto label_1676cc;
        }
    }
    ctx->pc = 0x1676C0u;
label_1676c0:
    // 0x1676c0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1676c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1676c4: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1676c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1676c8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1676c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1676cc:
    // 0x1676cc: 0x0  nop
    ctx->pc = 0x1676ccu;
    // NOP
    // 0x1676d0: 0xc04db18  jal         func_136C60
    ctx->pc = 0x1676D0u;
    SET_GPR_U32(ctx, 31, 0x1676D8u);
    ctx->pc = 0x1676D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1676D0u;
            // 0x1676d4: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C60u;
    if (runtime->hasFunction(0x136C60u)) {
        auto targetFn = runtime->lookupFunction(0x136C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1676D8u; }
        if (ctx->pc != 0x1676D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteReference__8mgCFrameFv_0x136c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1676D8u; }
        if (ctx->pc != 0x1676D8u) { return; }
    }
    ctx->pc = 0x1676D8u;
label_1676d8:
    // 0x1676d8: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x1676D8u;
    SET_GPR_U32(ctx, 31, 0x1676E0u);
    ctx->pc = 0x1676DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1676D8u;
            // 0x1676dc: 0x268402b0  addiu       $a0, $s4, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1676E0u; }
        if (ctx->pc != 0x1676E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1676E0u; }
        if (ctx->pc != 0x1676E0u) { return; }
    }
    ctx->pc = 0x1676E0u;
label_1676e0:
    // 0x1676e0: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x1676E0u;
    {
        const bool branch_taken_0x1676e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1676E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1676E0u;
            // 0x1676e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1676e0) {
            ctx->pc = 0x16752Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16752c;
        }
    }
    ctx->pc = 0x1676E8u;
label_1676e8:
    // 0x1676e8: 0xc0a7638  jal         func_29D8E0
    ctx->pc = 0x1676E8u;
    SET_GPR_U32(ctx, 31, 0x1676F0u);
    ctx->pc = 0x1676ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1676E8u;
            // 0x1676ec: 0x268402b0  addiu       $a0, $s4, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8E0u;
    if (runtime->hasFunction(0x29D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1676F0u; }
        if (ctx->pc != 0x1676F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnd__14CFuncPointMngrFv_0x29d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1676F0u; }
        if (ctx->pc != 0x1676F0u) { return; }
    }
    ctx->pc = 0x1676F0u;
label_1676f0:
    // 0x1676f0: 0xe6770004  swc1        $f23, 0x4($s3)
    ctx->pc = 0x1676f0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1676f4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1676f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1676f8: 0xe6740008  swc1        $f20, 0x8($s3)
    ctx->pc = 0x1676f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_1676fc:
    // 0x1676fc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1676fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x167700: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x167700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x167704: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x167704u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x167708: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x167708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x16770c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x16770cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167710: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x167710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x167714: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x167714u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167718: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x167718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16771c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16771cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167720: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x167720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167724: 0x3e00008  jr          $ra
    ctx->pc = 0x167724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167724u;
            // 0x167728: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16772Cu;
}
