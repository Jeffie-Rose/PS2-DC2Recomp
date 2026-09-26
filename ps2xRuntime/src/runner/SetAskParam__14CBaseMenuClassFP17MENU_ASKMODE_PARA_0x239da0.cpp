#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetAskParam__14CBaseMenuClassFP17MENU_ASKMODE_PARA
// Address: 0x239da0 - 0x239f28
void SetAskParam__14CBaseMenuClassFP17MENU_ASKMODE_PARA_0x239da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetAskParam__14CBaseMenuClassFP17MENU_ASKMODE_PARA_0x239da0");
#endif

    switch (ctx->pc) {
        case 0x239db4u: goto label_239db4;
        case 0x239de0u: goto label_239de0;
        default: break;
    }

    ctx->pc = 0x239da0u;

    // 0x239da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x239da4: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x239DA4u;
    {
        const bool branch_taken_0x239da4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x239DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239DA4u;
            // 0x239da8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239da4) {
            ctx->pc = 0x239DBCu;
            goto label_239dbc;
        }
    }
    ctx->pc = 0x239DACu;
    // 0x239dac: 0xc08e99c  jal         func_23A670
    ctx->pc = 0x239DACu;
    SET_GPR_U32(ctx, 31, 0x239DB4u);
    ctx->pc = 0x239DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239DACu;
            // 0x239db0: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A670u;
    if (runtime->hasFunction(0x23A670u)) {
        auto targetFn = runtime->lookupFunction(0x23A670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239DB4u; }
        if (ctx->pc != 0x239DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17MENU_ASKMODE_PARAFv_0x23a670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239DB4u; }
        if (ctx->pc != 0x239DB4u) { return; }
    }
    ctx->pc = 0x239DB4u;
label_239db4:
    // 0x239db4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x239DB4u;
    {
        const bool branch_taken_0x239db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239DB4u;
            // 0x239db8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239db4) {
            ctx->pc = 0x239F20u;
            goto label_239f20;
        }
    }
    ctx->pc = 0x239DBCu;
label_239dbc:
    // 0x239dbc: 0x84a80000  lh          $t0, 0x0($a1)
    ctx->pc = 0x239dbcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x239dc0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x239dc0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239dc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x239dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239dc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x239dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239dcc: 0xa4880058  sh          $t0, 0x58($a0)
    ctx->pc = 0x239dccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 8));
    // 0x239dd0: 0x84a80002  lh          $t0, 0x2($a1)
    ctx->pc = 0x239dd0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x239dd4: 0xa488005a  sh          $t0, 0x5A($a0)
    ctx->pc = 0x239dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 90), (uint16_t)GPR_U32(ctx, 8));
    // 0x239dd8: 0x84a80004  lh          $t0, 0x4($a1)
    ctx->pc = 0x239dd8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x239ddc: 0xa488005c  sh          $t0, 0x5C($a0)
    ctx->pc = 0x239ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 8));
