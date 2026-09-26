#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: nget__7CRandomFv
// Address: 0x31d450 - 0x31d760
void nget__7CRandomFv_0x31d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("nget__7CRandomFv_0x31d450");
#endif

    switch (ctx->pc) {
        case 0x31d468u: goto label_31d468;
        case 0x31d6f0u: goto label_31d6f0;
        default: break;
    }

    ctx->pc = 0x31d450u;

    // 0x31d450: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31d450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d454: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31d454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31d458: 0x3c054f80  lui         $a1, 0x4F80
    ctx->pc = 0x31d458u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20352 << 16));
    // 0x31d45c: 0x3c035d58  lui         $v1, 0x5D58
    ctx->pc = 0x31d45cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)23896 << 16));
    // 0x31d460: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x31d460u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d464: 0x34638b65  ori         $v1, $v1, 0x8B65
    ctx->pc = 0x31d464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35685);
label_31d468:
    // 0x31d468: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x31d468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31d46c: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x31d46cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31d470: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31d470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31d474: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31d474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31d478: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x31d478u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31d47c: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D47Cu;
    {
        const bool branch_taken_0x31d47c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x31D480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D47Cu;
            // 0x31d480: 0x73042  srl         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d47c) {
            ctx->pc = 0x31D490u;
            goto label_31d490;
        }
    }
    ctx->pc = 0x31D484u;
    // 0x31d484: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x31d484u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d488: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31D488u;
    {
        const bool branch_taken_0x31d488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D488u;
            // 0x31d48c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d488) {
            ctx->pc = 0x31D4A8u;
            goto label_31d4a8;
        }
    }
    ctx->pc = 0x31D490u;
label_31d490:
    // 0x31d490: 0x30e50001  andi        $a1, $a3, 0x1
    ctx->pc = 0x31d490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x31d494: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x31d494u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x31d498: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x31d498u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d49c: 0x0  nop
    ctx->pc = 0x31d49cu;
    // NOP
    // 0x31d4a0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x31d4a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31d4a4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x31d4a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_31d4a8:
    // 0x31d4a8: 0x0  nop
    ctx->pc = 0x31d4a8u;
    // NOP
    // 0x31d4ac: 0x0  nop
    ctx->pc = 0x31d4acu;
    // NOP
    // 0x31d4b0: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x31d4b0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x31d4b4: 0xe32818  mult        $a1, $a3, $v1
    ctx->pc = 0x31d4b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31d4b8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31d4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31d4bc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31d4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31d4c0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x31d4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31d4c4: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D4C4u;
    {
        const bool branch_taken_0x31d4c4 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x31D4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D4C4u;
            // 0x31d4c8: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d4c4) {
            ctx->pc = 0x31D4D8u;
            goto label_31d4d8;
        }
    }
    ctx->pc = 0x31D4CCu;
    // 0x31d4cc: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x31d4ccu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d4d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31D4D0u;
    {
        const bool branch_taken_0x31d4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D4D0u;
            // 0x31d4d4: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d4d0) {
            ctx->pc = 0x31D4F4u;
            goto label_31d4f4;
        }
    }
    ctx->pc = 0x31D4D8u;
label_31d4d8:
    // 0x31d4d8: 0x73042  srl         $a2, $a3, 1
    ctx->pc = 0x31d4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x31d4dc: 0x30e50001  andi        $a1, $a3, 0x1
    ctx->pc = 0x31d4dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x31d4e0: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x31d4e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x31d4e4: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x31d4e4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d4e8: 0x0  nop
    ctx->pc = 0x31d4e8u;
    // NOP
    // 0x31d4ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x31d4ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31d4f0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x31d4f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_31d4f4:
    // 0x31d4f4: 0x0  nop
    ctx->pc = 0x31d4f4u;
    // NOP
    // 0x31d4f8: 0x0  nop
    ctx->pc = 0x31d4f8u;
    // NOP
    // 0x31d4fc: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x31d4fcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x31d500: 0xe32818  mult        $a1, $a3, $v1
    ctx->pc = 0x31d500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31d504: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31d504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31d508: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31d508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31d50c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x31d50cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31d510: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D510u;
    {
        const bool branch_taken_0x31d510 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x31D514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D510u;
            // 0x31d514: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d510) {
            ctx->pc = 0x31D524u;
            goto label_31d524;
        }
    }
    ctx->pc = 0x31D518u;
    // 0x31d518: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x31d518u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d51c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31D51Cu;
    {
        const bool branch_taken_0x31d51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D51Cu;
            // 0x31d520: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d51c) {
            ctx->pc = 0x31D540u;
            goto label_31d540;
        }
    }
    ctx->pc = 0x31D524u;
