#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetRectFontTex__FiPi
// Address: 0x2d4130 - 0x2d4278
void GetRectFontTex__FiPi_0x2d4130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetRectFontTex__FiPi_0x2d4130");
#endif

    ctx->pc = 0x2d4130u;

    // 0x2d4130: 0x3c0301f1  lui         $v1, 0x1F1
    ctx->pc = 0x2d4130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)497 << 16));
    // 0x2d4134: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d4134u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d4138: 0x24636880  addiu       $v1, $v1, 0x6880
    ctx->pc = 0x2d4138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26752));
    // 0x2d413c: 0x27a70000  addiu       $a3, $sp, 0x0
    ctx->pc = 0x2d413cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x2d4140: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x2d4140u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d4144: 0x4a1000a  bgez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2D4144u;
    {
        const bool branch_taken_0x2d4144 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2D4148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4144u;
            // 0x2d4148: 0x7ce30000  sq          $v1, 0x0($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4144) {
            ctx->pc = 0x2D4170u;
            goto label_2d4170;
        }
    }
    ctx->pc = 0x2D414Cu;
    // 0x2d414c: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x2d414cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d4150: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x2d4150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4154: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2d4154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4158: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x2d4158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d415c: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x2d415cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2d4160: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x2d4160u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2d4164: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2d4164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2d4168: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2D4168u;
    {
        const bool branch_taken_0x2d4168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D416Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4168u;
            // 0x2d416c: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4168) {
            ctx->pc = 0x2D4270u;
            goto label_2d4270;
        }
    }
    ctx->pc = 0x2D4170u;
label_2d4170:
    // 0x2d4170: 0x28a10260  slti        $at, $a1, 0x260
    ctx->pc = 0x2d4170u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)608) ? 1 : 0);
    // 0x2d4174: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4174u;
    {
        const bool branch_taken_0x2d4174 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4174u;
            // 0x2d4178: 0x28a104c0  slti        $at, $a1, 0x4C0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1216) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4174) {
            ctx->pc = 0x2D4184u;
            goto label_2d4184;
        }
    }
    ctx->pc = 0x2D417Cu;
    // 0x2d417c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2D417Cu;
    {
        const bool branch_taken_0x2d417c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D417Cu;
            // 0x2d4180: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d417c) {
            ctx->pc = 0x2D41ECu;
            goto label_2d41ec;
        }
    }
    ctx->pc = 0x2D4184u;
label_2d4184:
    // 0x2d4184: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D4184u;
    {
        const bool branch_taken_0x2d4184 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4184u;
            // 0x2d4188: 0x28a10720  slti        $at, $a1, 0x720 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1824) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4184) {
            ctx->pc = 0x2D419Cu;
            goto label_2d419c;
        }
    }
    ctx->pc = 0x2D418Cu;
    // 0x2d418c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d418cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4190: 0x24a5fda0  addiu       $a1, $a1, -0x260
    ctx->pc = 0x2d4190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966688));
    // 0x2d4194: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2D4194u;
    {
        const bool branch_taken_0x2d4194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4194u;
            // 0x2d4198: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4194) {
            ctx->pc = 0x2D41ECu;
            goto label_2d41ec;
        }
    }
    ctx->pc = 0x2D419Cu;
label_2d419c:
    // 0x2d419c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D419Cu;
    {
        const bool branch_taken_0x2d419c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D41A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D419Cu;
            // 0x2d41a0: 0x28a10980  slti        $at, $a1, 0x980 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2432) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d419c) {
            ctx->pc = 0x2D41B4u;
            goto label_2d41b4;
        }
    }
    ctx->pc = 0x2D41A4u;
    // 0x2d41a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d41a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d41a8: 0x24a5fb40  addiu       $a1, $a1, -0x4C0
    ctx->pc = 0x2d41a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966080));
    // 0x2d41ac: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2D41ACu;
    {
        const bool branch_taken_0x2d41ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D41B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D41ACu;
            // 0x2d41b0: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d41ac) {
            ctx->pc = 0x2D41ECu;
            goto label_2d41ec;
        }
    }
    ctx->pc = 0x2D41B4u;
label_2d41b4:
    // 0x2d41b4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D41B4u;
    {
        const bool branch_taken_0x2d41b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D41B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D41B4u;
            // 0x2d41b8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d41b4) {
            ctx->pc = 0x2D41C8u;
            goto label_2d41c8;
        }
    }
    ctx->pc = 0x2D41BCu;
    // 0x2d41bc: 0x24a5f8e0  addiu       $a1, $a1, -0x720
    ctx->pc = 0x2d41bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965472));
    // 0x2d41c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D41C0u;
    {
        const bool branch_taken_0x2d41c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D41C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D41C0u;
            // 0x2d41c4: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d41c0) {
            ctx->pc = 0x2D41ECu;
            goto label_2d41ec;
        }
    }
    ctx->pc = 0x2D41C8u;
label_2d41c8:
    // 0x2d41c8: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x2d41c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d41cc: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x2d41ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d41d0: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2d41d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d41d4: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x2d41d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d41d8: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x2d41d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2d41dc: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x2d41dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2d41e0: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2d41e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2d41e4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2D41E4u;
    {
        const bool branch_taken_0x2d41e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D41E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D41E4u;
            // 0x2d41e8: 0xe480000c  swc1        $f0, 0xC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d41e4) {
            ctx->pc = 0x2D4270u;
            goto label_2d4270;
        }
    }
    ctx->pc = 0x2D41ECu;
label_2d41ec:
    // 0x2d41ec: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D41ECu;
    {
        const bool branch_taken_0x2d41ec = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2D41F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D41ECu;
            // 0x2d41f0: 0x30a3001f  andi        $v1, $a1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d41ec) {
            ctx->pc = 0x2D4200u;
            goto label_2d4200;
        }
    }
    ctx->pc = 0x2D41F4u;
    // 0x2d41f4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D41F4u;
    {
        const bool branch_taken_0x2d41f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d41f4) {
            ctx->pc = 0x2D4200u;
            goto label_2d4200;
        }
    }
    ctx->pc = 0x2D41FCu;
    // 0x2d41fc: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x2d41fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_2d4200:
    // 0x2d4200: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2d4200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2d4204: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D4204u;
    {
        const bool branch_taken_0x2d4204 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2D4208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4204u;
            // 0x2d4208: 0x51943  sra         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4204) {
            ctx->pc = 0x2D4214u;
            goto label_2d4214;
        }
    }
    ctx->pc = 0x2D420Cu;
    // 0x2d420c: 0x24a3001f  addiu       $v1, $a1, 0x1F
    ctx->pc = 0x2d420cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x2d4210: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x2d4210u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
label_2d4214:
    // 0x2d4214: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x2d4214u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2d4218: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2d4218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2d421c: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x2d421cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x2d4220: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2d4220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2d4224: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x2d4224u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4228: 0x27a30000  addiu       $v1, $sp, 0x0
    ctx->pc = 0x2d4228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x2d422c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x2d422cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x2d4230: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2d4230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x2d4234: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x2d4234u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2d4238: 0x83880  sll         $a3, $t0, 2
    ctx->pc = 0x2d4238u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2d423c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x2d423cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2d4240: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2d4240u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2d4244: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x2d4244u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x2d4248: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2d4248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2d424c: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x2d424cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x2d4250: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2d4250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d4254: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2d4254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d4258: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2d4258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d425c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2d425cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4260: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x2d4260u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2d4264: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x2d4264u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2d4268: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2d4268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2d426c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2d426cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_2d4270:
    // 0x2d4270: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D4270u;
            // 0x2d4274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D4278u;
}
