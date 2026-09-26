#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetPkFrameBuffer__Fiiii
// Address: 0x143c60 - 0x144300
void mgSetPkFrameBuffer__Fiiii_0x143c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetPkFrameBuffer__Fiiii_0x143c60");
#endif

    switch (ctx->pc) {
        case 0x143ce8u: goto label_143ce8;
        case 0x143eccu: goto label_143ecc;
        case 0x143f88u: goto label_143f88;
        case 0x143fe0u: goto label_143fe0;
        case 0x1440e4u: goto label_1440e4;
        case 0x144124u: goto label_144124;
        case 0x144154u: goto label_144154;
        case 0x14418cu: goto label_14418c;
        case 0x1441ccu: goto label_1441cc;
        case 0x1441fcu: goto label_1441fc;
        default: break;
    }

    ctx->pc = 0x143c60u;

    // 0x143c60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x143c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x143c64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x143c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x143c68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x143c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x143c6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x143c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x143c70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x143c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x143c74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x143c74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x143c7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x143c7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143c84: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x143c84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143c88: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x143c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x143c8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143C8Cu;
    {
        const bool branch_taken_0x143c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143C8Cu;
            // 0x143c90: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c8c) {
            ctx->pc = 0x143CA0u;
            goto label_143ca0;
        }
    }
    ctx->pc = 0x143C94u;
    // 0x143c94: 0x3c0b0038  lui         $t3, 0x38
    ctx->pc = 0x143c94u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)56 << 16));
    // 0x143c98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x143C98u;
    {
        const bool branch_taken_0x143c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143C98u;
            // 0x143c9c: 0x256b21c0  addiu       $t3, $t3, 0x21C0 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143c98) {
            ctx->pc = 0x143CA8u;
            goto label_143ca8;
        }
    }
    ctx->pc = 0x143CA0u;
label_143ca0:
    // 0x143ca0: 0x3c0b0038  lui         $t3, 0x38
    ctx->pc = 0x143ca0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)56 << 16));
    // 0x143ca4: 0x256b22b0  addiu       $t3, $t3, 0x22B0
    ctx->pc = 0x143ca4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8880));
label_143ca8:
    // 0x143ca8: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x143CA8u;
    {
        const bool branch_taken_0x143ca8 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x143ca8) {
            ctx->pc = 0x143CB8u;
            goto label_143cb8;
        }
    }
    ctx->pc = 0x143CB0u;
    // 0x143cb0: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x143cb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x143cb4: 0x305301ff  andi        $s3, $v0, 0x1FF
    ctx->pc = 0x143cb4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_143cb8:
    // 0x143cb8: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143CB8u;
    {
        const bool branch_taken_0x143cb8 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x143cb8) {
            ctx->pc = 0x143CC8u;
            goto label_143cc8;
        }
    }
    ctx->pc = 0x143CC0u;
    // 0x143cc0: 0x91620003  lbu         $v0, 0x3($t3)
    ctx->pc = 0x143cc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x143cc4: 0x3050003f  andi        $s0, $v0, 0x3F
    ctx->pc = 0x143cc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_143cc8:
    // 0x143cc8: 0x8f84877c  lw          $a0, -0x7884($gp)
    ctx->pc = 0x143cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936444)));
    // 0x143ccc: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x143cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x143cd0: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x143cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x143cd4: 0x27878788  addiu       $a3, $gp, -0x7878
    ctx->pc = 0x143cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936456));
    // 0x143cd8: 0x2788878c  addiu       $t0, $gp, -0x7874
    ctx->pc = 0x143cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936460));
    // 0x143cdc: 0x27898790  addiu       $t1, $gp, -0x7870
    ctx->pc = 0x143cdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936464));
    // 0x143ce0: 0xc0504c8  jal         func_141320
    ctx->pc = 0x143CE0u;
    SET_GPR_U32(ctx, 31, 0x143CE8u);
    ctx->pc = 0x143CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143CE0u;
            // 0x143ce4: 0x278a8794  addiu       $t2, $gp, -0x786C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936468));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141320u;
    if (runtime->hasFunction(0x141320u)) {
        auto targetFn = runtime->lookupFunction(0x141320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143CE8u; }
        if (ctx->pc != 0x143CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetScreenSize__FiPiPiPiPiPiPi_0x141320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143CE8u; }
        if (ctx->pc != 0x143CE8u) { return; }
    }
    ctx->pc = 0x143CE8u;
label_143ce8:
    // 0x143ce8: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x143CE8u;
    {
        const bool branch_taken_0x143ce8 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x143ce8) {
            ctx->pc = 0x143CF8u;
            goto label_143cf8;
        }
    }
    ctx->pc = 0x143CF0u;
    // 0x143cf0: 0x8fb20078  lw          $s2, 0x78($sp)
    ctx->pc = 0x143cf0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x143cf4: 0x0  nop
    ctx->pc = 0x143cf4u;
    // NOP
label_143cf8:
    // 0x143cf8: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x143CF8u;
    {
        const bool branch_taken_0x143cf8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x143CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143CF8u;
            // 0x143cfc: 0x121823  negu        $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143cf8) {
            ctx->pc = 0x143D08u;
            goto label_143d08;
        }
    }
    ctx->pc = 0x143D00u;
    // 0x143d00: 0x8fb1007c  lw          $s1, 0x7C($sp)
    ctx->pc = 0x143d00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x143d04: 0x0  nop
    ctx->pc = 0x143d04u;
    // NOP