label_31d524:
    // 0x31d524: 0x73042  srl         $a2, $a3, 1
    ctx->pc = 0x31d524u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x31d528: 0x30e50001  andi        $a1, $a3, 0x1
    ctx->pc = 0x31d528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x31d52c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x31d52cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x31d530: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x31d530u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d534: 0x0  nop
    ctx->pc = 0x31d534u;
    // NOP
    // 0x31d538: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x31d538u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31d53c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x31d53cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_31d540:
    // 0x31d540: 0x0  nop
    ctx->pc = 0x31d540u;
    // NOP
    // 0x31d544: 0x0  nop
    ctx->pc = 0x31d544u;
    // NOP
    // 0x31d548: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x31d548u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x31d54c: 0xe32818  mult        $a1, $a3, $v1
    ctx->pc = 0x31d54cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31d550: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31d550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31d554: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31d554u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31d558: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x31d558u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31d55c: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D55Cu;
    {
        const bool branch_taken_0x31d55c = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x31D560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D55Cu;
            // 0x31d560: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d55c) {
            ctx->pc = 0x31D570u;
            goto label_31d570;
        }
    }
    ctx->pc = 0x31D564u;
    // 0x31d564: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x31d564u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d568: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31D568u;
    {
        const bool branch_taken_0x31d568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D568u;
            // 0x31d56c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d568) {
            ctx->pc = 0x31D58Cu;
            goto label_31d58c;
        }
    }
    ctx->pc = 0x31D570u;
label_31d570:
    // 0x31d570: 0x73042  srl         $a2, $a3, 1
    ctx->pc = 0x31d570u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x31d574: 0x30e50001  andi        $a1, $a3, 0x1
    ctx->pc = 0x31d574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x31d578: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x31d578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x31d57c: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x31d57cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d580: 0x0  nop
    ctx->pc = 0x31d580u;
    // NOP
    // 0x31d584: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x31d584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31d588: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x31d588u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_31d58c:
    // 0x31d58c: 0x0  nop
    ctx->pc = 0x31d58cu;
    // NOP
    // 0x31d590: 0x0  nop
    ctx->pc = 0x31d590u;
    // NOP
    // 0x31d594: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x31d594u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x31d598: 0xe32818  mult        $a1, $a3, $v1
    ctx->pc = 0x31d598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31d59c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31d59cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31d5a0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31d5a4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x31d5a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31d5a8: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D5A8u;
    {
        const bool branch_taken_0x31d5a8 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x31D5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D5A8u;
            // 0x31d5ac: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d5a8) {
            ctx->pc = 0x31D5BCu;
            goto label_31d5bc;
        }
    }
    ctx->pc = 0x31D5B0u;
    // 0x31d5b0: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x31d5b0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d5b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31D5B4u;
    {
        const bool branch_taken_0x31d5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D5B4u;
            // 0x31d5b8: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d5b4) {
            ctx->pc = 0x31D5D8u;
            goto label_31d5d8;
        }
    }
    ctx->pc = 0x31D5BCu;
