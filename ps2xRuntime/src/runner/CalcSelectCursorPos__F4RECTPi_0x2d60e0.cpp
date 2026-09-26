#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcSelectCursorPos__F4RECTPi
// Address: 0x2d60e0 - 0x2d6198
void CalcSelectCursorPos__F4RECTPi_0x2d60e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcSelectCursorPos__F4RECTPi_0x2d60e0");
#endif

    ctx->pc = 0x2d60e0u;

    // 0x2d60e0: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x2d60e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d60e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d60e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d60e8: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2d60e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d60ec: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x2d60ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x2d60f0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2d60f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d60f4: 0x27a60000  addiu       $a2, $sp, 0x0
    ctx->pc = 0x2d60f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x2d60f8: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2d60f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d60fc: 0x34686667  ori         $t0, $v1, 0x6667
    ctx->pc = 0x2d60fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x2d6100: 0xe4c30000  swc1        $f3, 0x0($a2)
    ctx->pc = 0x2d6100u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2d6104: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x2d6104u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2d6108: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x2d6108u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2d610c: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x2d610cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x2d6110: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2d6110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6114: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2d6114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6118: 0x24890017  addiu       $t1, $a0, 0x17
    ctx->pc = 0x2d6118u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 23));
    // 0x2d611c: 0x2466ffd2  addiu       $a2, $v1, -0x2E
    ctx->pc = 0x2d611cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967250));
    // 0x2d6120: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2d6120u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2d6124: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x2d6124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2d6128: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2d6128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2d612c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2d612cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2d6130: 0x1040018  mult        $zero, $t0, $a0
    ctx->pc = 0x2d6130u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d6134: 0x43fc2  srl         $a3, $a0, 31
    ctx->pc = 0x2d6134u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x2d6138: 0x0  nop
    ctx->pc = 0x2d6138u;
    // NOP
    // 0x2d613c: 0x3010  mfhi        $a2
    ctx->pc = 0x2d613cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2d6140: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x2d6140u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2d6144: 0x1030018  mult        $zero, $t0, $v1
    ctx->pc = 0x2d6144u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2d6148: 0x618c3  sra         $v1, $a2, 3
    ctx->pc = 0x2d6148u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 3));
    // 0x2d614c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2d614cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2d6150: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x2d6150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2d6154: 0x2463ffe2  addiu       $v1, $v1, -0x1E
    ctx->pc = 0x2d6154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
    // 0x2d6158: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2d6158u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2d615c: 0x1810  mfhi        $v1
    ctx->pc = 0x2d615cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2d6160: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x2d6160u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d6164: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x2d6164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2d6168: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2d6168u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x2d616c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d616cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d6170: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x2d6170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2d6174: 0x2463ffe2  addiu       $v1, $v1, -0x1E
    ctx->pc = 0x2d6174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
    // 0x2d6178: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x2d6178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2d617c: 0x2484ffd7  addiu       $a0, $a0, -0x29
    ctx->pc = 0x2d617cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967255));
    // 0x2d6180: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x2d6180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x2d6184: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2d6184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2d6188: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2d6188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2d618c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x2d618cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x2d6190: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6190u;
            // 0x2d6194: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D6198u;
}