label_143d08:
    // 0x143d08: 0xaf928780  sw          $s2, -0x7880($gp)
    ctx->pc = 0x143d08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936448), GPR_U32(ctx, 18));
    // 0x143d0c: 0xaf918784  sw          $s1, -0x787C($gp)
    ctx->pc = 0x143d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936452), GPR_U32(ctx, 17));
    // 0x143d10: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x143D10u;
    {
        const bool branch_taken_0x143d10 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x143D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143D10u;
            // 0x143d14: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d10) {
            ctx->pc = 0x143D20u;
            goto label_143d20;
        }
    }
    ctx->pc = 0x143D18u;
    // 0x143d18: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x143d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x143d1c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x143d1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_143d20:
    // 0x143d20: 0xaf828788  sw          $v0, -0x7878($gp)
    ctx->pc = 0x143d20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936456), GPR_U32(ctx, 2));
    // 0x143d24: 0x111823  negu        $v1, $s1
    ctx->pc = 0x143d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x143d28: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x143D28u;
    {
        const bool branch_taken_0x143d28 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x143D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143D28u;
            // 0x143d2c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d28) {
            ctx->pc = 0x143D38u;
            goto label_143d38;
        }
    }
    ctx->pc = 0x143D30u;
    // 0x143d30: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x143d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x143d34: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x143d34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_143d38:
    // 0x143d38: 0xaf82878c  sw          $v0, -0x7874($gp)
    ctx->pc = 0x143d38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936460), GPR_U32(ctx, 2));
    // 0x143d3c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x143d3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143d40: 0x8f838788  lw          $v1, -0x7878($gp)
    ctx->pc = 0x143d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936456)));
    // 0x143d44: 0x3244003f  andi        $a0, $s2, 0x3F
    ctx->pc = 0x143d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)63);
    // 0x143d48: 0x8f82878c  lw          $v0, -0x7874($gp)
    ctx->pc = 0x143d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936460)));
    // 0x143d4c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x143d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x143d50: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x143d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x143d54: 0xaf838790  sw          $v1, -0x7870($gp)
    ctx->pc = 0x143d54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936464), GPR_U32(ctx, 3));
    // 0x143d58: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x143D58u;
    {
        const bool branch_taken_0x143d58 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x143D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143D58u;
            // 0x143d5c: 0xaf828794  sw          $v0, -0x786C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d58) {
            ctx->pc = 0x143D6Cu;
            goto label_143d6c;
        }
    }
    ctx->pc = 0x143D60u;
    // 0x143d60: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x143D60u;
    {
        const bool branch_taken_0x143d60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x143d60) {
            ctx->pc = 0x143D6Cu;
            goto label_143d6c;
        }
    }
    ctx->pc = 0x143D68u;
    // 0x143d68: 0x2484ffc0  addiu       $a0, $a0, -0x40
    ctx->pc = 0x143d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