label_31d5bc:
    // 0x31d5bc: 0x73042  srl         $a2, $a3, 1
    ctx->pc = 0x31d5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x31d5c0: 0x30e50001  andi        $a1, $a3, 0x1
    ctx->pc = 0x31d5c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x31d5c4: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x31d5c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x31d5c8: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x31d5c8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d5cc: 0x0  nop
    ctx->pc = 0x31d5ccu;
    // NOP
    // 0x31d5d0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x31d5d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31d5d4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x31d5d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_31d5d8:
    // 0x31d5d8: 0x0  nop
    ctx->pc = 0x31d5d8u;
    // NOP
    // 0x31d5dc: 0x0  nop
    ctx->pc = 0x31d5dcu;
    // NOP
    // 0x31d5e0: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x31d5e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x31d5e4: 0xe32818  mult        $a1, $a3, $v1
    ctx->pc = 0x31d5e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31d5e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31d5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31d5ec: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31d5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31d5f0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x31d5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31d5f4: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D5F4u;
    {
        const bool branch_taken_0x31d5f4 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x31D5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D5F4u;
            // 0x31d5f8: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d5f4) {
            ctx->pc = 0x31D608u;
            goto label_31d608;
        }
    }
    ctx->pc = 0x31D5FCu;
    // 0x31d5fc: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x31d5fcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d600: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31D600u;
    {
        const bool branch_taken_0x31d600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D600u;
            // 0x31d604: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d600) {
            ctx->pc = 0x31D624u;
            goto label_31d624;
        }
    }
    ctx->pc = 0x31D608u;
label_31d608:
    // 0x31d608: 0x73042  srl         $a2, $a3, 1
    ctx->pc = 0x31d608u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x31d60c: 0x30e50001  andi        $a1, $a3, 0x1
    ctx->pc = 0x31d60cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x31d610: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x31d610u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x31d614: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x31d614u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d618: 0x0  nop
    ctx->pc = 0x31d618u;
    // NOP
    // 0x31d61c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x31d61cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31d620: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x31d620u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_31d624:
    // 0x31d624: 0x0  nop
    ctx->pc = 0x31d624u;
    // NOP
    // 0x31d628: 0x0  nop
    ctx->pc = 0x31d628u;
    // NOP
    // 0x31d62c: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x31d62cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x31d630: 0xe32818  mult        $a1, $a3, $v1
    ctx->pc = 0x31d630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31d634: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31d634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31d638: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31d638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31d63c: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x31d63cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31d640: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D640u;
    {
        const bool branch_taken_0x31d640 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x31D644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D640u;
            // 0x31d644: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d640) {
            ctx->pc = 0x31D654u;
            goto label_31d654;
        }
    }
    ctx->pc = 0x31D648u;
    // 0x31d648: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x31d648u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d64c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31D64Cu;
    {
        const bool branch_taken_0x31d64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D64Cu;
            // 0x31d650: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d64c) {
            ctx->pc = 0x31D670u;
            goto label_31d670;
        }
    }
    ctx->pc = 0x31D654u;
label_31d654:
    // 0x31d654: 0x73042  srl         $a2, $a3, 1
    ctx->pc = 0x31d654u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
    // 0x31d658: 0x30e50001  andi        $a1, $a3, 0x1
    ctx->pc = 0x31d658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x31d65c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x31d65cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x31d660: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x31d660u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d664: 0x0  nop
    ctx->pc = 0x31d664u;
    // NOP
    // 0x31d668: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x31d668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31d66c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x31d66cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_31d670:
    // 0x31d670: 0x0  nop
    ctx->pc = 0x31d670u;
    // NOP
    // 0x31d674: 0x0  nop
    ctx->pc = 0x31d674u;
    // NOP
    // 0x31d678: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x31d678u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x31d67c: 0xe32818  mult        $a1, $a3, $v1
    ctx->pc = 0x31d67cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x31d680: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x31d680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31d684: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x31d684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x31d688: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x31d688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31d68c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D68Cu;
    {
        const bool branch_taken_0x31d68c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x31D690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D68Cu;
            // 0x31d690: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d68c) {
            ctx->pc = 0x31D6A0u;
            goto label_31d6a0;
        }
    }
    ctx->pc = 0x31D694u;
    // 0x31d694: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x31d694u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d698: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31D698u;
    {
        const bool branch_taken_0x31d698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D698u;
            // 0x31d69c: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d698) {
            ctx->pc = 0x31D6BCu;
            goto label_31d6bc;
        }
    }
    ctx->pc = 0x31D6A0u;