label_239de0:
    // 0x239de0: 0xa64021  addu        $t0, $a1, $a2
    ctx->pc = 0x239de0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x239de4: 0x864821  addu        $t1, $a0, $a2
    ctx->pc = 0x239de4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x239de8: 0x8d0d0008  lw          $t5, 0x8($t0)
    ctx->pc = 0x239de8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x239dec: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x239decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x239df0: 0xa75021  addu        $t2, $a1, $a3
    ctx->pc = 0x239df0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x239df4: 0x875821  addu        $t3, $a0, $a3
    ctx->pc = 0x239df4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x239df8: 0x286c0010  slti        $t4, $v1, 0x10
    ctx->pc = 0x239df8u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x239dfc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x239dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x239e00: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x239e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x239e04: 0xad2d0060  sw          $t5, 0x60($t1)
    ctx->pc = 0x239e04u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 96), GPR_U32(ctx, 13));
    // 0x239e08: 0x8d0d0028  lw          $t5, 0x28($t0)
    ctx->pc = 0x239e08u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x239e0c: 0xad2d0080  sw          $t5, 0x80($t1)
    ctx->pc = 0x239e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 128), GPR_U32(ctx, 13));
    // 0x239e10: 0x854d0048  lh          $t5, 0x48($t2)
    ctx->pc = 0x239e10u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 72)));
    // 0x239e14: 0xa56d00a0  sh          $t5, 0xA0($t3)
    ctx->pc = 0x239e14u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 160), (uint16_t)GPR_U32(ctx, 13));
    // 0x239e18: 0x8d0d000c  lw          $t5, 0xC($t0)
    ctx->pc = 0x239e18u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x239e1c: 0xad2d0064  sw          $t5, 0x64($t1)
    ctx->pc = 0x239e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 100), GPR_U32(ctx, 13));
    // 0x239e20: 0x8d0d002c  lw          $t5, 0x2C($t0)
    ctx->pc = 0x239e20u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x239e24: 0xad2d0084  sw          $t5, 0x84($t1)
    ctx->pc = 0x239e24u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 132), GPR_U32(ctx, 13));
    // 0x239e28: 0x854d004a  lh          $t5, 0x4A($t2)
    ctx->pc = 0x239e28u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 74)));
    // 0x239e2c: 0xa56d00a2  sh          $t5, 0xA2($t3)
    ctx->pc = 0x239e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 162), (uint16_t)GPR_U32(ctx, 13));
    // 0x239e30: 0x8d0d0010  lw          $t5, 0x10($t0)
    ctx->pc = 0x239e30u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x239e34: 0xad2d0068  sw          $t5, 0x68($t1)
    ctx->pc = 0x239e34u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 104), GPR_U32(ctx, 13));
    // 0x239e38: 0x8d0d0030  lw          $t5, 0x30($t0)
    ctx->pc = 0x239e38u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x239e3c: 0xad2d0088  sw          $t5, 0x88($t1)
    ctx->pc = 0x239e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 136), GPR_U32(ctx, 13));
    // 0x239e40: 0x854d004c  lh          $t5, 0x4C($t2)
    ctx->pc = 0x239e40u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 76)));
    // 0x239e44: 0xa56d00a4  sh          $t5, 0xA4($t3)
    ctx->pc = 0x239e44u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 164), (uint16_t)GPR_U32(ctx, 13));
    // 0x239e48: 0x8d0d0014  lw          $t5, 0x14($t0)
    ctx->pc = 0x239e48u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x239e4c: 0xad2d006c  sw          $t5, 0x6C($t1)
    ctx->pc = 0x239e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 108), GPR_U32(ctx, 13));
    // 0x239e50: 0x8d0d0034  lw          $t5, 0x34($t0)
    ctx->pc = 0x239e50u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x239e54: 0xad2d008c  sw          $t5, 0x8C($t1)
    ctx->pc = 0x239e54u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 140), GPR_U32(ctx, 13));
    // 0x239e58: 0x854d004e  lh          $t5, 0x4E($t2)
    ctx->pc = 0x239e58u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 78)));
    // 0x239e5c: 0xa56d00a6  sh          $t5, 0xA6($t3)
    ctx->pc = 0x239e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 166), (uint16_t)GPR_U32(ctx, 13));
    // 0x239e60: 0x8d0d0018  lw          $t5, 0x18($t0)
    ctx->pc = 0x239e60u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x239e64: 0xad2d0070  sw          $t5, 0x70($t1)
    ctx->pc = 0x239e64u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 112), GPR_U32(ctx, 13));
    // 0x239e68: 0x8d0d0038  lw          $t5, 0x38($t0)
    ctx->pc = 0x239e68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x239e6c: 0xad2d0090  sw          $t5, 0x90($t1)
    ctx->pc = 0x239e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 144), GPR_U32(ctx, 13));
    // 0x239e70: 0x854d0050  lh          $t5, 0x50($t2)
    ctx->pc = 0x239e70u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 80)));
    // 0x239e74: 0xa56d00a8  sh          $t5, 0xA8($t3)
    ctx->pc = 0x239e74u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 168), (uint16_t)GPR_U32(ctx, 13));
    // 0x239e78: 0x8d0d001c  lw          $t5, 0x1C($t0)
    ctx->pc = 0x239e78u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x239e7c: 0xad2d0074  sw          $t5, 0x74($t1)
    ctx->pc = 0x239e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 116), GPR_U32(ctx, 13));
    // 0x239e80: 0x8d0d003c  lw          $t5, 0x3C($t0)
    ctx->pc = 0x239e80u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x239e84: 0xad2d0094  sw          $t5, 0x94($t1)
    ctx->pc = 0x239e84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 148), GPR_U32(ctx, 13));
    // 0x239e88: 0x854d0052  lh          $t5, 0x52($t2)
    ctx->pc = 0x239e88u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 82)));
    // 0x239e8c: 0xa56d00aa  sh          $t5, 0xAA($t3)
    ctx->pc = 0x239e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 170), (uint16_t)GPR_U32(ctx, 13));
    // 0x239e90: 0x8d0d0020  lw          $t5, 0x20($t0)
    ctx->pc = 0x239e90u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x239e94: 0xad2d0078  sw          $t5, 0x78($t1)
    ctx->pc = 0x239e94u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 120), GPR_U32(ctx, 13));
    // 0x239e98: 0x8d0d0040  lw          $t5, 0x40($t0)
    ctx->pc = 0x239e98u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x239e9c: 0xad2d0098  sw          $t5, 0x98($t1)
    ctx->pc = 0x239e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 152), GPR_U32(ctx, 13));
    // 0x239ea0: 0x854d0054  lh          $t5, 0x54($t2)
    ctx->pc = 0x239ea0u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 84)));
    // 0x239ea4: 0xa56d00ac  sh          $t5, 0xAC($t3)
    ctx->pc = 0x239ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 172), (uint16_t)GPR_U32(ctx, 13));
    // 0x239ea8: 0x8d0d0024  lw          $t5, 0x24($t0)
    ctx->pc = 0x239ea8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x239eac: 0xad2d007c  sw          $t5, 0x7C($t1)
    ctx->pc = 0x239eacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 124), GPR_U32(ctx, 13));
    // 0x239eb0: 0x8d080044  lw          $t0, 0x44($t0)
    ctx->pc = 0x239eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 68)));
    // 0x239eb4: 0xad28009c  sw          $t0, 0x9C($t1)
    ctx->pc = 0x239eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 156), GPR_U32(ctx, 8));
    // 0x239eb8: 0x85480056  lh          $t0, 0x56($t2)
    ctx->pc = 0x239eb8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 86)));
    // 0x239ebc: 0x1580ffc8  bnez        $t4, . + 4 + (-0x38 << 2)
    ctx->pc = 0x239EBCu;
    {
        const bool branch_taken_0x239ebc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x239EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239EBCu;
            // 0x239ec0: 0xa56800ae  sh          $t0, 0xAE($t3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 11), 174), (uint16_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ebc) {
            ctx->pc = 0x239DE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239de0;
        }
    }
    ctx->pc = 0x239EC4u;
    // 0x239ec4: 0x8ca30074  lw          $v1, 0x74($a1)
    ctx->pc = 0x239ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
    // 0x239ec8: 0xac8300cc  sw          $v1, 0xCC($a0)
    ctx->pc = 0x239ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 3));
    // 0x239ecc: 0x8ca30078  lw          $v1, 0x78($a1)
    ctx->pc = 0x239eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 120)));
    // 0x239ed0: 0xac8300d0  sw          $v1, 0xD0($a0)
    ctx->pc = 0x239ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
    // 0x239ed4: 0x84a30070  lh          $v1, 0x70($a1)
    ctx->pc = 0x239ed4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x239ed8: 0xa48300c8  sh          $v1, 0xC8($a0)
    ctx->pc = 0x239ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 200), (uint16_t)GPR_U32(ctx, 3));
    // 0x239edc: 0x84a30068  lh          $v1, 0x68($a1)
    ctx->pc = 0x239edcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x239ee0: 0xa48300c0  sh          $v1, 0xC0($a0)
    ctx->pc = 0x239ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 192), (uint16_t)GPR_U32(ctx, 3));
    // 0x239ee4: 0x8ca3007c  lw          $v1, 0x7C($a1)
    ctx->pc = 0x239ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x239ee8: 0xac8300d4  sw          $v1, 0xD4($a0)
    ctx->pc = 0x239ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 3));
    // 0x239eec: 0x84a3006a  lh          $v1, 0x6A($a1)
    ctx->pc = 0x239eecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 106)));
    // 0x239ef0: 0xa48300c2  sh          $v1, 0xC2($a0)
    ctx->pc = 0x239ef0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 194), (uint16_t)GPR_U32(ctx, 3));
    // 0x239ef4: 0x8ca30080  lw          $v1, 0x80($a1)
    ctx->pc = 0x239ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x239ef8: 0xac8300d8  sw          $v1, 0xD8($a0)
    ctx->pc = 0x239ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 3));
    // 0x239efc: 0x84a3006c  lh          $v1, 0x6C($a1)
    ctx->pc = 0x239efcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x239f00: 0xa48300c4  sh          $v1, 0xC4($a0)
    ctx->pc = 0x239f00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 196), (uint16_t)GPR_U32(ctx, 3));
    // 0x239f04: 0x8ca30084  lw          $v1, 0x84($a1)
    ctx->pc = 0x239f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x239f08: 0xac8300dc  sw          $v1, 0xDC($a0)
    ctx->pc = 0x239f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 3));
    // 0x239f0c: 0x84a3006e  lh          $v1, 0x6E($a1)
    ctx->pc = 0x239f0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 110)));
    // 0x239f10: 0xa48300c6  sh          $v1, 0xC6($a0)
    ctx->pc = 0x239f10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 198), (uint16_t)GPR_U32(ctx, 3));
    // 0x239f14: 0x8ca30088  lw          $v1, 0x88($a1)
    ctx->pc = 0x239f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x239f18: 0xac8300e0  sw          $v1, 0xE0($a0)
    ctx->pc = 0x239f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
    // 0x239f1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239f20:
    // 0x239f20: 0x3e00008  jr          $ra
    ctx->pc = 0x239F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239F20u;
            // 0x239f24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239F28u;
}