label_143d6c:
    // 0x143d6c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143D6Cu;
    {
        const bool branch_taken_0x143d6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x143D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143D6Cu;
            // 0x143d70: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143d6c) {
            ctx->pc = 0x143D7Cu;
            goto label_143d7c;
        }
    }
    ctx->pc = 0x143D74u;
    // 0x143d74: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x143d74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x143d78: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x143d78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_143d7c:
    // 0x143d7c: 0xdd650000  ld          $a1, 0x0($t3)
    ctx->pc = 0x143d7cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x143d80: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x143d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x143d84: 0x2403fe00  addiu       $v1, $zero, -0x200
    ctx->pc = 0x143d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x143d88: 0x326401ff  andi        $a0, $s3, 0x1FF
    ctx->pc = 0x143d88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)511);
    // 0x143d8c: 0x71183  sra         $v0, $a3, 6
    ctx->pc = 0x143d8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 6));
    // 0x143d90: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x143d90u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x143d94: 0x97a50060  lhu         $a1, 0x60($sp)
    ctx->pc = 0x143d94u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x143d98: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x143d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x143d9c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x143d9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x143da0: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x143DA0u;
    {
        const bool branch_taken_0x143da0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x143DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143DA0u;
            // 0x143da4: 0xa7a30060  sh          $v1, 0x60($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143da0) {
            ctx->pc = 0x143DB0u;
            goto label_143db0;
        }
    }
    ctx->pc = 0x143DA8u;
    // 0x143da8: 0x24e2003f  addiu       $v0, $a3, 0x3F
    ctx->pc = 0x143da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
    // 0x143dac: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x143dacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_143db0:
    // 0x143db0: 0x304b003f  andi        $t3, $v0, 0x3F
    ctx->pc = 0x143db0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x143db4: 0x93a30062  lbu         $v1, 0x62($sp)
    ctx->pc = 0x143db4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 98)));
    // 0x143db8: 0x103c  dsll32      $v0, $zero, 0
    ctx->pc = 0x143db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) << (32 + 0));
    // 0x143dbc: 0x240affc0  addiu       $t2, $zero, -0x40
    ctx->pc = 0x143dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x143dc0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x143dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x143dc4: 0x93a80063  lbu         $t0, 0x63($sp)
    ctx->pc = 0x143dc4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 99)));
    // 0x143dc8: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x143dc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x143dcc: 0x3207003f  andi        $a3, $s0, 0x3F
    ctx->pc = 0x143dccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
    // 0x143dd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x143dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x143dd4: 0x122043  sra         $a0, $s2, 1
    ctx->pc = 0x143dd4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 18), 1));
    // 0x143dd8: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x143dd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x143ddc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x143ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x143de0: 0x6a4824  and         $t1, $v1, $t2
    ctx->pc = 0x143de0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x143de4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x143de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x143de8: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x143de8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x143dec: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x143decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x143df0: 0xa3a90062  sb          $t1, 0x62($sp)
    ctx->pc = 0x143df0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 98), (uint8_t)GPR_U32(ctx, 9));
    // 0x143df4: 0x10a1024  and         $v0, $t0, $t2
    ctx->pc = 0x143df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 10));
    // 0x143df8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x143df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x143dfc: 0xa3a20063  sb          $v0, 0x63($sp)
    ctx->pc = 0x143dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 99), (uint8_t)GPR_U32(ctx, 2));
    // 0x143e00: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x143e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x143e04: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x143e04u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x143e08: 0xdfa30060  ld          $v1, 0x60($sp)
    ctx->pc = 0x143e08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x143e0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x143e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x143e10: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x143e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x143e14: 0xffa20060  sd          $v0, 0x60($sp)
    ctx->pc = 0x143e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 2));
    // 0x143e18: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x143E18u;
    {
        const bool branch_taken_0x143e18 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x143E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143E18u;
            // 0x143e1c: 0xff828810  sd          $v0, -0x77F0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294936592), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e18) {
            ctx->pc = 0x143E28u;
            goto label_143e28;
        }
    }
    ctx->pc = 0x143E20u;
    // 0x143e20: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x143e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x143e24: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x143e24u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_143e28:
    // 0x143e28: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x143e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x143e2c: 0x111843  sra         $v1, $s1, 1
    ctx->pc = 0x143e2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 17), 1));
    // 0x143e30: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x143e30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x143e34: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x143E34u;
    {
        const bool branch_taken_0x143e34 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x143E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143E34u;
            // 0x143e38: 0xaf828798  sw          $v0, -0x7868($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e34) {
            ctx->pc = 0x143E44u;
            goto label_143e44;
        }
    }
    ctx->pc = 0x143E3Cu;
    // 0x143e3c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x143e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x143e40: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x143e40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
label_143e44:
    // 0x143e44: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x143e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x143e48: 0x87878798  lh          $a3, -0x7868($gp)
    ctx->pc = 0x143e48u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x143e4c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x143e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x143e50: 0x2408f800  addiu       $t0, $zero, -0x800
    ctx->pc = 0x143e50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x143e54: 0x97a30070  lhu         $v1, 0x70($sp)
    ctx->pc = 0x143e54u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x143e58: 0x300907ff  andi        $t1, $zero, 0x7FF
    ctx->pc = 0x143e58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)2047);
    // 0x143e5c: 0xaf82879c  sw          $v0, -0x7864($gp)
    ctx->pc = 0x143e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936476), GPR_U32(ctx, 2));
    // 0x143e60: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x143e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x143e64: 0x878a879c  lh          $t2, -0x7864($gp)
    ctx->pc = 0x143e64u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x143e68: 0x304507ff  andi        $a1, $v0, 0x7FF
    ctx->pc = 0x143e68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x143e6c: 0x97a60072  lhu         $a2, 0x72($sp)
    ctx->pc = 0x143e6cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 114)));
    // 0x143e70: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x143e70u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x143e74: 0x97a40074  lhu         $a0, 0x74($sp)
    ctx->pc = 0x143e74u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x143e78: 0xa7a70068  sh          $a3, 0x68($sp)
    ctx->pc = 0x143e78u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 104), (uint16_t)GPR_U32(ctx, 7));
    // 0x143e7c: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x143e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x143e80: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x143e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x143e84: 0x693825  or          $a3, $v1, $t1
    ctx->pc = 0x143e84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x143e88: 0x304307ff  andi        $v1, $v0, 0x7FF
    ctx->pc = 0x143e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x143e8c: 0xa7a70070  sh          $a3, 0x70($sp)
    ctx->pc = 0x143e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 7));
    // 0x143e90: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x143e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x143e94: 0xa7a2006c  sh          $v0, 0x6C($sp)
    ctx->pc = 0x143e94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 108), (uint16_t)GPR_U32(ctx, 2));
    // 0x143e98: 0xc81024  and         $v0, $a2, $t0
    ctx->pc = 0x143e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x143e9c: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x143e9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x143ea0: 0x881024  and         $v0, $a0, $t0
    ctx->pc = 0x143ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x143ea4: 0xa7a50072  sh          $a1, 0x72($sp)
    ctx->pc = 0x143ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 5));
    // 0x143ea8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x143ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x143eac: 0x8f848774  lw          $a0, -0x788C($gp)
    ctx->pc = 0x143eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x143eb0: 0xa7a20074  sh          $v0, 0x74($sp)
    ctx->pc = 0x143eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 116), (uint16_t)GPR_U32(ctx, 2));
    // 0x143eb4: 0x97a20076  lhu         $v0, 0x76($sp)
    ctx->pc = 0x143eb4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 118)));
    // 0x143eb8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x143eb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ebc: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x143ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x143ec0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x143ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x143ec4: 0xc041ace  jal         func_106B38
    ctx->pc = 0x143EC4u;
    SET_GPR_U32(ctx, 31, 0x143ECCu);
    ctx->pc = 0x143EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143EC4u;
            // 0x143ec8: 0xa7a20076  sh          $v0, 0x76($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 118), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B38u;
    if (runtime->hasFunction(0x106B38u)) {
        auto targetFn = runtime->lookupFunction(0x106B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143ECCu; }
        if (ctx->pc != 0x143ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkTerminate_0x106b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143ECCu; }
        if (ctx->pc != 0x143ECCu) { return; }
    }
    ctx->pc = 0x143ECCu;