label_31d6a0:
    // 0x31d6a0: 0x53042  srl         $a2, $a1, 1
    ctx->pc = 0x31d6a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x31d6a4: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x31d6a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x31d6a8: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x31d6a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x31d6ac: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x31d6acu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d6b0: 0x0  nop
    ctx->pc = 0x31d6b0u;
    // NOP
    // 0x31d6b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x31d6b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x31d6b8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x31d6b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_31d6bc:
    // 0x31d6bc: 0x0  nop
    ctx->pc = 0x31d6bcu;
    // NOP
    // 0x31d6c0: 0x0  nop
    ctx->pc = 0x31d6c0u;
    // NOP
    // 0x31d6c4: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x31d6c4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x31d6c8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x31d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x31d6cc: 0x28450004  slti        $a1, $v0, 0x4
    ctx->pc = 0x31d6ccu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x31d6d0: 0x14a0ff65  bnez        $a1, . + 4 + (-0x9B << 2)
    ctx->pc = 0x31D6D0u;
    {
        const bool branch_taken_0x31d6d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D6D0u;
            // 0x31d6d4: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d6d0) {
            ctx->pc = 0x31D468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31d468;
        }
    }
    ctx->pc = 0x31D6D8u;
    // 0x31d6d8: 0x2841000c  slti        $at, $v0, 0xC
    ctx->pc = 0x31d6d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x31d6dc: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
    ctx->pc = 0x31D6DCu;
    {
        const bool branch_taken_0x31d6dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D6DCu;
            // 0x31d6e0: 0x3c034f80  lui         $v1, 0x4F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20352 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d6dc) {
            ctx->pc = 0x31D74Cu;
            goto label_31d74c;
        }
    }
    ctx->pc = 0x31D6E4u;
    // 0x31d6e4: 0x3c055d58  lui         $a1, 0x5D58
    ctx->pc = 0x31d6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23896 << 16));
    // 0x31d6e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x31d6e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31d6ec: 0x34a68b65  ori         $a2, $a1, 0x8B65
    ctx->pc = 0x31d6ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)35685);
label_31d6f0:
    // 0x31d6f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31d6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31d6f4: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x31d6f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x31d6f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31d6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31d6fc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x31d6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x31d700: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31d700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31d704: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31D704u;
    {
        const bool branch_taken_0x31d704 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x31D708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D704u;
            // 0x31d708: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d704) {
            ctx->pc = 0x31D718u;
            goto label_31d718;
        }
    }
    ctx->pc = 0x31D70Cu;
    // 0x31d70c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x31d70cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d710: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x31D710u;
    {
        const bool branch_taken_0x31d710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31D714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D710u;
            // 0x31d714: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d710) {
            ctx->pc = 0x31D730u;
            goto label_31d730;
        }
    }
    ctx->pc = 0x31D718u;
label_31d718:
    // 0x31d718: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31d718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31d71c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x31d71cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x31d720: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x31d720u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d724: 0x0  nop
    ctx->pc = 0x31d724u;
    // NOP
    // 0x31d728: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x31d728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31d72c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x31d72cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_31d730:
    // 0x31d730: 0x0  nop
    ctx->pc = 0x31d730u;
    // NOP
    // 0x31d734: 0x0  nop
    ctx->pc = 0x31d734u;
    // NOP
    // 0x31d738: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x31d738u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x31d73c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31d740: 0x2843000c  slti        $v1, $v0, 0xC
    ctx->pc = 0x31d740u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x31d744: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x31D744u;
    {
        const bool branch_taken_0x31d744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31D748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D744u;
            // 0x31d748: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31d744) {
            ctx->pc = 0x31D6F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31d6f0;
        }
    }
    ctx->pc = 0x31D74Cu;
label_31d74c:
    // 0x31d74c: 0x0  nop
    ctx->pc = 0x31d74cu;
    // NOP
    // 0x31d750: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x31d750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x31d754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x31d754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31d758: 0x3e00008  jr          $ra
    ctx->pc = 0x31D758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31D758u;
            // 0x31d75c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31D760u;
}
