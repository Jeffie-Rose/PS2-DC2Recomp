#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__16CSWordAfterImageFv
// Address: 0x1c2180 - 0x1c223c
void Step__16CSWordAfterImageFv_0x1c2180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__16CSWordAfterImageFv_0x1c2180");
#endif

    switch (ctx->pc) {
        case 0x1c21a8u: goto label_1c21a8;
        default: break;
    }

    ctx->pc = 0x1c2180u;

    // 0x1c2180: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x1c2180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1c2184: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1C2184u;
    {
        const bool branch_taken_0x1c2184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2184) {
            ctx->pc = 0x1C2234u;
            goto label_1c2234;
        }
    }
    ctx->pc = 0x1C218Cu;
    // 0x1c218c: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x1c218cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1c2190: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1c2190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1c2194: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c2194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c2198: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c2198u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c219c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c219cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c21a0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1C21A0u;
    {
        const bool branch_taken_0x1c21a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C21A0u;
            // 0x1c21a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c21a0) {
            ctx->pc = 0x1C2214u;
            goto label_1c2214;
        }
    }
    ctx->pc = 0x1C21A8u;
label_1c21a8:
    // 0x1c21a8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c21a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c21ac: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x1c21acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c21b0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1c21b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1c21b4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1c21b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c21b8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1c21b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1c21bc: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1c21bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1c21c0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c21c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c21c4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1c21c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1c21c8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1c21c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c21cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c21ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c21d0: 0x0  nop
    ctx->pc = 0x1c21d0u;
    // NOP
    // 0x1c21d4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1C21D4u;
    {
        const bool branch_taken_0x1c21d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c21d4) {
            ctx->pc = 0x1C21E8u;
            goto label_1c21e8;
        }
    }
    ctx->pc = 0x1C21DCu;
    // 0x1c21dc: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x1c21dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1c21e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c21e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c21e4: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x1c21e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
label_1c21e8:
    // 0x1c21e8: 0x8c870048  lw          $a3, 0x48($a0)
    ctx->pc = 0x1c21e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1c21ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1c21ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1c21f0: 0xa7182a  slt         $v1, $a1, $a3
    ctx->pc = 0x1c21f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1c21f4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C21F4u;
    {
        const bool branch_taken_0x1c21f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c21f4) {
            ctx->pc = 0x1C2200u;
            goto label_1c2200;
        }
    }
    ctx->pc = 0x1C21FCu;
    // 0x1c21fc: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x1c21fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1c2200:
    // 0x1c2200: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2200u;
    {
        const bool branch_taken_0x1c2200 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x1c2200) {
            ctx->pc = 0x1C220Cu;
            goto label_1c220c;
        }
    }
    ctx->pc = 0x1C2208u;
    // 0x1c2208: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1c2208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1c220c:
    // 0x1c220c: 0x0  nop
    ctx->pc = 0x1c220cu;
    // NOP
    // 0x1c2210: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c2210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1c2214:
    // 0x1c2214: 0x0  nop
    ctx->pc = 0x1c2214u;
    // NOP
    // 0x1c2218: 0x8c87004c  lw          $a3, 0x4C($a0)
    ctx->pc = 0x1c2218u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1c221c: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x1c221cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1c2220: 0x1460ffe1  bnez        $v1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1C2220u;
    {
        const bool branch_taken_0x1c2220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2220) {
            ctx->pc = 0x1C21A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c21a8;
        }
    }
    ctx->pc = 0x1C2228u;
    // 0x1c2228: 0x1ce00002  bgtz        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C2228u;
    {
        const bool branch_taken_0x1c2228 = (GPR_S32(ctx, 7) > 0);
        if (branch_taken_0x1c2228) {
            ctx->pc = 0x1C2234u;
            goto label_1c2234;
        }
    }
    ctx->pc = 0x1C2230u;
    // 0x1c2230: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x1c2230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
label_1c2234:
    // 0x1c2234: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C223Cu;
}