label_143ecc:
    // 0x143ecc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x143eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x143ed0: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x143ed0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x143ed4: 0x35a70007  ori         $a3, $t5, 0x7
    ctx->pc = 0x143ed4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)7);
    // 0x143ed8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x143ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x143edc: 0x34660007  ori         $a2, $v1, 0x7
    ctx->pc = 0x143edcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7);
    // 0x143ee0: 0x34048006  ori         $a0, $zero, 0x8006
    ctx->pc = 0x143ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32774);
    // 0x143ee4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x143ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x143ee8: 0x240c003f  addiu       $t4, $zero, 0x3F
    ctx->pc = 0x143ee8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x143eec: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x143eecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x143ef0: 0x240a004c  addiu       $t2, $zero, 0x4C
    ctx->pc = 0x143ef0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x143ef4: 0x27a90068  addiu       $t1, $sp, 0x68
    ctx->pc = 0x143ef4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x143ef8: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x143ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x143efc: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x143efcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x143f00: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x143f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x143f04: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x143f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x143f08: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x143f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x143f0c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x143f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x143f10: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x143f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x143f14: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x143f14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x143f18: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x143f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x143f1c: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x143f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x143f20: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x143f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x143f24: 0xac4d0014  sw          $t5, 0x14($v0)
    ctx->pc = 0x143f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 13));
    // 0x143f28: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x143f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x143f2c: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x143f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x143f30: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x143f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x143f34: 0x32883  sra         $a1, $v1, 2
    ctx->pc = 0x143f34u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 2));
    // 0x143f38: 0xfc400020  sd          $zero, 0x20($v0)
    ctx->pc = 0x143f38u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 0));
    // 0x143f3c: 0xfc4c0028  sd          $t4, 0x28($v0)
    ctx->pc = 0x143f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 12));
    // 0x143f40: 0xdd6b0000  ld          $t3, 0x0($t3)
    ctx->pc = 0x143f40u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x143f44: 0xfc4b0030  sd          $t3, 0x30($v0)
    ctx->pc = 0x143f44u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 11));
    // 0x143f48: 0xfc4a0038  sd          $t2, 0x38($v0)
    ctx->pc = 0x143f48u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 10));
    // 0x143f4c: 0xdd290000  ld          $t1, 0x0($t1)
    ctx->pc = 0x143f4cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x143f50: 0xfc490040  sd          $t1, 0x40($v0)
    ctx->pc = 0x143f50u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 9));
    // 0x143f54: 0xfc480048  sd          $t0, 0x48($v0)
    ctx->pc = 0x143f54u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 8));
    // 0x143f58: 0xdce70000  ld          $a3, 0x0($a3)
    ctx->pc = 0x143f58u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x143f5c: 0xfc470050  sd          $a3, 0x50($v0)
    ctx->pc = 0x143f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 7));
    // 0x143f60: 0xfc460058  sd          $a2, 0x58($v0)
    ctx->pc = 0x143f60u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 6));
    // 0x143f64: 0xfc400060  sd          $zero, 0x60($v0)
    ctx->pc = 0x143f64u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 96), GPR_U64(ctx, 0));
    // 0x143f68: 0xfc440068  sd          $a0, 0x68($v0)
    ctx->pc = 0x143f68u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 4));
    // 0x143f6c: 0xfc400070  sd          $zero, 0x70($v0)
    ctx->pc = 0x143f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 112), GPR_U64(ctx, 0));
    // 0x143f70: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x143F70u;
    {
        const bool branch_taken_0x143f70 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x143F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143F70u;
            // 0x143f74: 0xfc4c0078  sd          $t4, 0x78($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 120), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f70) {
            ctx->pc = 0x143F80u;
            goto label_143f80;
        }
    }
    ctx->pc = 0x143F78u;
    // 0x143f78: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x143f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x143f7c: 0x22883  sra         $a1, $v0, 2
    ctx->pc = 0x143f7cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
label_143f80:
    // 0x143f80: 0xc041b7e  jal         func_106DF8
    ctx->pc = 0x143F80u;
    SET_GPR_U32(ctx, 31, 0x143F88u);
    ctx->pc = 0x143F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143F80u;
            // 0x143f84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106DF8u;
    if (runtime->hasFunction(0x106DF8u)) {
        auto targetFn = runtime->lookupFunction(0x106DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143F88u; }
        if (ctx->pc != 0x143F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkReserve_0x106df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143F88u; }
        if (ctx->pc != 0x143F88u) { return; }
    }
    ctx->pc = 0x143F88u;
