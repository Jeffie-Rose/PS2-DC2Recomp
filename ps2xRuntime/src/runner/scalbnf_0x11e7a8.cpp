#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scalbnf
// Address: 0x11e7a8 - 0x11e908
void scalbnf_0x11e7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scalbnf_0x11e7a8");
#endif

    switch (ctx->pc) {
        case 0x11e8c4u: goto label_11e8c4;
        default: break;
    }

    ctx->pc = 0x11e7a8u;

    // 0x11e7a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11e7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11e7ac: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x11e7acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11e7b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11e7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11e7b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11e7b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e7b8: 0x3c077f80  lui         $a3, 0x7F80
    ctx->pc = 0x11e7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32640 << 16));
    // 0x11e7bc: 0xc71024  and         $v0, $a2, $a3
    ctx->pc = 0x11e7bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x11e7c0: 0x21dc3  sra         $v1, $v0, 23
    ctx->pc = 0x11e7c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 23));
    // 0x11e7c4: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x11E7C4u;
    {
        const bool branch_taken_0x11e7c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E7C4u;
            // 0x11e7c8: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7c4) {
            ctx->pc = 0x11E838u;
            goto label_11e838;
        }
    }
    ctx->pc = 0x11E7CCu;
    // 0x11e7cc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11e7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11e7d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e7d4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11e7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11e7d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E7D8u;
    {
        const bool branch_taken_0x11e7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11E7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E7D8u;
            // 0x11e7dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7d8) {
            ctx->pc = 0x11E7F0u;
            goto label_11e7f0;
        }
    }
    ctx->pc = 0x11E7E0u;
    // 0x11e7e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x11e7e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e7e4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x11E7E4u;
    {
        const bool branch_taken_0x11e7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E7E4u;
            // 0x11e7e8: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7e4) {
            ctx->pc = 0x11E900u;
            goto label_11e900;
        }
    }
    ctx->pc = 0x11E7ECu;
    // 0x11e7ec: 0x0  nop
    ctx->pc = 0x11e7ecu;
    // NOP
label_11e7f0:
    // 0x11e7f0: 0x3c014c00  lui         $at, 0x4C00
    ctx->pc = 0x11e7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19456 << 16));
    // 0x11e7f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e7f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e7f8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x11e7f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e7fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x11e7fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11e800: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x11e800u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x11e804: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x11e804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e808: 0xa71824  and         $v1, $a1, $a3
    ctx->pc = 0x11e808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x11e80c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11e810: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x11e810u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x11e814: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x11e814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15536);
    // 0x11e818: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x11e818u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11e81c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11E81Cu;
    {
        const bool branch_taken_0x11e81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E81Cu;
            // 0x11e820: 0x2463ffe7  addiu       $v1, $v1, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e81c) {
            ctx->pc = 0x11E838u;
            goto label_11e838;
        }
    }
    ctx->pc = 0x11E824u;
    // 0x11e824: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x11e824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x11e828: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x11e828u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x11e82c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e82cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e830: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x11E830u;
    {
        const bool branch_taken_0x11e830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E830u;
            // 0x11e834: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e830) {
            ctx->pc = 0x11E8F8u;
            goto label_11e8f8;
        }
    }
    ctx->pc = 0x11E838u;
label_11e838:
    // 0x11e838: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x11e838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x11e83c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E83Cu;
    {
        const bool branch_taken_0x11e83c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11E840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E83Cu;
            // 0x11e840: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e83c) {
            ctx->pc = 0x11E850u;
            goto label_11e850;
        }
    }
    ctx->pc = 0x11E844u;
    // 0x11e844: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x11e844u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x11e848: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x11E848u;
    {
        const bool branch_taken_0x11e848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E848u;
            // 0x11e84c: 0x46021000  add.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e848) {
            ctx->pc = 0x11E8F8u;
            goto label_11e8f8;
        }
    }
    ctx->pc = 0x11E850u;