label_143f88:
    // 0x143f88: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x143f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x143f8c: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x143F8Cu;
    {
        const bool branch_taken_0x143f8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x143F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143F8Cu;
            // 0x143f90: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f8c) {
            ctx->pc = 0x143FD0u;
            goto label_143fd0;
        }
    }
    ctx->pc = 0x143F94u;
    // 0x143f94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x143f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x143f98: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x143F98u;
    {
        const bool branch_taken_0x143f98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x143F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143F98u;
            // 0x143f9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f98) {
            ctx->pc = 0x143FC8u;
            goto label_143fc8;
        }
    }
    ctx->pc = 0x143FA0u;
    // 0x143fa0: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x143FA0u;
    {
        const bool branch_taken_0x143fa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x143fa0) {
            ctx->pc = 0x143FC0u;
            goto label_143fc0;
        }
    }
    ctx->pc = 0x143FA8u;
    // 0x143fa8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x143FA8u;
    {
        const bool branch_taken_0x143fa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x143fa8) {
            ctx->pc = 0x143FB8u;
            goto label_143fb8;
        }
    }
    ctx->pc = 0x143FB0u;
    // 0x143fb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x143FB0u;
    {
        const bool branch_taken_0x143fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143fb0) {
            ctx->pc = 0x143FD4u;
            goto label_143fd4;
        }
    }
    ctx->pc = 0x143FB8u;
label_143fb8:
    // 0x143fb8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x143FB8u;
    {
        const bool branch_taken_0x143fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143FB8u;
            // 0x143fbc: 0x24140020  addiu       $s4, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143fb8) {
            ctx->pc = 0x143FD4u;
            goto label_143fd4;
        }
    }
    ctx->pc = 0x143FC0u;
label_143fc0:
    // 0x143fc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x143FC0u;
    {
        const bool branch_taken_0x143fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143FC0u;
            // 0x143fc4: 0x24140018  addiu       $s4, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143fc0) {
            ctx->pc = 0x143FD4u;
            goto label_143fd4;
        }
    }
    ctx->pc = 0x143FC8u;
label_143fc8:
    // 0x143fc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x143FC8u;
    {
        const bool branch_taken_0x143fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143FC8u;
            // 0x143fcc: 0x24140010  addiu       $s4, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143fc8) {
            ctx->pc = 0x143FD4u;
            goto label_143fd4;
        }
    }
    ctx->pc = 0x143FD0u;
label_143fd0:
    // 0x143fd0: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x143fd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_143fd4:
    // 0x143fd4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x143fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x143fd8: 0xc04b12c  jal         func_12C4B0
    ctx->pc = 0x143FD8u;
    SET_GPR_U32(ctx, 31, 0x143FE0u);
    ctx->pc = 0x143FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143FD8u;
            // 0x143fdc: 0x24842490  addiu       $a0, $a0, 0x2490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C4B0u;
    if (runtime->hasFunction(0x12C4B0u)) {
        auto targetFn = runtime->lookupFunction(0x12C4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143FE0u; }
        if (ctx->pc != 0x143FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10mgCTextureFv_0x12c4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143FE0u; }
        if (ctx->pc != 0x143FE0u) { return; }
    }
    ctx->pc = 0x143FE0u;
label_143fe0:
    // 0x143fe0: 0x2511818  mult        $v1, $s2, $s1
    ctx->pc = 0x143fe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x143fe4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x143fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x143fe8: 0xa4322492  sh          $s2, 0x2492($at)
    ctx->pc = 0x143fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 9362), (uint16_t)GPR_U32(ctx, 18));
    // 0x143fec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x143fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x143ff0: 0xa4312494  sh          $s1, 0x2494($at)
    ctx->pc = 0x143ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 9364), (uint16_t)GPR_U32(ctx, 17));
    // 0x143ff4: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x143ff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x143ff8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x143ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x143ffc: 0xa4342496  sh          $s4, 0x2496($at)
    ctx->pc = 0x143ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 9366), (uint16_t)GPR_U32(ctx, 20));
    // 0x144000: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x144000u;
    {
        const bool branch_taken_0x144000 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x144004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144000u;
            // 0x144004: 0x320c3  sra         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144000) {
            ctx->pc = 0x144010u;
            goto label_144010;
        }
    }
    ctx->pc = 0x144008u;
    // 0x144008: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x144008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x14400c: 0x320c3  sra         $a0, $v1, 3
    ctx->pc = 0x14400cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 3));
label_144010:
    // 0x144010: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x144010u;
    {
        const bool branch_taken_0x144010 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x144014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144010u;
            // 0x144014: 0x41a03  sra         $v1, $a0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144010) {
            ctx->pc = 0x144020u;
            goto label_144020;
        }
    }
    ctx->pc = 0x144018u;
    // 0x144018: 0x248300ff  addiu       $v1, $a0, 0xFF
    ctx->pc = 0x144018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x14401c: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x14401cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
label_144020:
    // 0x144020: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x144020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x144024: 0x2404c000  addiu       $a0, $zero, -0x4000
    ctx->pc = 0x144024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x144028: 0xac2324b8  sw          $v1, 0x24B8($at)
    ctx->pc = 0x144028u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9400), GPR_U32(ctx, 3));
    // 0x14402c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x14402cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x144030: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x144030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x144034: 0xac2024c0  sw          $zero, 0x24C0($at)
    ctx->pc = 0x144034u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9408), GPR_U32(ctx, 0));
    // 0x144038: 0x30653fff  andi        $a1, $v1, 0x3FFF
    ctx->pc = 0x144038u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x14403c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x14403cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x144040: 0x121983  sra         $v1, $s2, 6
    ctx->pc = 0x144040u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 6));
    // 0x144044: 0xfc2024c8  sd          $zero, 0x24C8($at)
    ctx->pc = 0x144044u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 9416), GPR_U64(ctx, 0));
    // 0x144048: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x144048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14404c: 0x8c2724b8  lw          $a3, 0x24B8($at)
    ctx->pc = 0x14404cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9400)));
    // 0x144050: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x144050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x144054: 0x942624c8  lhu         $a2, 0x24C8($at)
    ctx->pc = 0x144054u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 9416)));
    // 0x144058: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x144058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14405c: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x14405cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x144060: 0xac2724bc  sw          $a3, 0x24BC($at)
    ctx->pc = 0x144060u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9404), GPR_U32(ctx, 7));
    // 0x144064: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x144064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x144068: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x144068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14406c: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x14406Cu;
    {
        const bool branch_taken_0x14406c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x144070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14406Cu;
            // 0x144070: 0xa42424c8  sh          $a0, 0x24C8($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 9416), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14406c) {
            ctx->pc = 0x14407Cu;
            goto label_14407c;
        }
    }
    ctx->pc = 0x144074u;
    // 0x144074: 0x2643003f  addiu       $v1, $s2, 0x3F
    ctx->pc = 0x144074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x144078: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x144078u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_14407c:
    // 0x14407c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x14407cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x144080: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x144080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x144084: 0xdc2724c8  ld          $a3, 0x24C8($at)
    ctx->pc = 0x144084u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 1), 9416)));
    // 0x144088: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x144088u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x14408c: 0x3085003f  andi        $a1, $a0, 0x3F
    ctx->pc = 0x14408cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x144090: 0x3203003f  andi        $v1, $s0, 0x3F
    ctx->pc = 0x144090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)63);
    // 0x144094: 0x533b8  dsll        $a2, $a1, 14
    ctx->pc = 0x144094u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << 14);
    // 0x144098: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x144098u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14409c: 0x3c05fff0  lui         $a1, 0xFFF0
    ctx->pc = 0x14409cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65520 << 16));
    // 0x1440a0: 0x2403fc0f  addiu       $v1, $zero, -0x3F1
    ctx->pc = 0x1440a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x1440a4: 0x34a53fff  ori         $a1, $a1, 0x3FFF
    ctx->pc = 0x1440a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16383);
    // 0x1440a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1440a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1440acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1440b0: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1440b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1440b4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1440b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1440b8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1440b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1440bc: 0xfc2524c8  sd          $a1, 0x24C8($at)
    ctx->pc = 0x1440bcu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 9416), GPR_U64(ctx, 5));
    // 0x1440c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1440c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1440c4: 0x942524ca  lhu         $a1, 0x24CA($at)
    ctx->pc = 0x1440c4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 9418)));
    // 0x1440c8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1440c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1440cc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1440ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1440d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1440d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1440d4: 0xa42324ca  sh          $v1, 0x24CA($at)
    ctx->pc = 0x1440d4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 9418), (uint16_t)GPR_U32(ctx, 3));
    // 0x1440d8: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x1440d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1440dc: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1440DCu;
    {
        const bool branch_taken_0x1440dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1440E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1440DCu;
            // 0x1440e0: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1440dc) {
            ctx->pc = 0x144104u;
            goto label_144104;
        }
    }
    ctx->pc = 0x1440E4u;
label_1440e4:
    // 0x1440e4: 0xa5043  sra         $t2, $t2, 1
    ctx->pc = 0x1440e4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 1));
    // 0x1440e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1440e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1440ec: 0x29410002  slti        $at, $t2, 0x2
    ctx->pc = 0x1440ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1440f0: 0x0  nop
    ctx->pc = 0x1440f0u;
    // NOP
    // 0x1440f4: 0x0  nop
    ctx->pc = 0x1440f4u;
    // NOP
    // 0x1440f8: 0x0  nop
    ctx->pc = 0x1440f8u;
    // NOP
    // 0x1440fc: 0x1020fff9  beqz        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1440FCu;
    {
        const bool branch_taken_0x1440fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1440fc) {
            ctx->pc = 0x1440E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1440e4;
        }
    }
    ctx->pc = 0x144104u;
label_144104:
    // 0x144104: 0x0  nop
    ctx->pc = 0x144104u;
    // NOP
    // 0x144108: 0x8082a  slt         $at, $zero, $t0
    ctx->pc = 0x144108u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x14410c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14410cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144110: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x144110u;
    {
        const bool branch_taken_0x144110 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x144114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144110u;
            // 0x144114: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144110) {
            ctx->pc = 0x144174u;
            goto label_144174;
        }
    }
    ctx->pc = 0x144118u;
    // 0x144118: 0x29010009  slti        $at, $t0, 0x9
    ctx->pc = 0x144118u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x14411c: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14411Cu;
    {
        const bool branch_taken_0x14411c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x144120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14411Cu;
            // 0x144120: 0x2505fff8  addiu       $a1, $t0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14411c) {
            ctx->pc = 0x144144u;
            goto label_144144;
        }
    }
    ctx->pc = 0x144124u;