label_11e850:
    // 0x11e850: 0x286200ff  slti        $v0, $v1, 0xFF
    ctx->pc = 0x11e850u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x11e854: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x11E854u;
    {
        const bool branch_taken_0x11e854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e854) {
            ctx->pc = 0x11E8ACu;
            goto label_11e8ac;
        }
    }
    ctx->pc = 0x11E85Cu;
    // 0x11e85c: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11E85Cu;
    {
        const bool branch_taken_0x11e85c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11E860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E85Cu;
            // 0x11e860: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e85c) {
            ctx->pc = 0x11E888u;
            goto label_11e888;
        }
    }
    ctx->pc = 0x11E864u;
    // 0x11e864: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x11e864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x11e868: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x11e868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x11e86c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e870: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11e870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11e874: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x11e874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11e878: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x11e878u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e87c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11E87Cu;
    {
        const bool branch_taken_0x11e87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E87Cu;
            // 0x11e880: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e87c) {
            ctx->pc = 0x11E900u;
            goto label_11e900;
        }
    }
    ctx->pc = 0x11E884u;
    // 0x11e884: 0x0  nop
    ctx->pc = 0x11e884u;
    // NOP
label_11e888:
    // 0x11e888: 0x2862ffe8  slti        $v0, $v1, -0x18
    ctx->pc = 0x11e888u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967272) ? 1 : 0);
    // 0x11e88c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x11E88Cu;
    {
        const bool branch_taken_0x11e88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E88Cu;
            // 0x11e890: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e88c) {
            ctx->pc = 0x11E8CCu;
            goto label_11e8cc;
        }
    }
    ctx->pc = 0x11E894u;
    // 0x11e894: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x11e894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x11e898: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x11e898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x11e89c: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x11e89cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x11e8a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11e8a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11e8a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11E8A4u;
    {
        const bool branch_taken_0x11e8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e8a4) {
            ctx->pc = 0x11E8B8u;
            goto label_11e8b8;
        }
    }
    ctx->pc = 0x11E8ACu;
label_11e8ac:
    // 0x11e8ac: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x11e8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x11e8b0: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x11e8b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x11e8b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x11e8b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_11e8b8:
    // 0x11e8b8: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x11e8b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x11e8bc: 0xc047958  jal         func_11E560
    ctx->pc = 0x11E8BCu;
    SET_GPR_U32(ctx, 31, 0x11E8C4u);
    ctx->pc = 0x11E8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E8BCu;
            // 0x11e8c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E560u;
    if (runtime->hasFunction(0x11E560u)) {
        auto targetFn = runtime->lookupFunction(0x11E560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E8C4u; }
        if (ctx->pc != 0x11E8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        copysignf_0x11e560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E8C4u; }
        if (ctx->pc != 0x11E8C4u) { return; }
    }
    ctx->pc = 0x11E8C4u;
label_11e8c4:
    // 0x11e8c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11E8C4u;
    {
        const bool branch_taken_0x11e8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E8C4u;
            // 0x11e8c8: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e8c4) {
            ctx->pc = 0x11E8F8u;
            goto label_11e8f8;
        }
    }
    ctx->pc = 0x11E8CCu;
label_11e8cc:
    // 0x11e8cc: 0x24630019  addiu       $v1, $v1, 0x19
    ctx->pc = 0x11e8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
    // 0x11e8d0: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x11e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x11e8d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11e8d8: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x11e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x11e8dc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x11e8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x11e8e0: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x11e8e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x11e8e4: 0x3c013300  lui         $at, 0x3300
    ctx->pc = 0x11e8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13056 << 16));
    // 0x11e8e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e8e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e8ec: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x11e8ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e8f0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x11e8f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x11e8f4: 0x0  nop
    ctx->pc = 0x11e8f4u;
    // NOP
label_11e8f8:
    // 0x11e8f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11e8f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e8fc: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x11e8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_11e900:
    // 0x11e900: 0x3e00008  jr          $ra
    ctx->pc = 0x11E900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E900u;
            // 0x11e904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E908u;
}