label_144124:
    // 0x144124: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x144124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x144128: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x144128u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x14412c: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x14412cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x144130: 0x0  nop
    ctx->pc = 0x144130u;
    // NOP
    // 0x144134: 0x0  nop
    ctx->pc = 0x144134u;
    // NOP
    // 0x144138: 0x0  nop
    ctx->pc = 0x144138u;
    // NOP
    // 0x14413c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14413Cu;
    {
        const bool branch_taken_0x14413c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14413c) {
            ctx->pc = 0x144124u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_144124;
        }
    }
    ctx->pc = 0x144144u;
label_144144:
    // 0x144144: 0x0  nop
    ctx->pc = 0x144144u;
    // NOP
    // 0x144148: 0x88082a  slt         $at, $a0, $t0
    ctx->pc = 0x144148u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x14414c: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x14414Cu;
    {
        const bool branch_taken_0x14414c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14414c) {
            ctx->pc = 0x144174u;
            goto label_144174;
        }
    }
    ctx->pc = 0x144154u;
label_144154:
    // 0x144154: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x144154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x144158: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x144158u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x14415c: 0x88182a  slt         $v1, $a0, $t0
    ctx->pc = 0x14415cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x144160: 0x0  nop
    ctx->pc = 0x144160u;
    // NOP
    // 0x144164: 0x0  nop
    ctx->pc = 0x144164u;
    // NOP
    // 0x144168: 0x0  nop
    ctx->pc = 0x144168u;
    // NOP
    // 0x14416c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14416Cu;
    {
        const bool branch_taken_0x14416c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14416c) {
            ctx->pc = 0x144154u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_144154;
        }
    }
    ctx->pc = 0x144174u;
label_144174:
    // 0x144174: 0x0  nop
    ctx->pc = 0x144174u;
    // NOP
    // 0x144178: 0x12460002  beq         $s2, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x144178u;
    {
        const bool branch_taken_0x144178 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        ctx->pc = 0x14417Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144178u;
            // 0x14417c: 0x2a210002  slti        $at, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x144178) {
            ctx->pc = 0x144184u;
            goto label_144184;
        }
    }
    ctx->pc = 0x144180u;
    // 0x144180: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x144180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_144184:
    // 0x144184: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x144184u;
    {
        const bool branch_taken_0x144184 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x144188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144184u;
            // 0x144188: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144184) {
            ctx->pc = 0x1441ACu;
            goto label_1441ac;
        }
    }
    ctx->pc = 0x14418Cu;
label_14418c:
    // 0x14418c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x14418cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x144190: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x144190u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x144194: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x144194u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x144198: 0x0  nop
    ctx->pc = 0x144198u;
    // NOP
    // 0x14419c: 0x0  nop
    ctx->pc = 0x14419cu;
    // NOP
    // 0x1441a0: 0x0  nop
    ctx->pc = 0x1441a0u;
    // NOP
    // 0x1441a4: 0x1020fff9  beqz        $at, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1441A4u;
    {
        const bool branch_taken_0x1441a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1441a4) {
            ctx->pc = 0x14418Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14418c;
        }
    }
    ctx->pc = 0x1441ACu;
label_1441ac:
    // 0x1441ac: 0x0  nop
    ctx->pc = 0x1441acu;
    // NOP
    // 0x1441b0: 0x9082a  slt         $at, $zero, $t1
    ctx->pc = 0x1441b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1441b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1441b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1441b8: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x1441B8u;
    {
        const bool branch_taken_0x1441b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1441BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1441B8u;
            // 0x1441bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441b8) {
            ctx->pc = 0x14421Cu;
            goto label_14421c;
        }
    }
    ctx->pc = 0x1441C0u;
    // 0x1441c0: 0x29210009  slti        $at, $t1, 0x9
    ctx->pc = 0x1441c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1441c4: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1441C4u;
    {
        const bool branch_taken_0x1441c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1441C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1441C4u;
            // 0x1441c8: 0x2524fff8  addiu       $a0, $t1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1441c4) {
            ctx->pc = 0x1441ECu;
            goto label_1441ec;
        }
    }
    ctx->pc = 0x1441CCu;
label_1441cc:
    // 0x1441cc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1441ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1441d0: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1441d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x1441d4: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x1441d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1441d8: 0x0  nop
    ctx->pc = 0x1441d8u;
    // NOP
    // 0x1441dc: 0x0  nop
    ctx->pc = 0x1441dcu;
    // NOP
    // 0x1441e0: 0x0  nop
    ctx->pc = 0x1441e0u;
    // NOP
    // 0x1441e4: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1441E4u;
    {
        const bool branch_taken_0x1441e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1441e4) {
            ctx->pc = 0x1441CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1441cc;
        }
    }
    ctx->pc = 0x1441ECu;
label_1441ec:
    // 0x1441ec: 0x0  nop
    ctx->pc = 0x1441ecu;
    // NOP
    // 0x1441f0: 0xc9082a  slt         $at, $a2, $t1
    ctx->pc = 0x1441f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1441f4: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1441F4u;
    {
        const bool branch_taken_0x1441f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1441f4) {
            ctx->pc = 0x14421Cu;
            goto label_14421c;
        }
    }
    ctx->pc = 0x1441FCu;
label_1441fc:
    // 0x1441fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1441fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x144200: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x144200u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x144204: 0xc9182a  slt         $v1, $a2, $t1
    ctx->pc = 0x144204u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x144208: 0x0  nop
    ctx->pc = 0x144208u;
    // NOP
    // 0x14420c: 0x0  nop
    ctx->pc = 0x14420cu;
    // NOP
    // 0x144210: 0x0  nop
    ctx->pc = 0x144210u;
    // NOP
    // 0x144214: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x144214u;
    {
        const bool branch_taken_0x144214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x144214) {
            ctx->pc = 0x1441FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1441fc;
        }
    }
    ctx->pc = 0x14421Cu;
label_14421c:
    // 0x14421c: 0x0  nop
    ctx->pc = 0x14421cu;
    // NOP
    // 0x144220: 0x12250003  beq         $s1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x144220u;
    {
        const bool branch_taken_0x144220 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        ctx->pc = 0x144224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144220u;
            // 0x144224: 0x9183c  dsll32      $v1, $t1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144220) {
            ctx->pc = 0x144230u;
            goto label_144230;
        }
    }
    ctx->pc = 0x144228u;
    // 0x144228: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x144228u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x14422c: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x14422cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
label_144230:
    // 0x144230: 0x3104000f  andi        $a0, $t0, 0xF
    ctx->pc = 0x144230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x144234: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x144234u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x144238: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x144238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14423c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x14423cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x144240: 0x902c24cb  lbu         $t4, 0x24CB($at)
    ctx->pc = 0x144240u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 9419)));
    // 0x144244: 0x357b8  dsll        $t2, $v1, 30
    ctx->pc = 0x144244u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << 30);
    // 0x144248: 0x45880  sll         $t3, $a0, 2
    ctx->pc = 0x144248u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14424c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x14424cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x144250: 0x2406ffc3  addiu       $a2, $zero, -0x3D
    ctx->pc = 0x144250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967235));
    // 0x144254: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x144254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x144258: 0x2407fffb  addiu       $a3, $zero, -0x5
    ctx->pc = 0x144258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x14425c: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x14425cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x144260: 0x64080004  daddiu      $t0, $zero, 0x4
    ctx->pc = 0x144260u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x144264: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x144264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x144268: 0x2405ffe7  addiu       $a1, $zero, -0x19
    ctx->pc = 0x144268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x14426c: 0x644825  or          $t1, $v1, $a0
    ctx->pc = 0x14426cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x144270: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x144270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x144274: 0x30030003  andi        $v1, $zero, 0x3
    ctx->pc = 0x144274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x144278: 0x1862024  and         $a0, $t4, $a2
    ctx->pc = 0x144278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & GPR_U64(ctx, 6));
    // 0x14427c: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x14427cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x144280: 0x8b1825  or          $v1, $a0, $t3
    ctx->pc = 0x144280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x144284: 0xa02324cb  sb          $v1, 0x24CB($at)
    ctx->pc = 0x144284u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9419), (uint8_t)GPR_U32(ctx, 3));
    // 0x144288: 0x24040261  addiu       $a0, $zero, 0x261
    ctx->pc = 0x144288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    // 0x14428c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x14428cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x144290: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x144290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x144294: 0xdc2b24c8  ld          $t3, 0x24C8($at)
    ctx->pc = 0x144294u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 1), 9416)));
    // 0x144298: 0x246324d0  addiu       $v1, $v1, 0x24D0
    ctx->pc = 0x144298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9424));
    // 0x14429c: 0x1694824  and         $t1, $t3, $t1
    ctx->pc = 0x14429cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) & GPR_U64(ctx, 9));
    // 0x1442a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1442a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1442a4: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x1442a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x1442a8: 0xfc2924c8  sd          $t1, 0x24C8($at)
    ctx->pc = 0x1442a8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 9416), GPR_U64(ctx, 9));
    // 0x1442ac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1442acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1442b0: 0x902924cc  lbu         $t1, 0x24CC($at)
    ctx->pc = 0x1442b0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 9420)));
    // 0x1442b4: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x1442b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x1442b8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1442b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1442bc: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1442bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1442c0: 0xa02724cc  sb          $a3, 0x24CC($at)
    ctx->pc = 0x1442c0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9420), (uint8_t)GPR_U32(ctx, 7));
    // 0x1442c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1442c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1442c8: 0x902724cc  lbu         $a3, 0x24CC($at)
    ctx->pc = 0x1442c8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 9420)));
    // 0x1442cc: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1442ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1442d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1442d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1442d4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x1442d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x1442d8: 0xa02524cc  sb          $a1, 0x24CC($at)
    ctx->pc = 0x1442d8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 9420), (uint8_t)GPR_U32(ctx, 5));
    // 0x1442dc: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x1442dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x1442e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1442e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1442e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1442e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1442e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1442e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1442ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1442ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1442f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1442f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1442f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1442f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1442f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1442F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1442FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1442F8u;
            // 0x1442fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144300u;
}
